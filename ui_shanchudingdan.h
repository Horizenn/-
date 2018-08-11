/********************************************************************************
** Form generated from reading UI file 'shanchudingdan.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHANCHUDINGDAN_H
#define UI_SHANCHUDINGDAN_H

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

class Ui_shanchudingdan
{
public:
    QPushButton *pushButton;
    QLineEdit *lineEdit;
    QLabel *label;

    void setupUi(QWizardPage *shanchudingdan)
    {
        if (shanchudingdan->objectName().isEmpty())
            shanchudingdan->setObjectName(QStringLiteral("shanchudingdan"));
        shanchudingdan->resize(400, 300);
        pushButton = new QPushButton(shanchudingdan);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 180, 71, 31));
        lineEdit = new QLineEdit(shanchudingdan);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(160, 120, 71, 21));
        label = new QLabel(shanchudingdan);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(130, 60, 141, 21));

        retranslateUi(shanchudingdan);

        QMetaObject::connectSlotsByName(shanchudingdan);
    } // setupUi

    void retranslateUi(QWizardPage *shanchudingdan)
    {
        shanchudingdan->setWindowTitle(QApplication::translate("shanchudingdan", "\345\210\240\351\231\244\350\256\242\345\215\225", Q_NULLPTR));
        pushButton->setText(QApplication::translate("shanchudingdan", "\345\210\240\351\231\244\350\256\242\345\215\225", Q_NULLPTR));
        label->setText(QApplication::translate("shanchudingdan", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\350\256\242\345\215\225\347\274\226\345\217\267", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class shanchudingdan: public Ui_shanchudingdan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHANCHUDINGDAN_H
