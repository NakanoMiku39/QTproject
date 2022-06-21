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
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QLineEdit *movment_actions;
    QPushButton *show_hand;
    QListWidget *hand;
    QLabel *outbreaks;
    QLabel *infection_rate;
    QLineEdit *atlanta;
    QLabel *label;

    void setupUi(QWidget *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QStringLiteral("game"));
        game->resize(1200, 849);
        QFont font;
        font.setPointSize(30);
        game->setFont(font);
        game->setStyleSheet(QStringLiteral(""));
        map = new QLabel(game);
        map->setObjectName(QStringLiteral("map"));
        map->setGeometry(QRect(0, 0, 1200, 849));
        map->setStyleSheet(QStringLiteral("image: url(:/img/img/map.png);"));
        exit_game = new QPushButton(game);
        exit_game->setObjectName(QStringLiteral("exit_game"));
        exit_game->setGeometry(QRect(1000, 790, 191, 51));
        QFont font1;
        font1.setFamily(QStringLiteral("Bauhaus 93"));
        font1.setPointSize(20);
        exit_game->setFont(font1);
        show_actions = new QPushButton(game);
        show_actions->setObjectName(QStringLiteral("show_actions"));
        show_actions->setGeometry(QRect(160, 0, 200, 50));
        show_actions->setMinimumSize(QSize(200, 50));
        show_actions->setMaximumSize(QSize(200, 50));
        QFont font2;
        font2.setFamily(QStringLiteral("Bauhaus 93"));
        font2.setPointSize(15);
        show_actions->setFont(font2);
        characters = new QListWidget(game);
        new QListWidgetItem(characters);
        new QListWidgetItem(characters);
        new QListWidgetItem(characters);
        new QListWidgetItem(characters);
        characters->setObjectName(QStringLiteral("characters"));
        characters->setGeometry(QRect(0, 0, 161, 171));
        actions = new QWidget(game);
        actions->setObjectName(QStringLiteral("actions"));
        actions->setGeometry(QRect(160, 50, 411, 281));
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
        QFont font3;
        font3.setFamily(QStringLiteral("Bauhaus 93"));
        font3.setPointSize(10);
        other_actions->setFont(font3);
        other_actions->setAlignment(Qt::AlignCenter);
        other_actions->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::FieldRole, other_actions);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(200, 50));
        pushButton->setMaximumSize(QSize(200, 100));
        pushButton->setFont(font2);

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(200, 50));
        pushButton_2->setMaximumSize(QSize(100, 25));
        QFont font4;
        font4.setFamily(QStringLiteral("Bauhaus 93"));
        font4.setPointSize(8);
        pushButton_2->setFont(font4);

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_2);

        pushButton_3 = new QPushButton(formLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(200, 50));
        pushButton_3->setMaximumSize(QSize(100, 25));
        pushButton_3->setFont(font2);

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_3);

        pushButton_4 = new QPushButton(formLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(200, 50));
        pushButton_4->setMaximumSize(QSize(100, 25));
        pushButton_4->setFont(font2);

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_4);

        pushButton_5 = new QPushButton(formLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(200, 50));
        pushButton_5->setMaximumSize(QSize(100, 25));
        pushButton_5->setFont(font2);

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton_5);

        pushButton_6 = new QPushButton(formLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(200, 50));
        pushButton_6->setMaximumSize(QSize(100, 25));
        QFont font5;
        font5.setFamily(QStringLiteral("Bauhaus 93"));
        font5.setPointSize(12);
        pushButton_6->setFont(font5);

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_6);

        pushButton_7 = new QPushButton(formLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(200, 50));
        pushButton_7->setMaximumSize(QSize(100, 25));
        pushButton_7->setFont(font2);

        formLayout->setWidget(5, QFormLayout::LabelRole, pushButton_7);

        pushButton_8 = new QPushButton(formLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(200, 50));
        pushButton_8->setMaximumSize(QSize(100, 25));
        pushButton_8->setFont(font5);

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton_8);

        movment_actions = new QLineEdit(formLayoutWidget);
        movment_actions->setObjectName(QStringLiteral("movment_actions"));
        movment_actions->setEnabled(true);
        movment_actions->setMinimumSize(QSize(200, 50));
        movment_actions->setMaximumSize(QSize(200, 50));
        movment_actions->setFont(font3);
        movment_actions->setEchoMode(QLineEdit::Normal);
        movment_actions->setAlignment(Qt::AlignCenter);
        movment_actions->setReadOnly(true);

        formLayout->setWidget(0, QFormLayout::LabelRole, movment_actions);

        show_hand = new QPushButton(game);
        show_hand->setObjectName(QStringLiteral("show_hand"));
        show_hand->setGeometry(QRect(10, 790, 200, 50));
        show_hand->setFont(font2);
        hand = new QListWidget(game);
        hand->setObjectName(QStringLiteral("hand"));
        hand->setGeometry(QRect(210, 650, 181, 192));
        outbreaks = new QLabel(game);
        outbreaks->setObjectName(QStringLiteral("outbreaks"));
        outbreaks->setGeometry(QRect(70, 450, 51, 51));
        outbreaks->setStyleSheet(QStringLiteral("image: url(:/img/img/outbreak_marker.jpg);"));
        infection_rate = new QLabel(game);
        infection_rate->setObjectName(QStringLiteral("infection_rate"));
        infection_rate->setGeometry(QRect(740, 170, 61, 41));
        infection_rate->setStyleSheet(QStringLiteral("image: url(:/img/img/infection_rate_marker.jpg);"));
        atlanta = new QLineEdit(game);
        atlanta->setObjectName(QStringLiteral("atlanta"));
        atlanta->setGeometry(QRect(110, 400, 141, 71));
        atlanta->setReadOnly(true);
        label = new QLabel(game);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(286, 410, 61, 51));
        map->raise();
        exit_game->raise();
        show_actions->raise();
        characters->raise();
        show_hand->raise();
        hand->raise();
        outbreaks->raise();
        infection_rate->raise();
        atlanta->raise();
        actions->raise();
        label->raise();

        retranslateUi(game);
        QObject::connect(exit_game, SIGNAL(clicked()), game, SLOT(close()));
        QObject::connect(atlanta, SIGNAL(cursorPositionChanged(int,int)), game, SLOT(close()));
        QObject::connect(label, SIGNAL(linkHovered(QString)), game, SLOT(close()));

        characters->setCurrentRow(1);


        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QWidget *game)
    {
        game->setWindowTitle(QApplication::translate("game", "Pandemic the Game", 0));
        map->setText(QString());
        exit_game->setText(QApplication::translate("game", "EXIT GAME", 0));
        show_actions->setText(QApplication::translate("game", "ACTIONS", 0));

        const bool __sortingEnabled = characters->isSortingEnabled();
        characters->setSortingEnabled(false);
        QListWidgetItem *___qlistwidgetitem = characters->item(0);
        ___qlistwidgetitem->setText(QApplication::translate("game", "Character 1", 0));
        QListWidgetItem *___qlistwidgetitem1 = characters->item(1);
        ___qlistwidgetitem1->setText(QApplication::translate("game", "Character 2", 0));
        QListWidgetItem *___qlistwidgetitem2 = characters->item(2);
        ___qlistwidgetitem2->setText(QApplication::translate("game", "Character 3", 0));
        QListWidgetItem *___qlistwidgetitem3 = characters->item(3);
        ___qlistwidgetitem3->setText(QApplication::translate("game", "Character 4", 0));
        characters->setSortingEnabled(__sortingEnabled);

        other_actions->setText(QApplication::translate("game", "OTHER ACTIONS", 0));
        pushButton->setText(QApplication::translate("game", "Drive / Ferry", 0));
        pushButton_2->setText(QApplication::translate("game", "Build a Research Station", 0));
        pushButton_3->setText(QApplication::translate("game", "Direct Flight", 0));
        pushButton_4->setText(QApplication::translate("game", "Treat Disease", 0));
        pushButton_5->setText(QApplication::translate("game", "Charter Flight", 0));
        pushButton_6->setText(QApplication::translate("game", "Share Knowledge", 0));
        pushButton_7->setText(QApplication::translate("game", "Shuttle Flight", 0));
        pushButton_8->setText(QApplication::translate("game", "Discover a Cure", 0));
        movment_actions->setText(QApplication::translate("game", "MOVEMENT ACTIONS", 0));
        show_hand->setText(QApplication::translate("game", "HAND", 0));
        outbreaks->setText(QString());
        infection_rate->setText(QString());
        atlanta->setText(QApplication::translate("game", "ATLANTA", 0));
        label->setText(QApplication::translate("game", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
