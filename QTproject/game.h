#ifndef GAME_H
#define GAME_H

#include <QWidget>
#include <QString>

namespace Ui {
class game;
}

class game : public QWidget
{
    Q_OBJECT

public:
    explicit game(QWidget *parent = 0);
    ~game();

private slots:

    void on_show_actions_clicked();

    void on_show_hand_clicked();



private:
    Ui::game *ui;
};


class cards//卡牌类
{
private:
   QString card_name;//牌名
public:
    cards(QString name);//构造函数

};

class character//角色类
{
private:
    QString character_name;//角色名
    int hand = 4;//手牌数
public:
    character(QString name);//构造函数

};

class city//城市类
{
private:
    QString city_name, color;//城市名,颜色
    int existed_disease_cube;//存在疾病块数

public:
    city(QString name, QString c);//构造函数

};
#endif // GAME_H
