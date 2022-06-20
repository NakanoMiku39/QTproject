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
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game
{
public:
    QWidget *map;
    QListWidget *characters;
    QPushButton *show_actions;
    QWidget *actions;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *exit_game;

    void setupUi(QWidget *game)
    {
        if (game->objectName().isEmpty())
            game->setObjectName(QStringLiteral("game"));
        game->resize(1200, 849);
        QFont font;
        font.setPointSize(30);
        game->setFont(font);
        game->setStyleSheet(QStringLiteral(""));
        map = new QWidget(game);
        map->setObjectName(QStringLiteral("map"));
        map->setGeometry(QRect(0, 0, 1200, 849));
        map->setStyleSheet(QStringLiteral("image: url(:/img/img/map.png);"));
        characters = new QListWidget(map);
        new QListWidgetItem(characters);
        new QListWidgetItem(characters);
        new QListWidgetItem(characters);
        new QListWidgetItem(characters);
        characters->setObjectName(QStringLiteral("characters"));
        characters->setGeometry(QRect(0, 0, 161, 171));
        show_actions = new QPushButton(map);
        show_actions->setObjectName(QStringLiteral("show_actions"));
        show_actions->setGeometry(QRect(160, 0, 200, 100));
        show_actions->setMinimumSize(QSize(200, 100));
        show_actions->setMaximumSize(QSize(200, 100));
        QFont font1;
        font1.setFamily(QStringLiteral("Bauhaus 93"));
        font1.setPointSize(15);
        show_actions->setFont(font1);
        actions = new QWidget(map);
        actions->setObjectName(QStringLiteral("actions"));
        actions->setGeometry(QRect(160, 100, 511, 291));
        formLayoutWidget = new QWidget(actions);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(5, 5, 406, 291));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        textEdit = new QTextEdit(formLayoutWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setMinimumSize(QSize(200, 50));
        textEdit->setMaximumSize(QSize(100, 25));
        textEdit->setFont(font1);

        formLayout->setWidget(0, QFormLayout::FieldRole, textEdit);

        pushButton = new QPushButton(formLayoutWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(200, 50));
        pushButton->setMaximumSize(QSize(200, 100));
        pushButton->setFont(font1);

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton);

        pushButton_2 = new QPushButton(formLayoutWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(200, 50));
        pushButton_2->setMaximumSize(QSize(100, 25));
        QFont font2;
        font2.setFamily(QStringLiteral("Bauhaus 93"));
        font2.setPointSize(8);
        pushButton_2->setFont(font2);

        formLayout->setWidget(2, QFormLayout::FieldRole, pushButton_2);

        pushButton_3 = new QPushButton(formLayoutWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMinimumSize(QSize(200, 50));
        pushButton_3->setMaximumSize(QSize(100, 25));
        pushButton_3->setFont(font1);

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_3);

        pushButton_4 = new QPushButton(formLayoutWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMinimumSize(QSize(200, 50));
        pushButton_4->setMaximumSize(QSize(100, 25));
        pushButton_4->setFont(font1);

        formLayout->setWidget(3, QFormLayout::FieldRole, pushButton_4);

        pushButton_5 = new QPushButton(formLayoutWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMinimumSize(QSize(200, 50));
        pushButton_5->setMaximumSize(QSize(100, 25));
        pushButton_5->setFont(font1);

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton_5);

        pushButton_7 = new QPushButton(formLayoutWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setMinimumSize(QSize(200, 50));
        pushButton_7->setMaximumSize(QSize(100, 25));
        pushButton_7->setFont(font1);

        formLayout->setWidget(5, QFormLayout::LabelRole, pushButton_7);

        pushButton_8 = new QPushButton(formLayoutWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setMinimumSize(QSize(200, 50));
        pushButton_8->setMaximumSize(QSize(100, 25));
        QFont font3;
        font3.setFamily(QStringLiteral("Bauhaus 93"));
        font3.setPointSize(12);
        pushButton_8->setFont(font3);

        formLayout->setWidget(5, QFormLayout::FieldRole, pushButton_8);

        pushButton_6 = new QPushButton(formLayoutWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setMinimumSize(QSize(200, 50));
        pushButton_6->setMaximumSize(QSize(100, 25));
        pushButton_6->setFont(font3);

        formLayout->setWidget(4, QFormLayout::FieldRole, pushButton_6);

        exit_game = new QPushButton(map);
        exit_game->setObjectName(QStringLiteral("exit_game"));
        exit_game->setGeometry(QRect(1000, 790, 191, 51));
        QFont font4;
        font4.setFamily(QStringLiteral("Bauhaus 93"));
        font4.setPointSize(20);
        exit_game->setFont(font4);

        retranslateUi(game);
        QObject::connect(exit_game, SIGNAL(clicked()), game, SLOT(close()));

        characters->setCurrentRow(1);


        QMetaObject::connectSlotsByName(game);
    } // setupUi

    void retranslateUi(QWidget *game)
    {
        game->setWindowTitle(QApplication::translate("game", "Pandemic the Game", 0));

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

        show_actions->setText(QApplication::translate("game", "ACTIONS", 0));
        textEdit->setHtml(QApplication::translate("game", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Bauhaus 93'; font-size:15pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun'; font-size:14pt; font-weight:600;\">OTHER ACTIONS</span></p></body></html>", 0));
        pushButton->setText(QApplication::translate("game", "Drive / Ferry", 0));
        pushButton_2->setText(QApplication::translate("game", "Build a Research Station", 0));
        pushButton_3->setText(QApplication::translate("game", "Direct Flight", 0));
        pushButton_4->setText(QApplication::translate("game", "Treat Disease", 0));
        pushButton_5->setText(QApplication::translate("game", "Charter Flight", 0));
        pushButton_7->setText(QApplication::translate("game", "Shuttle Flight", 0));
        pushButton_8->setText(QApplication::translate("game", "Discover a Cure", 0));
        pushButton_6->setText(QApplication::translate("game", "Share Knowledge", 0));
        exit_game->setText(QApplication::translate("game", "EXIT GAME", 0));
    } // retranslateUi

};

namespace Ui {
    class game: public Ui_game {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_H
