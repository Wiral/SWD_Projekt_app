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
     * Przygotowuje zmiennie \link window_opengl::rotate_x\endlink oraz \link window_opengl::rotate_y\endlink
     * Obliczane na podstawie aktualnych danych pobranych z urządzenia
     * \param data_in - ramka danych zawierająca
     * dane z akcelerometru i żyroskopu
     */
    void prepare_data(QStringList data_in);
private:
    /*!
     * \brief rotate_x
     *
     * aktualny kąt o który obróciła się płytka od czasu ostatniego pomiaru względem osi x
     */
    GLfloat rotate_x = 0;

    /*!
     * \brief rotate_y
     *
     * aktualny kąt o który obróciła się płytka od czasu ostatniego pomiaru względem osi y
     */
    GLfloat rotate_y = 0;
    Ui::window_opengl *ui;
};

#endif // WINDOW_OPENGL_H
