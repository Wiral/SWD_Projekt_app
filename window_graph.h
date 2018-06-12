#ifndef WINDOW_GRAPH_H
#define WINDOW_GRAPH_H
/*!
* \file
* \brief Definicja klasy window_graph
*
*
* Plik zawiera definicję klasy window_graph,
* która zajmuje się rysowaniem wykresów z danych
* pobranych z akcelerometru i żyroskopu
*
*/
#include <QWidget>
#include <QTime>

namespace Ui {
class window_graph;
}
/*!
 * \brief definiuje pojęcie klasy window_graph
 */
class window_graph : public QWidget
{
    Q_OBJECT

public:
    /*!
     * \brief Konstruuje obiekt window_graph
     * \param parent - wskaźnik na "ojca"
     */
    explicit window_graph(QWidget *parent = 0);
    ~window_graph();
public slots:
    /*!
      * \brief graphs_update
      *
      * Aktualizuje wszystkie wykresy aktualnymi danymi odczytanymi z akcelerometru i żyroskopu
     * \param data_in - ramka danych zawierająca
     * dane z akcelerometru i żyroskopu
      */
     void graphs_update(QStringList data_in);
     /*!
      * \brief reset_graphs
      *
      * Niszczy stworzone wykresy i ponownie je inicjuje
      */
     void reset_graphs();
     /*!
      * \brief load_graphs_settings
      *
      * Wczytuje ustawienia grafów zapisane w oknie ustawień
      */
     void load_graphs_settings();
private:
    Ui::window_graph *ui;
    /*!
     * \brief graphs_init
     *
     * Tworzy wykresy prezentujące odzczyty z akcelerometru i żyroskopu, odpowienich nazwach i wyglądzie
     */
    void graphs_init();
    /*!
     * \brief time
     *
     * Czas liczony od momentu utworzenia obiektu tej klasy
     */
    QTime* time;
    /*!
     * \brief time_stamp
     *
     * Czas w którym dokonano ostatniej aktualizacji wykresów
     */
    int time_stamp = 0;
    /*!
     * \brief refresh_rate
     *
     * Częstość odświerzania wykresów podana w sekundach
     */
    double refresh_rate = 0.1;

};

#endif // WINDOW_GRAPH_H
