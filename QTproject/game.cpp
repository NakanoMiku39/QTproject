#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent) ://构造函数
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    ui->actions->setHidden(true);//隐藏行动
    ui->hand->setHidden(true);//隐藏手牌
}


game::~game()//析构函数
{
    delete ui;
}


void game::on_show_actions_clicked()//展示或隐藏行动
{
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




city::city(QString name, QString c) :
    city_name(name), color(c)
{

}

void game::show_city_status(city* c)
{
    e->setText(c->city_name + "\ncolor: " + c->color + "\n disease cubes: " + c->disease_block);
    e->setGeometry(10, 0, 300, 400);
    q1->setFont(QFont("Bauhaus 93", 10));
    q1->setGeometry(1590, 50, 300, 400);
    q1->show();
}


void game::on_atlanta_clicked()
{
    show_city_status(atlanta);
}


void game::on_chicago_clicked()
{
    show_city_status(chicago);
}

void game::on_montreal_clicked()
{
    show_city_status(montreal);
}

void game::on_san_francisco_clicked()
{
    show_city_status(san_francisco);
}

void game::on_algiers_clicked()
{
    show_city_status(algiers);
}
