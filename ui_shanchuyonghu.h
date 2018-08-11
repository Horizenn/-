/********************************************************************************
** Form generated from reading UI file 'shanchuyonghu.ui'
**
** Created by: Qt User Interface Compiler version 5.6.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHANCHUYONGHU_H
#define UI_SHANCHUYONGHU_H

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

class Ui_shanchuyonghu
{
public:
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *pushButton;

    void setupUi(QWizardPage *shanchuyonghu)
    {
        if (shanchuyonghu->objectName().isEmpty())
            shanchuyonghu->setObjectName(QStringLiteral("shanchuyonghu"));
        shanchuyonghu->resize(400, 300);
        label = new QLabel(shanchuyonghu);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(120, 70, 141, 21));
        lineEdit = new QLineEdit(shanchuyonghu);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(150, 130, 71, 21));
        pushButton = new QPushButton(shanchuyonghu);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(150, 200, 71, 31));

        retranslateUi(shanchuyonghu);

        QMetaObject::connectSlotsByName(shanchuyonghu);
    } // setupUi

    void retranslateUi(QWizardPage *shanchuyonghu)
    {
        shanchuyonghu->setWindowTitle(QApplication::translate("shanchuyonghu", "WizardPage", Q_NULLPTR));
        label->setText(QApplication::translate("shanchuyonghu", "\350\257\267\350\276\223\345\205\245\350\246\201\345\210\240\351\231\244\347\232\204\345\256\242\346\210\267\347\274\226\345\217\267", Q_NULLPTR));
        pushButton->setText(QApplication::translate("shanchuyonghu", "\345\210\240\351\231\244\344\271\230\350\275\246\344\272\272", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class shanchuyonghu: public Ui_shanchuyonghu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHANCHUYONGHU_H
