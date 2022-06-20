#include "game.h"
#include "ui_game.h"

game::game(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::game)
{
    ui->setupUi(this);
    ui->actions->setHidden(true);
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
