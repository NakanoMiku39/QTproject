#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    ui->actions->setHidden(true);
    ui->hand->setHidden(true);

}



game::~game()
{
    delete ui;
}


void game::on_show_actions_clicked()
{
    if(ui->actions->isHidden() == true){
        ui->actions->show();
    }
    else if(ui->actions->isHidden() == false){
        ui->actions->hide();
    }
}


void game::on_show_hand_clicked()
{
    if(ui->hand->isHidden() == true){
        ui->hand->show();
    }
    else if(ui->hand->isHidden() == false){
        ui->hand->hide();
    }
}
