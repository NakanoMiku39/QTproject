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
private:

    int X, Y, W, H, disease_block = 2;
public:
    QString city_name, color;
    city(QString name, QString c, int x, int y, int w, int h);
    void show_city_status();
};


class game : public QWidget
{
    Q_OBJECT

public:
    city* atlanta = new city("atlanta", "red", 1577, 40, 300, 400);

    explicit game(QWidget *parent = 0);
    ~game();

private slots:

    void on_show_actions_clicked();

    void on_show_hand_clicked();

    void show_city_status(city* c);

    void on_atlanta_clicked();

public:
    Ui::game *ui;
    QWidget* q1 = new QWidget();
};



#endif // GAME_H
