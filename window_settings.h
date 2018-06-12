#ifndef WINDOW_SETTINGS_H
#define WINDOW_SETTINGS_H
/*!
* \file
* \brief Definicja klasy window_settings
*
*
* Plik zawiera definicję klasy window_settings,
* która zajmuje się zapisem i odczytem ustawień
* portu komunikacyjnego i częstotliwości odświerzania
* wykresów
*
*/
#include <QDialog>
#include <QSettings>
#include <QComboBox>
namespace Ui {
class window_settings;
}
/*!
 *\brief Modeluje klasę window_settings
 *
 * Klasa modeluje pojęcie okna ustawień
 * portu komunikacyjnego i częstotliwości
 * odświerzania grafów.
 * Posiada opcję zapisu i odczytu tych ustawień.
 *
 *
 *
 */
class window_settings : public QDialog
{
    Q_OBJECT

public:
    /*!
     * \brief Konstruuje obiekt window_settings
     * \param parent - wskaźnik na "ojca"
     */
    explicit window_settings(QWidget *parent = 0);
    ~window_settings();
    /*!
     * \brief load_settings
     *
     * Wczytuje ustawienia wprowadzone podczas
     * korzystania z aplikacji.
     */
    void load_settings();
    /*!
     * \brief save_settings
     *
     * Zapisuje aktualne ustawienia okna ustawień.
     */
    void save_settings();
signals:
    /*!
     * \brief new_settings
     *
     * Wysyła sygnał informujący o zmianie
     * aktualnych ustawień w oknie ustawień.
     */
    void new_settings();
private slots:
    /*!
     * \brief on_buttonBox_accepted
     *
     * Funkcja wywoływana po zaakceptowaniu
     * przez użytkownika ustawień wybranych
     * w oknie ustawień
     */
    void on_buttonBox_accepted();
    /*!
     * \brief on_buttonBox_rejected
     *
     * Funkcja wywoływana po nie zaakceptowaniu
     * przez użytkownika ustawień wybranych
     * w oknie ustawień
     */
    void on_buttonBox_rejected();

private:
    Ui::window_settings *ui;
    /*!
     * \brief reject
     *
     * Funkcja wywoływana przy zamknięciu
     * przez użytkownika okna ustawień przyciskiem
     *  "X"
     */
    void reject();
};

#endif // WINDOW_SETTINGS_H
