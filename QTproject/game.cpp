#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent) ://构造函数
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    ui->actions->setHidden(true);//隐藏行动
    ui->hand->setHidden(true);//隐藏手牌
    city* c1 = new city("atlanta", "red", 100, 100, 100, 100);



}


game::~game()//析构函数
{
    delete ui;
}


void game::on_show_actions_clicked()//展示或隐藏行动
{
    c1->show_city_status();
    if(ui->actions->isHidden() == true){

        ui->actions->show();
    }
    else if(ui->actions->isHidden() == false){
        ui->actions->hide();
    }
}


void game::on_show_hand_clicked()//展示或隐藏手牌
{
    if(ui->hand->isHidden() == true){
        ui->hand->show();
    }
    else if(ui->hand->isHidden() == false){
        ui->hand->hide();
    }
}

city::city(QString name, QString c, int x, int y, int w, int h) :
    city_name(name), color(c), btn_X(x), btn_Y(y), btn_W(w), btn_H(h)
{

}

void city::show_city_status()
{
    QWidget* q = new QWidget();
    q->show();
}
