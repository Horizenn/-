/********************************************************************************
** Form generated from reading UI file 'guanli.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GUANLI_H
#define UI_GUANLI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_guanli
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *guanli)
    {
        if (guanli->objectName().isEmpty())
            guanli->setObjectName(QStringLiteral("guanli"));
        guanli->resize(400, 300);
        pushButton = new QPushButton(guanli);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(80, 80, 75, 23));
        pushButton_2 = new QPushButton(guanli);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(80, 130, 75, 23));
        label = new QLabel(guanli);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(90, 50, 54, 12));
        label_2 = new QLabel(guanli);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(240, 50, 54, 12));
        pushButton_3 = new QPushButton(guanli);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(80, 180, 75, 23));
        pushButton_4 = new QPushButton(guanli);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(80, 230, 75, 23));
        pushButton_5 = new QPushButton(guanli);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(230, 110, 75, 23));
        pushButton_6 = new QPushButton(guanli);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(230, 200, 75, 23));

        retranslateUi(guanli);

        QMetaObject::connectSlotsByName(guanli);
    } // setupUi

    void retranslateUi(QWidget *guanli)
    {
        guanli->setWindowTitle(QApplication::translate("guanli", "\347\256\241\347\220\206\345\221\230\347\263\273\347\273\237", Q_NULLPTR));
        pushButton->setText(QApplication::translate("guanli", "\345\242\236\345\212\240\350\210\252\347\272\277", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("guanli", "\345\210\240\351\231\244\350\210\252\347\272\277", Q_NULLPTR));
        label->setText(QApplication::translate("guanli", "\350\210\252\347\272\277\347\256\241\347\220\206", Q_NULLPTR));
        label_2->setText(QApplication::translate("guanli", "\350\256\242\345\215\225\347\256\241\347\220\206", Q_NULLPTR));
        pushButton_3->setText(QApplication::translate("guanli", "\344\277\256\346\224\271\350\210\252\347\272\277", Q_NULLPTR));
        pushButton_4->setText(QApplication::translate("guanli", "\346\237\245\347\234\213\350\210\252\347\272\277", Q_NULLPTR));
        pushButton_5->setText(QApplication::translate("guanli", "\346\237\245\347\234\213\350\256\242\345\215\225", Q_NULLPTR));
        pushButton_6->setText(QApplication::translate("guanli", "\345\210\240\351\231\244\350\256\242\345\215\225", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class guanli: public Ui_guanli {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GUANLI_H
