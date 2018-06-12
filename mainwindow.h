#ifndef MAINWINDOW_H
#define MAINWINDOW_H
/*!
* \file
* \brief Definicja klasy MainWindow
*
*
* Plik zawiera definicję klasy MainWindow
* która nazdoruje pracę okien na niej wywoływanych
* oraz komunikację sygnałów/slotów
*
*/

#include <QMainWindow>
#include <QSerialPort>
#include <window_settings.h>
namespace Ui {
class MainWindow;
}
/*!
 * \brief Tworzy pojęcie klasy MainWindow
 *
 * Jest to klasa główna obsługująca komunikację między innymi oknami,
 * a także obsługuje połączenie z urządzeniem podłączonym do portu COM
 */
class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    /*!
     * \brief Konstruuje obiekt MainWindow
     * \param parent - wskaźnik na "ojca"
     */
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    /*!
     * \brief windowSettings
     *
     * Wskaźnik na okno ustawień
     */
    window_settings *windowSettings;
    /*!
     * \brief stm32
     *
     * Wskaźnik na obiekt QSerialPort z którym łączy się aplikacja
     */
    QSerialPort* stm32;
    /*!
     * \brief stm32_buffer
     *
     * Aktualna ramka danych pobrana z urządzenia w formie stringa
     */
    QString stm32_buffer;
    /*!
     * \brief stm32_data
     *
     * Aktualna ramka danych pobrana z urządzenia w surowej formie
     */
    QByteArray stm32_data;
    /*!
     * \brief stm32_bufferSplit
     *
     * Aktualna ramka danych pobrana z urządzenia podzielona separatorem " " (spacja).
     * Każda komórka posiada wartość pobraną z urządzenia. Ostatnia komórka to znak końca linii "\r\n"
     */
    QStringList stm32_bufferSplit;
    /*!
     * \brief load_settings
     *
     * Wczytuje ustawienia dotyczące odświerzania wykresów i portu komunikacyjnego
     */
    void load_settings();
private slots:
    /*!
     * \brief stm32_connect
     *
     * Wykonuje połączenie z urządzeniem na porcie zdefiniowanym w ustawieniach
     */
    void stm32_connect();
    /*!
     * \brief stm32_disconnect
     *
     * Rozłącza się z urządzeniem, z którym była połączona aplikacja
     */
    void stm32_disconnect();
    /*!
     * \brief stm32_reconnect
     *
     * Rozłącza się i ponownie łączy z urządzeniem na porcie zdefiniowanym w ustawieniach
     */
    void stm32_reconnect();
    /*!
     * \brief stm32_read
     *
     * nasłuchuje na porcie wskazanym w ustawieniach i odczytuje oraz obrabia dane z niego odebrane
     */
    void stm32_read();
    /*!
     * \brief on_actionUstawienia_portu_triggered
     *
     * Wyświetla okno ustawień, jeżeli użytkownik kliknął w opcję "Ustawienia"
     */
    void on_actionUstawienia_portu_triggered();
    /*!
     * \brief on_actionStart_Stop_triggered
     *
     * Reaguje na kliknięcie w opcję "Start/Stop". Ponownie łączy się z urządzeniem. W przypadku pierwszego
     * użycia wykonuje próbę połączenia
     */
    void on_actionStart_Stop_triggered();
    /*!
     * \brief stm32_show_connect_fail
     *
     * Wyświetla okno błędu w wypadku nieudanej próby połaczenia się z urządzeniem na wskazanym porcie
     */
    void stm32_show_connect_fail();
signals:
    /*!
     * \brief stm32_newDataReady
     *
     * Wysyła sygnał, gdy aplikacja odebrała nowe dane i poprawnie je odczytała
     * \param data_in
     */
    void stm32_newDataReady(QStringList data_in);
    /*!
     * \brief stm32_connect_fail
     *
     * Wysyła sygnał nieudanego połaczenia aplikacji z urządzeniem na wskazanym porcie
     */
    void stm32_connect_fail();
    /*!
     * \brief stm32_connect_success
     *
     * Wysyła sygnał udanego połączenia aplikacji z urządzeniem na wskazanym porcie
     */
    void stm32_connect_success();
protected:
    /*!
     * \brief closeEvent
     *
     * Wywoływana przy zamykaniu aplikacji. Zapisuje aktualne ustawienia i zamyka aplikację
     */
    void closeEvent(QCloseEvent* event);
};

#endif // MAINWINDOW_H
