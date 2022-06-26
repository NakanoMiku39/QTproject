#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QString>
#include <QPixmap>
#include <QLabel>
#include <QIcon>
#include <QMessageBox>
#include <QPushButton>

namespace Ui {
class game;

}

class city
{
private:
    QString city_name, color;
    int btn_X, btn_Y, btn_W, btn_H;
public:
    city(QString name, QString c, int x, int y, int w, int h);
    void show_city_status();
};


class game : public QWidget
{
    Q_OBJECT

public:
    city* c1 = new city("atlanta", "red", 100, 100, 100, 100);

    explicit game(QWidget *parent = 0);
    ~game();

private slots:

    void on_show_actions_clicked();

    void on_show_hand_clicked();

public:
    Ui::game *ui;
};



#endif // GAME_H
