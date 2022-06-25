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
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game
{
public:
    QLabel *map;
    QPushButton *exit_game;
    QPushButton *show_actions;
    QWidget *actions;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLineEdit *movment_actions;
    QPushButton *drive_ferry;
    QPushButton *direct_flight;
    QPushButton *charter_flight;
    QPushButton *shuttle_flight;
    QLineEdit *other_actions;
    QPushButton *build_station;
    QPushButton *treat_disease;
    QPushButton *share_knowledge;
    QPushButton *discover_cure;
    QPushButton *show_hand;
    QListWidget *hand;
    QLabel *outbreaks;
    QLabel *infection_rate;
    QWidget *widget;
    QTextEdit *city_status;
    QWidget *city;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;

    void setupUi(QWidget *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QStringLiteral("game"));
        game->resize(1770, 965);
        QFont font;
        font.setPointSize(30);
        game->setFont(font);
        game->setStyleSheet(QStringLiteral(""));
        map = new QLabel(game);
        map->setObjectName(QStringLiteral("map"));
        map->setGeometry(QRect(40, 0, 1692, 965));
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
        actions = new QWidget(game);
        actions->setObjectName(QStringLiteral("actions"));
        actions->setGeometry(QRect(0, 50, 211, 600));
        actions->setMaximumSize(QSize(600, 600));
        actions->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        formLayoutWidget = new QWidget(actions);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 0, 206, 591));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        movment_actions = new QLineEdit(formLayoutWidget);
        movment_actions->setObjectName(QStringLiteral("movment_actions"));
        movment_actions->setEnabled(true);
        movment_actions->setMinimumSize(QSize(200, 50));
        movment_actions->setMaximumSize(QSize(200, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Bauhaus 93"));
        font2.setPointSize(10);
        movment_actions->setFont(font2);
        movment_actions->setEchoMode(QLineEdit::Normal);
        movment_actions->setAlignment(Qt::AlignCenter);
        movment_actions->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, movment_actions);

        drive_ferry = new QPushButton(formLayoutWidget);
        drive_ferry->setObjectName(QStringLiteral("drive_ferry"));
        drive_ferry->setMinimumSize(QSize(200, 50));
        drive_ferry->setMaximumSize(QSize(200, 100));
        drive_ferry->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, drive_ferry);

        direct_flight = new QPushButton(formLayoutWidget);
        direct_flight->setObjectName(QStringLiteral("direct_flight"));
        direct_flight->setMinimumSize(QSize(200, 50));
        direct_flight->setMaximumSize(QSize(100, 25));
        direct_flight->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, direct_flight);

        charter_flight = new QPushButton(formLayoutWidget);
        charter_flight->setObjectName(QStringLiteral("charter_flight"));
        charter_flight->setMinimumSize(QSize(200, 50));
        charter_flight->setMaximumSize(QSize(100, 25));
        charter_flight->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, charter_flight);

        shuttle_flight = new QPushButton(formLayoutWidget);
        shuttle_flight->setObjectName(QStringLiteral("shuttle_flight"));
        shuttle_flight->setMinimumSize(QSize(200, 50));
        shuttle_flight->setMaximumSize(QSize(100, 25));
        shuttle_flight->setFont(font1);

        formLayout->setWidget(6, QFormLayout::LabelRole, shuttle_flight);

        other_actions = new QLineEdit(formLayoutWidget);
        other_actions->setObjectName(QStringLiteral("other_actions"));
        other_actions->setMinimumSize(QSize(200, 50));
        other_actions->setMaximumSize(QSize(200, 50));
        other_actions->setFont(font2);
        other_actions->setAlignment(Qt::AlignCenter);
        other_actions->setReadOnly(true);

        formLayout->setWidget(8, QFormLayout::LabelRole, other_actions);

        build_station = new QPushButton(formLayoutWidget);
        build_station->setObjectName(QStringLiteral("build_station"));
        build_station->setMinimumSize(QSize(200, 50));
        build_station->setMaximumSize(QSize(100, 25));
        QFont font3;
        font3.setFamily(QStringLiteral("Bauhaus 93"));
        font3.setPointSize(8);
        build_station->setFont(font3);

        formLayout->setWidget(10, QFormLayout::LabelRole, build_station);

        treat_disease = new QPushButton(formLayoutWidget);
        treat_disease->setObjectName(QStringLiteral("treat_disease"));
        treat_disease->setMinimumSize(QSize(200, 50));
        treat_disease->setMaximumSize(QSize(100, 25));
        treat_disease->setFont(font1);

        formLayout->setWidget(11, QFormLayout::LabelRole, treat_disease);

        share_knowledge = new QPushButton(formLayoutWidget);
        share_knowledge->setObjectName(QStringLiteral("share_knowledge"));
        share_knowledge->setMinimumSize(QSize(200, 50));
        share_knowledge->setMaximumSize(QSize(100, 25));
        QFont font4;
        font4.setFamily(QStringLiteral("Bauhaus 93"));
        font4.setPointSize(12);
        share_knowledge->setFont(font4);

        formLayout->setWidget(12, QFormLayout::LabelRole, share_knowledge);

        discover_cure = new QPushButton(formLayoutWidget);
        discover_cure->setObjectName(QStringLiteral("discover_cure"));
        discover_cure->setMinimumSize(QSize(200, 50));
        discover_cure->setMaximumSize(QSize(100, 25));
        discover_cure->setFont(font4);

        formLayout->setWidget(13, QFormLayout::LabelRole, discover_cure);

        show_hand = new QPushButton(game);
        show_hand->setObjectName(QStringLiteral("show_hand"));
        show_hand->setGeometry(QRect(0, 850, 200, 50));
        show_hand->setFont(font1);
        hand = new QListWidget(game);
        hand->setObjectName(QStringLiteral("hand"));
        hand->setGeometry(QRect(0, 650, 201, 192));
        outbreaks = new QLabel(game);
        outbreaks->setObjectName(QStringLiteral("outbreaks"));
        outbreaks->setGeometry(QRect(230, 500, 51, 61));
        outbreaks->setStyleSheet(QStringLiteral("image: url(:/img/img/outbreak_marker.jpg);"));
        infection_rate = new QLabel(game);
        infection_rate->setObjectName(QStringLiteral("infection_rate"));
        infection_rate->setGeometry(QRect(1070, 160, 71, 51));
        infection_rate->setStyleSheet(QStringLiteral("image: url(:/img/img/infection_rate_marker.jpg);"));
        widget = new QWidget(game);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(1569, -1, 201, 961));
        widget->setStyleSheet(QStringLiteral(""));
        city_status = new QTextEdit(widget);
        city_status->setObjectName(QStringLiteral("city_status"));
        city_status->setGeometry(QRect(3, 3, 201, 171));
        city = new QWidget(game);
        city->setObjectName(QStringLiteral("city"));
        city->setGeometry(QRect(200, 0, 1692, 965));
        gridLayoutWidget = new QWidget(city);
        gridLayoutWidget->setObjectName(QStringLiteral("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(-1, -1, 1181, 881));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        actions->raise();
        map->raise();
        exit_game->raise();
        show_actions->raise();
        show_hand->raise();
        hand->raise();
        outbreaks->raise();
        infection_rate->raise();
        widget->raise();
        city->raise();

        retranslateUi(game);
        QObject::connect(exit_game, SIGNAL(clicked()), game, SLOT(close()));

        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QWidget *game)
    {
        game->setWindowTitle(QApplication::translate("game", "Pandemic the Game", 0));
        map->setText(QString());
        exit_game->setText(QApplication::translate("game", "EXIT GAME", 0));
        show_actions->setText(QApplication::translate("game", "ACTIONS", 0));
        movment_actions->setText(QApplication::translate("game", "MOVEMENT ACTIONS", 0));
        drive_ferry->setText(QApplication::translate("game", "Drive / Ferry", 0));
        direct_flight->setText(QApplication::translate("game", "Direct Flight", 0));
        charter_flight->setText(QApplication::translate("game", "Charter Flight", 0));
        shuttle_flight->setText(QApplication::translate("game", "Shuttle Flight", 0));
        other_actions->setText(QApplication::translate("game", "OTHER ACTIONS", 0));
        build_station->setText(QApplication::translate("game", "Build a Research Station", 0));
        treat_disease->setText(QApplication::translate("game", "Treat Disease", 0));
        share_knowledge->setText(QApplication::translate("game", "Share Knowledge", 0));
        discover_cure->setText(QApplication::translate("game", "Discover a Cure", 0));
        show_hand->setText(QApplication::translate("game", "HAND", 0));
        outbreaks->setText(QString());
        infection_rate->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
