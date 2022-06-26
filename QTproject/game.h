#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QString>
#include <QPixmap>
#include <QLabel>
#include <QIcon>
#include <QMessageBox>
#include <QPushButton>
#include <QTextEdit>

namespace Ui {
class game;

}

class city
{
public:

    QString city_name, color, disease_block;
    city(QString name, QString c);
    void show_city_status();
};


class game : public QWidget
{
    Q_OBJECT

public:
    city* atlanta = new city("Atlanta", "blue");
    city* san_francisco = new city("San_Francisco", "blue");
    city* chicago = new city("Chicago", "blue");
    city* montreal = new city("Montreal", "blue");
    city* washington = new city("Washington", "blue");
    city* madrid = new city("Madrid", "blue");
    city* london = new city("London", "blue");
    city* new_york = new city("New York", "blue");
    city* essen = new city("Essen", "blue");
    city* milan = new city("Milan", "blue");
    city* paris = new city("paris", "blue");
    city* st_petersburg = new city("St Petersburg", "blue");

    city* miami = new city("Miami", "yellow");
    city* los_angeles = new city("Los Angeles", "yellow");
    city* mexico_city = new city("Mexico City", "yellow");
    city* bogota = new city("Bogota", "yellow");
    city* sao_paulo = new city("Sao Paulo", "yellow");
    city* lima = new city("Lima", "yellow");
    city* santiago = new city("Santiago", "yellow");
    city* buenos_aires = new city("Buenos Aires", "yellow");
    city* lagos = new city("Lagos", "yellow");
    city* khartoum = new city("Khartoum", "yellow");
    city* kinshasa = new city("Kinshasa", "yellow");
    city* johannesburg = new city("Johannesburg", "yellow");

    city* mascow = new city("Mascow", "black");
    city* tehran = new city("Tehran", "black");
    city* delhi = new city("Delhi", "black");
    city* algiers = new city("Algiers", "black");
    city* istanbul = new city("Istanbul", "black");
    city* cairo = new city("Cairo", "black");
    city* mumbai = new city("Mumbai", "black");
    city* kolkata = new city("Kolkata", "black");
    city* karachi = new city("Karachi", "black");
    city* riyadh = new city("Riyadh", "black");
    city* baghdad = new city("Baghdad", "black");
    city* chennai = new city("Chennai", "black");

    city* beijing = new city("Beijing", "red");
    city* shanghai = new city("Shanghai", "red");
    city* seoul = new city("Seoul", "red");
    city* tokyo = new city("Tokyo", "red");
    city* bangkok = new city("Bangkok", "red");
    city* osaka= new city("Osaka", "red");
    city* hongkong= new city("Hongkong", "red");
    city* taipei = new city("Taipei", "red");
    city* sydney = new city("Sydney", "red");
    city* manila = new city("Manila", "red");
    city* hochiminh_city= new city("Ho Chi Minh City", "red");
    city* jakarta = new city("Jakarta", "red");



    explicit game(QWidget *parent = 0);
    ~game();

private slots:

    void on_show_actions_clicked();

    void on_show_hand_clicked();

    void show_city_status(city* c);

    void on_atlanta_clicked();

    void on_san_francisco_clicked();

    void on_chicago_clicked();

    void on_montreal_clicked();


    void on_algiers_clicked();

public:
    Ui::game *ui;
    QWidget* q1 = new QWidget();
    QLabel* e = new QLabel(q1);
};



#endif // GAME_H
