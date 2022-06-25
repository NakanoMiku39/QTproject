#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent) ://构造函数
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    ui->actions->setHidden(true);//隐藏行动
    ui->hand->setHidden(true);//隐藏手牌
    ui->city_status->setHidden(true);//隐藏城市状态


    //label显示图片
    QLabel* q = new QLabel("testing123");
    ui->gridLayout->addWidget(q);
    q->setGeometry(100,100,100,100);



}


game::~game()//析构函数
{
    delete ui;
}


void game::on_show_actions_clicked()//展示或隐藏行动
{


    if(ui->actions->isHidden() == true){

        city c1("atlanta", "red", 250,250,200,50);

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

QString character::return_name()
{
    return character_name;
}

city::city(QString name, QString c, int x, int y ,int w, int h):
    city_name(name), color(c), existed_disease_cube(0), btn_X(x), btn_Y(y), btn_W(w), btn_H(h)
{

    QPushButton* p = new QPushButton(city_name, ui->gridLayoutWidget);
    p->setGeometry(btn_X, btn_Y, btn_H, btn_W);
    p->setMinimumWidth(btn_W);
    p->setMinimumHeight(btn_H);

    QMessageBox m (QMessageBox::Question,"Title","text",QMessageBox::Yes|QMessageBox::No);
    m.exec();

}//构造函数




