#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent) ://构造函数
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    ui->actions->setHidden(true);//隐藏行动
    ui->hand->setHidden(true);//隐藏手牌
    ui->characters->addItem("test1");

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

cards::cards(QString name):card_name(name){}//构造函数

character::character(QString name):character_name(name){}//构造函数

city::city(QString name, QString c):city_name(name), color(c), existed_disease_cube(0){}//构造函数
