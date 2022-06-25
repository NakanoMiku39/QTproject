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


    //label显示图片.
    QLabel* q = new QLabel();
    q->setGeometry(100,100,100,100);
    QImage *img=new QImage;                                   //新建image对象.
    img->load("./img/infection_rate_marker.jpg");                           //复制资源文件里的图片路径.
    q->setPixmap(QPixmap::fromImage(*img)); //将图片载入label，使用setPixmap,注意指针*img.

    QPushButton* b = new QPushButton("test");
    b->setGeometry(500,500,500,500);
    //ui->setupUi(b);
    //connect(b, b->clicked(), ui->city_status, hide);

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

QString character::return_name()
{
    return character_name;
}

city::city(QString name, QString c):city_name(name), color(c), existed_disease_cube(0){}//构造函数

