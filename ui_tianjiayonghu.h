/********************************************************************************
** Form generated from reading UI file 'tianjiayonghu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TIANJIAYONGHU_H
#define UI_TIANJIAYONGHU_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWizardPage>

QT_BEGIN_NAMESPACE

class Ui_tianjiayonghu
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QLineEdit *lineEdit_5;
    QLineEdit *lineEdit_6;
    QLineEdit *lineEdit_7;

    void setupUi(QWizardPage *tianjiayonghu)
    {
        if (tianjiayonghu->objectName().isEmpty())
            tianjiayonghu->setObjectName(QStringLiteral("tianjiayonghu"));
        tianjiayonghu->resize(516, 398);
        label = new QLabel(tianjiayonghu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 20, 51, 21));
        label_2 = new QLabel(tianjiayonghu);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(130, 60, 51, 21));
        label_3 = new QLabel(tianjiayonghu);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(140, 100, 51, 21));
        label_4 = new QLabel(tianjiayonghu);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(130, 140, 51, 21));
        label_5 = new QLabel(tianjiayonghu);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(130, 180, 51, 21));
        label_6 = new QLabel(tianjiayonghu);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(130, 220, 51, 21));
        label_7 = new QLabel(tianjiayonghu);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(130, 260, 51, 21));
        pushButton = new QPushButton(tianjiayonghu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(210, 330, 75, 23));
        lineEdit = new QLineEdit(tianjiayonghu);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(230, 20, 113, 20));
        lineEdit_2 = new QLineEdit(tianjiayonghu);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(230, 60, 113, 20));
        lineEdit_3 = new QLineEdit(tianjiayonghu);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(230, 100, 113, 20));
        lineEdit_4 = new QLineEdit(tianjiayonghu);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(230, 140, 113, 20));
        lineEdit_5 = new QLineEdit(tianjiayonghu);
        lineEdit_5->setObjectName(QStringLiteral("lineEdit_5"));
        lineEdit_5->setGeometry(QRect(230, 180, 113, 20));
        lineEdit_6 = new QLineEdit(tianjiayonghu);
        lineEdit_6->setObjectName(QStringLiteral("lineEdit_6"));
        lineEdit_6->setGeometry(QRect(230, 220, 113, 20));
        lineEdit_7 = new QLineEdit(tianjiayonghu);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));
        lineEdit_7->setGeometry(QRect(230, 260, 113, 20));

        retranslateUi(tianjiayonghu);

        QMetaObject::connectSlotsByName(tianjiayonghu);
    } // setupUi

    void retranslateUi(QWizardPage *tianjiayonghu)
    {
        tianjiayonghu->setWindowTitle(QApplication::translate("tianjiayonghu", "WizardPage", Q_NULLPTR));
        label->setText(QApplication::translate("tianjiayonghu", "\345\256\242\346\210\267\347\274\226\345\217\267", Q_NULLPTR));
        label_2->setText(QApplication::translate("tianjiayonghu", "\345\256\242\346\210\267\345\247\223\345\220\215", Q_NULLPTR));
        label_3->setText(QApplication::translate("tianjiayonghu", "\346\200\247\345\210\253", Q_NULLPTR));
        label_4->setText(QApplication::translate("tianjiayonghu", "\350\272\253\344\273\275\350\257\201\345\217\267", Q_NULLPTR));
        label_5->setText(QApplication::translate("tianjiayonghu", "\345\256\242\346\210\267\344\275\217\345\235\200", Q_NULLPTR));
        label_6->setText(QApplication::translate("tianjiayonghu", "\347\224\265\345\255\220\351\202\256\344\273\266", Q_NULLPTR));
        label_7->setText(QApplication::translate("tianjiayonghu", "\347\224\265\350\257\235\345\217\267\347\240\201", Q_NULLPTR));
        pushButton->setText(QApplication::translate("tianjiayonghu", "\346\267\273\345\212\240\344\271\230\350\275\246\344\272\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class tianjiayonghu: public Ui_tianjiayonghu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TIANJIAYONGHU_H
