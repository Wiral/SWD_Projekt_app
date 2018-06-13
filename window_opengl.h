#ifndef WINDOW_OPENGL_H
#define WINDOW_OPENGL_H
/*!
* \file
* \brief Definicja klasy window_opengl
*
*
* Plik zawiera definicję klasy window_opengl,
* która zajmuje się wizualizacją 3D orientacji
* płytki w przestrzeni na podstawie pomiarów z
* akcelerometru i żyroskopu
*
*/
#include <QWidget>
#include <QOpenGLWidget>
#define DPS 250 //rozdzielczosc dps żyroskopu
#define ABS_SAMPLE_MAX 0x7fff //max rozmiar próbki
namespace Ui {
class window_opengl;
}
/*!
 * \brief Modeluje pojęcie klasy window_opengl
 *
 * Tworzy obiekt okna z obslugą OpenGL i
 * jego podstawową obsługą
 */
class window_opengl : public QOpenGLWidget
{
    Q_OBJECT
public:
    /*!
     * \brief Konstruuje obiekt window_opengl
     * \param parent - wskaźnik na "ojca"
     */
    explicit window_opengl(QWidget *parent = 0);
    /*!
     * \brief initializeGL
     *
     * Inicjuje bibliotekę OpenGL
     */
    virtual void initializeGL();
    ~window_opengl();
public slots:
    /*!
     * \brief paintGL
     *
     * Wyoknuje operację rysowania obiektu
     */
    virtual void paintGL();
    /*!
     * \brief prepare_data
     *
     * Przygotowuje zmiennie \link window_opengl::orientation_x\endlink, \link window_opengl::orientation_y\endlink oraz \link window_opengl::orientation_z\endlink
     * Obliczane na podstawie aktualnych danych z żyroskopu pobranych z urządzenia
     * \param data_in - ramka danych zawierająca
     * dane z akcelerometru i żyroskopu
     */
    void prepare_data(QStringList data_in);
private:
    /*!
     * \brief angle_x
     *
     * suma kolejnych odczytów z żyroskopu dla osi x[deg/s]
     */
    int angle_x = 0;
    /*!
     * \brief angle_y
     *
     * suma kolejnych odczytów z żyroskopu dla osi y [deg/s]
     */
    int angle_y = 0;
    /*!
     * \brief angle_z
     *
     * suma kolejnych odczytów z żyroskopu dla osi z [deg/s]
     */
    int angle_z = 0;
    /*!
     * \brief orientation_x
     *
     * aktualna orientacja względem osi x
     */
    GLfloat orientation_x = 0;
    /*!
     * \brief orientation_y
     *
     * aktualna orientacja względem osi y
     */
    GLfloat orientation_y = 0;
    /*!
     * \brief orientation_z
     *
     * aktualna orientacja względem osi z
     */
    GLfloat orientation_z = 0;
    Ui::window_opengl *ui;
};

#endif // WINDOW_OPENGL_H
