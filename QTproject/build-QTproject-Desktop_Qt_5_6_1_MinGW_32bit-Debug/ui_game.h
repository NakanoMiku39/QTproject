/********************************************************************************
** Form generated from reading UI file 'game.ui'
**
** Created by: Qt User Interface Compiler version 5.6.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_H
#define UI_GAME_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game
{
public:
    QLabel *map;
    QPushButton *exit_game;
    QPushButton *show_actions;
    QListWidget *characters;
    QWidget *actions;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *other_actions;
    QPushButton *drive_ferry;
    QPushButton *build_station;
    QPushButton *direct_flight;
    QPushButton *treat_disease;
    QPushButton *charter_flight;
    QPushButton *share_knowledge;
    QPushButton *shuttle_flight;
    QPushButton *discover_cure;
    QLineEdit *movment_actions;
    QPushButton *show_hand;
    QListWidget *hand;
    QLabel *outbreaks;
    QLabel *infection_rate;
    QLineEdit *lineEdit;

    void setupUi(QWidget *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QStringLiteral("game"));
        game->resize(1570, 965);
        QFont font;
        font.setPointSize(30);
        game->setFont(font);
        game->setStyleSheet(QStringLiteral(""));
        map = new QLabel(game);
        map->setObjectName(QStringLiteral("map"));
        map->setGeometry(QRect(40, -10, 1692, 965));
        map->setStyleSheet(QStringLiteral("image: url(:/img/img/map.jpg);"));
        exit_game = new QPushButton(game);
        exit_game->setObjectName(QStringLiteral("exit_game"));
        exit_game->setGeometry(QRect(0, 910, 200, 50));
        QFont font1;
        font1.setFamily(QStringLiteral("Bauhaus 93"));
        font1.setPointSize(15);
        exit_game->setFont(font1);
        show_actions = new QPushButton(game);
        show_actions->setObjectName(QStringLiteral("show_actions"));
        show_actions->setGeometry(QRect(0, 0, 200, 50));
        show_actions->setMinimumSize(QSize(200, 50));
        show_actions->setMaximumSize(QSize(200, 50));
        show_actions->setFont(font1);
        characters = new QListWidget(game);
        characters->setObjectName(QStringLiteral("characters"));
        characters->setGeometry(QRect(0, 70, 201, 171));
        actions = new QWidget(game);
        actions->setObjectName(QStringLiteral("actions"));
        actions->setGeometry(QRect(200, 0, 411, 281));
        actions->setMaximumSize(QSize(600, 600));
        formLayoutWidget = new QWidget(actions);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 406, 306));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        other_actions = new QLineEdit(formLayoutWidget);
        other_actions->setObjectName(QStringLiteral("other_actions"));
        other_actions->setMaximumSize(QSize(200, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Bauhaus 93"));
        font2.setPointSize(10);
        other_actions->setFont(font2);
        other_actions->setAlignment(Qt::AlignCenter);
        other_actions->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, other_actions);

        drive_ferry = new QPushButton(formLayoutWidget);
        drive_ferry->setObjectName(QStringLiteral("drive_ferry"));
        drive_ferry->setMinimumSize(QSize(200, 50));
        drive_ferry->setMaximumSize(QSize(200, 100));
        drive_ferry->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, drive_ferry);

        build_station = new QPushButton(formLayoutWidget);
        build_station->setObjectName(QStringLiteral("build_station"));
        build_station->setMinimumSize(QSize(200, 50));
        build_station->setMaximumSize(QSize(100, 25));
        QFont font3;
        font3.setFamily(QStringLiteral("Bauhaus 93"));
        font3.setPointSize(8);
        build_station->setFont(font3);

        formLayout->setWidget(2, QFormLayout::FieldRole, build_station);

        direct_flight = new QPushButton(formLayoutWidget);
        direct_flight->setObjectName(QStringLiteral("direct_flight"));
        direct_flight->setMinimumSize(QSize(200, 50));
        direct_flight->setMaximumSize(QSize(100, 25));
        direct_flight->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, direct_flight);

        treat_disease = new QPushButton(formLayoutWidget);
        treat_disease->setObjectName(QStringLiteral("treat_disease"));
        treat_disease->setMinimumSize(QSize(200, 50));
        treat_disease->setMaximumSize(QSize(100, 25));
        treat_disease->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, treat_disease);

        charter_flight = new QPushButton(formLayoutWidget);
        charter_flight->setObjectName(QStringLiteral("charter_flight"));
        charter_flight->setMinimumSize(QSize(200, 50));
        charter_flight->setMaximumSize(QSize(100, 25));
        charter_flight->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, charter_flight);

        share_knowledge = new QPushButton(formLayoutWidget);
        share_knowledge->setObjectName(QStringLiteral("share_knowledge"));
        share_knowledge->setMinimumSize(QSize(200, 50));
        share_knowledge->setMaximumSize(QSize(100, 25));
        QFont font4;
        font4.setFamily(QStringLiteral("Bauhaus 93"));
        font4.setPointSize(12);
        share_knowledge->setFont(font4);

        formLayout->setWidget(4, QFormLayout::FieldRole, share_knowledge);

        shuttle_flight = new QPushButton(formLayoutWidget);
        shuttle_flight->setObjectName(QStringLiteral("shuttle_flight"));
        shuttle_flight->setMinimumSize(QSize(200, 50));
        shuttle_flight->setMaximumSize(QSize(100, 25));
        shuttle_flight->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, shuttle_flight);

        discover_cure = new QPushButton(formLayoutWidget);
        discover_cure->setObjectName(QStringLiteral("discover_cure"));
        discover_cure->setMinimumSize(QSize(200, 50));
        discover_cure->setMaximumSize(QSize(100, 25));
        discover_cure->setFont(font4);

        formLayout->setWidget(5, QFormLayout::FieldRole, discover_cure);

        movment_actions = new QLineEdit(formLayoutWidget);
        movment_actions->setObjectName(QStringLiteral("movment_actions"));
        movment_actions->setEnabled(true);
        movment_actions->setMinimumSize(QSize(200, 50));
        movment_actions->setMaximumSize(QSize(200, 50));
        movment_actions->setFont(font2);
        movment_actions->setEchoMode(QLineEdit::Normal);
        movment_actions->setAlignment(Qt::AlignCenter);
        movment_actions->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, movment_actions);

        show_hand = new QPushButton(game);
        show_hand->setObjectName(QStringLiteral("show_hand"));
        show_hand->setGeometry(QRect(0, 850, 200, 50));
        show_hand->setFont(font1);
        hand = new QListWidget(game);
        hand->setObjectName(QStringLiteral("hand"));
        hand->setGeometry(QRect(200, 770, 181, 192));
        outbreaks = new QLabel(game);
        outbreaks->setObjectName(QStringLiteral("outbreaks"));
        outbreaks->setGeometry(QRect(230, 510, 51, 61));
        outbreaks->setStyleSheet(QStringLiteral("image: url(:/img/img/outbreak_marker.jpg);"));
        infection_rate = new QLabel(game);
        infection_rate->setObjectName(QStringLiteral("infection_rate"));
        infection_rate->setGeometry(QRect(1070, 160, 71, 51));
        infection_rate->setStyleSheet(QStringLiteral("image: url(:/img/img/infection_rate_marker.jpg);"));
        lineEdit = new QLineEdit(game);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(1000, 220, 131, 41));
        lineEdit->setFont(font2);
        lineEdit->setAlignment(Qt::AlignCenter);
        lineEdit->setReadOnly(true);
        map->raise();
        exit_game->raise();
        show_actions->raise();
        characters->raise();
        show_hand->raise();
        hand->raise();
        outbreaks->raise();
        infection_rate->raise();
        actions->raise();
        lineEdit->raise();

        retranslateUi(game);
        QObject::connect(exit_game, SIGNAL(clicked()), game, SLOT(close()));
        QObject::connect(lineEdit, SIGNAL(returnPressed()), actions, SLOT(show()));

        characters->setCurrentRow(-1);


        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QWidget *game)
    {
        game->setWindowTitle(QApplication::translate("game", "Pandemic the Game", 0));
        map->setText(QString());
        exit_game->setText(QApplication::translate("game", "EXIT GAME", 0));
        show_actions->setText(QApplication::translate("game", "ACTIONS", 0));
        other_actions->setText(QApplication::translate("game", "OTHER ACTIONS", 0));
        drive_ferry->setText(QApplication::translate("game", "Drive / Ferry", 0));
        build_station->setText(QApplication::translate("game", "Build a Research Station", 0));
        direct_flight->setText(QApplication::translate("game", "Direct Flight", 0));
        treat_disease->setText(QApplication::translate("game", "Treat Disease", 0));
        charter_flight->setText(QApplication::translate("game", "Charter Flight", 0));
        share_knowledge->setText(QApplication::translate("game", "Share Knowledge", 0));
        shuttle_flight->setText(QApplication::translate("game", "Shuttle Flight", 0));
        discover_cure->setText(QApplication::translate("game", "Discover a Cure", 0));
        movment_actions->setText(QApplication::translate("game", "MOVEMENT ACTIONS", 0));
        show_hand->setText(QApplication::translate("game", "HAND", 0));
        outbreaks->setText(QString());
        infection_rate->setText(QString());
        lineEdit->setText(QApplication::translate("game", "MASCOW", 0));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
