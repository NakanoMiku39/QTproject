#ifndef GAME_H
#define GAME_H

#include <QWidget>

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

private:
    Ui::game *ui;
};

#endif // GAME_H
