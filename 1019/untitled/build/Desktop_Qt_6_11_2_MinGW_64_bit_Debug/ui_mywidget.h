/********************************************************************************
** Form generated from reading UI file 'mywidget.ui'
**
** Created by: Qt User Interface Compiler version 6.11.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MYWIDGET_H
#define UI_MYWIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mywidget
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout;
    QLabel *label_2;
    QLineEdit *lineEdit;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label_4;
    QLineEdit *lineEdit_4;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QSpacerItem *horizontalSpacer_2;

    void setupUi(QWidget *mywidget)
    {
        if (mywidget->objectName().isEmpty())
            mywidget->setObjectName("mywidget");
        mywidget->resize(800, 514);
        verticalLayout_2 = new QVBoxLayout(mywidget);
        verticalLayout_2->setObjectName("verticalLayout_2");
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName("verticalLayout");
        tableWidget = new QTableWidget(mywidget);
        tableWidget->setObjectName("tableWidget");

        verticalLayout->addWidget(tableWidget);

        gridLayout = new QGridLayout();
        gridLayout->setObjectName("gridLayout");
        label_2 = new QLabel(mywidget);
        label_2->setObjectName("label_2");

        gridLayout->addWidget(label_2, 1, 0, 1, 1);

        lineEdit = new QLineEdit(mywidget);
        lineEdit->setObjectName("lineEdit");

        gridLayout->addWidget(lineEdit, 0, 1, 1, 1);

        label = new QLabel(mywidget);
        label->setObjectName("label");

        gridLayout->addWidget(label, 0, 0, 1, 1);

        label_3 = new QLabel(mywidget);
        label_3->setObjectName("label_3");

        gridLayout->addWidget(label_3, 2, 0, 1, 1);

        lineEdit_2 = new QLineEdit(mywidget);
        lineEdit_2->setObjectName("lineEdit_2");

        gridLayout->addWidget(lineEdit_2, 1, 1, 1, 1);

        lineEdit_3 = new QLineEdit(mywidget);
        lineEdit_3->setObjectName("lineEdit_3");

        gridLayout->addWidget(lineEdit_3, 2, 1, 1, 1);

        label_4 = new QLabel(mywidget);
        label_4->setObjectName("label_4");

        gridLayout->addWidget(label_4, 3, 0, 1, 1);

        lineEdit_4 = new QLineEdit(mywidget);
        lineEdit_4->setObjectName("lineEdit_4");

        gridLayout->addWidget(lineEdit_4, 3, 1, 1, 1);


        verticalLayout->addLayout(gridLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        pushButton = new QPushButton(mywidget);
        pushButton->setObjectName("pushButton");

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(mywidget);
        pushButton_2->setObjectName("pushButton_2");

        horizontalLayout_2->addWidget(pushButton_2);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout->addLayout(horizontalLayout_2);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(mywidget);

        QMetaObject::connectSlotsByName(mywidget);
    } // setupUi

    void retranslateUi(QWidget *mywidget)
    {
        mywidget->setWindowTitle(QCoreApplication::translate("mywidget", "mywidget", nullptr));
        label_2->setText(QCoreApplication::translate("mywidget", "\347\217\255\347\264\232:", nullptr));
        label->setText(QCoreApplication::translate("mywidget", "\345\255\270\350\231\237:", nullptr));
        label_3->setText(QCoreApplication::translate("mywidget", "\345\247\223\345\220\215:", nullptr));
        label_4->setText(QCoreApplication::translate("mywidget", "\351\233\273\350\251\261:", nullptr));
        pushButton->setText(QCoreApplication::translate("mywidget", "\346\226\260\345\242\236", nullptr));
        pushButton_2->setText(QCoreApplication::translate("mywidget", "\345\214\257\345\207\272", nullptr));
    } // retranslateUi

};

namespace Ui {
    class mywidget: public Ui_mywidget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MYWIDGET_H
