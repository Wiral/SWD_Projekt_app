#ifndef WINDOW_DATA_H
#define WINDOW_DATA_H
/*!
* \file
* \brief Definicja klasy window_data
*
*
* Plik zawiera definicję klasy window_data,
* która zajmuje się wyświetlaniem danych pobieranych z
* żyroskopu i akcelerometru
*
*/
#include <QWidget>
#include <QSerialPort>
namespace Ui {
class window_data;
}
/*!
 * \brief Definiuje pojęcie klasy window_data
 */
class window_data : public QWidget
{
    Q_OBJECT
public:
    /*!
     * \brief Konstruuje obiekt window_data
     * \param parent - wskaźnik na "ojca"
     */
    explicit window_data(QWidget *parent = 0);
    ~window_data();
private:
    Ui::window_data *ui;
public slots:
    /*!
     * \brief update_data
     *
     * Aktualizuje aktualnie wyświetlane wartości pomiarów nowymi
     * \param data_in - ramka danych z pomiarami z akcelerometru i żyroskopu
     */
    void update_data(QStringList data_in);

};

#endif // WINDOW_DATA_H
