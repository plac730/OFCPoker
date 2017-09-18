/********************************************************************************
** Form generated from reading UI file 'mainview.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINVIEW_H
#define UI_MAINVIEW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainView
{
public:
    QGraphicsView *graphicsView;
    QPushButton *newHandButton;
    QPushButton *setButton;
    QLabel *player1Label;
    QLabel *player2Label;
    QLabel *p1ScoreLabel;
    QLabel *p2ScoreLabel;
    QLabel *p1Score;
    QLabel *p2Score;
    QLabel *p1brLabel;
    QLabel *p1mrLabel;
    QLabel *p1trLabel;
    QLabel *p2brLabel;
    QLabel *p2mrLabel;
    QLabel *p2trLabel;
    QLabel *p1foulLabel;
    QLabel *p2FoulLabel;
    QLabel *p1RowScoreLabel;
    QLabel *p2RowScoreLabel;
    QPushButton *setButton2;
    QPushButton *resetButton1;
    QPushButton *resetButton2;
    QLabel *p1FLlabel;
    QLabel *p2FLlabel;
    QLabel *p1THScoreLabel;
    QLabel *p2THScoreLabel;
    QPushButton *soundButton;

    void setupUi(QWidget *MainView)
    {
        if (MainView->objectName().isEmpty())
            MainView->setObjectName(QStringLiteral("MainView"));
        MainView->resize(1276, 764);
        graphicsView = new QGraphicsView(MainView);
        graphicsView->setObjectName(QStringLiteral("graphicsView"));
        graphicsView->setGeometry(QRect(0, 0, 1276, 764));
        newHandButton = new QPushButton(MainView);
        newHandButton->setObjectName(QStringLiteral("newHandButton"));
        newHandButton->setGeometry(QRect(30, 710, 93, 28));
        setButton = new QPushButton(MainView);
        setButton->setObjectName(QStringLiteral("setButton"));
        setButton->setGeometry(QRect(130, 410, 93, 28));
        player1Label = new QLabel(MainView);
        player1Label->setObjectName(QStringLiteral("player1Label"));
        player1Label->setGeometry(QRect(30, 40, 71, 31));
        QFont font;
        font.setPointSize(10);
        player1Label->setFont(font);
        player2Label = new QLabel(MainView);
        player2Label->setObjectName(QStringLiteral("player2Label"));
        player2Label->setGeometry(QRect(1170, 40, 71, 31));
        player2Label->setFont(font);
        p1ScoreLabel = new QLabel(MainView);
        p1ScoreLabel->setObjectName(QStringLiteral("p1ScoreLabel"));
        p1ScoreLabel->setGeometry(QRect(30, 70, 41, 20));
        p1ScoreLabel->setFont(font);
        p1ScoreLabel->setStyleSheet(QStringLiteral("color: white"));
        p2ScoreLabel = new QLabel(MainView);
        p2ScoreLabel->setObjectName(QStringLiteral("p2ScoreLabel"));
        p2ScoreLabel->setGeometry(QRect(1170, 70, 41, 20));
        p2ScoreLabel->setFont(font);
        p2ScoreLabel->setStyleSheet(QStringLiteral("color: white"));
        p1Score = new QLabel(MainView);
        p1Score->setObjectName(QStringLiteral("p1Score"));
        p1Score->setGeometry(QRect(80, 70, 31, 20));
        p1Score->setFont(font);
        p1Score->setStyleSheet(QStringLiteral("color:white"));
        p2Score = new QLabel(MainView);
        p2Score->setObjectName(QStringLiteral("p2Score"));
        p2Score->setGeometry(QRect(1220, 70, 31, 20));
        p2Score->setFont(font);
        p2Score->setStyleSheet(QStringLiteral("color:white"));
        p1brLabel = new QLabel(MainView);
        p1brLabel->setObjectName(QStringLiteral("p1brLabel"));
        p1brLabel->setGeometry(QRect(198, 520, 55, 31));
        QFont font1;
        font1.setPointSize(12);
        p1brLabel->setFont(font1);
        p1brLabel->setStyleSheet(QStringLiteral("color:cyan"));
        p1mrLabel = new QLabel(MainView);
        p1mrLabel->setObjectName(QStringLiteral("p1mrLabel"));
        p1mrLabel->setGeometry(QRect(198, 410, 55, 31));
        p1mrLabel->setFont(font1);
        p1mrLabel->setStyleSheet(QStringLiteral("color:cyan"));
        p1trLabel = new QLabel(MainView);
        p1trLabel->setObjectName(QStringLiteral("p1trLabel"));
        p1trLabel->setGeometry(QRect(270, 310, 55, 31));
        p1trLabel->setFont(font1);
        p1trLabel->setStyleSheet(QStringLiteral("color:cyan"));
        p2brLabel = new QLabel(MainView);
        p2brLabel->setObjectName(QStringLiteral("p2brLabel"));
        p2brLabel->setGeometry(QRect(1050, 520, 55, 31));
        p2brLabel->setFont(font1);
        p2brLabel->setStyleSheet(QStringLiteral("color:cyan"));
        p2mrLabel = new QLabel(MainView);
        p2mrLabel->setObjectName(QStringLiteral("p2mrLabel"));
        p2mrLabel->setGeometry(QRect(1050, 410, 55, 31));
        p2mrLabel->setFont(font1);
        p2mrLabel->setStyleSheet(QStringLiteral("color:cyan"));
        p2trLabel = new QLabel(MainView);
        p2trLabel->setObjectName(QStringLiteral("p2trLabel"));
        p2trLabel->setGeometry(QRect(970, 310, 55, 31));
        p2trLabel->setFont(font1);
        p2trLabel->setStyleSheet(QStringLiteral("color:cyan"));
        p1foulLabel = new QLabel(MainView);
        p1foulLabel->setObjectName(QStringLiteral("p1foulLabel"));
        p1foulLabel->setGeometry(QRect(340, 210, 220, 61));
        QFont font2;
        font2.setBold(true);
        font2.setItalic(false);
        font2.setWeight(75);
        p1foulLabel->setFont(font2);
        p1foulLabel->setStyleSheet(QStringLiteral("color:red;font:bold 32px;"));
        p2FoulLabel = new QLabel(MainView);
        p2FoulLabel->setObjectName(QStringLiteral("p2FoulLabel"));
        p2FoulLabel->setGeometry(QRect(740, 210, 220, 61));
        p2FoulLabel->setFont(font2);
        p2FoulLabel->setStyleSheet(QStringLiteral("color:red;font:bold 32px"));
        p1RowScoreLabel = new QLabel(MainView);
        p1RowScoreLabel->setObjectName(QStringLiteral("p1RowScoreLabel"));
        p1RowScoreLabel->setGeometry(QRect(270, 220, 55, 41));
        p1RowScoreLabel->setFont(font1);
        p1RowScoreLabel->setStyleSheet(QStringLiteral("color:yellow"));
        p2RowScoreLabel = new QLabel(MainView);
        p2RowScoreLabel->setObjectName(QStringLiteral("p2RowScoreLabel"));
        p2RowScoreLabel->setGeometry(QRect(960, 220, 55, 41));
        p2RowScoreLabel->setFont(font1);
        p2RowScoreLabel->setStyleSheet(QStringLiteral("color:yellow"));
        setButton2 = new QPushButton(MainView);
        setButton2->setObjectName(QStringLiteral("setButton2"));
        setButton2->setGeometry(QRect(1050, 410, 93, 28));
        resetButton1 = new QPushButton(MainView);
        resetButton1->setObjectName(QStringLiteral("resetButton1"));
        resetButton1->setGeometry(QRect(130, 450, 93, 28));
        resetButton2 = new QPushButton(MainView);
        resetButton2->setObjectName(QStringLiteral("resetButton2"));
        resetButton2->setGeometry(QRect(1050, 450, 93, 28));
        p1FLlabel = new QLabel(MainView);
        p1FLlabel->setObjectName(QStringLiteral("p1FLlabel"));
        p1FLlabel->setGeometry(QRect(130, 40, 91, 31));
        QFont font3;
        font3.setPointSize(9);
        font3.setBold(false);
        font3.setWeight(50);
        p1FLlabel->setFont(font3);
        p1FLlabel->setStyleSheet(QLatin1String("color:rgb(200,85,235)\n"
""));
        p2FLlabel = new QLabel(MainView);
        p2FLlabel->setObjectName(QStringLiteral("p2FLlabel"));
        p2FLlabel->setGeometry(QRect(1040, 40, 91, 31));
        QFont font4;
        font4.setPointSize(9);
        p2FLlabel->setFont(font4);
        p2FLlabel->setStyleSheet(QStringLiteral("color:rgb(200,85,235)"));
        p1THScoreLabel = new QLabel(MainView);
        p1THScoreLabel->setObjectName(QStringLiteral("p1THScoreLabel"));
        p1THScoreLabel->setGeometry(QRect(415, 170, 61, 41));
        QFont font5;
        font5.setFamily(QStringLiteral("MS Shell Dlg 2"));
        font5.setPointSize(16);
        font5.setBold(false);
        font5.setItalic(false);
        font5.setWeight(9);
        p1THScoreLabel->setFont(font5);
        p1THScoreLabel->setStyleSheet(QLatin1String("color:orange;\n"
"font: 75 16pt \"MS Shell Dlg 2\";"));
        p2THScoreLabel = new QLabel(MainView);
        p2THScoreLabel->setObjectName(QStringLiteral("p2THScoreLabel"));
        p2THScoreLabel->setGeometry(QRect(810, 170, 61, 41));
        p2THScoreLabel->setFont(font5);
        p2THScoreLabel->setStyleSheet(QLatin1String("color:orange;\n"
"font: 75 16pt \"MS Shell Dlg 2\";"));
        soundButton = new QPushButton(MainView);
        soundButton->setObjectName(QStringLiteral("soundButton"));
        soundButton->setGeometry(QRect(140, 710, 93, 28));

        retranslateUi(MainView);

        QMetaObject::connectSlotsByName(MainView);
    } // setupUi

    void retranslateUi(QWidget *MainView)
    {
        MainView->setWindowTitle(QApplication::translate("MainView", "MainView", 0));
        newHandButton->setText(QApplication::translate("MainView", "New Hand", 0));
        setButton->setText(QApplication::translate("MainView", "Set", 0));
        player1Label->setText(QApplication::translate("MainView", "Player 1", 0));
        player2Label->setText(QApplication::translate("MainView", "Player 2", 0));
        p1ScoreLabel->setText(QApplication::translate("MainView", "Chips", 0));
        p2ScoreLabel->setText(QApplication::translate("MainView", "Chips:", 0));
        p1Score->setText(QString());
        p2Score->setText(QString());
        p1brLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        p1mrLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        p1trLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        p2brLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        p2mrLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        p2trLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        p1foulLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        p2FoulLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        p1RowScoreLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        p2RowScoreLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        setButton2->setText(QApplication::translate("MainView", "Set", 0));
        resetButton1->setText(QApplication::translate("MainView", "Reset Cards", 0));
        resetButton2->setText(QApplication::translate("MainView", "Reset Cards", 0));
        p1FLlabel->setText(QApplication::translate("MainView", "FantasyLand!", 0));
        p2FLlabel->setText(QApplication::translate("MainView", "FantasyLand!", 0));
        p1THScoreLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        p2THScoreLabel->setText(QApplication::translate("MainView", "TextLabel", 0));
        soundButton->setText(QApplication::translate("MainView", "Sound: On", 0));
    } // retranslateUi

};

namespace Ui {
    class MainView: public Ui_MainView {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINVIEW_H
