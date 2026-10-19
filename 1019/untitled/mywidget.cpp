#include "mywidget.h"
#include "ui_mywidget.h"

#include <QFile>
#include <QDebug>


QString mfilename = "C:/test/myfile.txt";

void Write(QString Filename,QString str) {

    QFile mFile(Filename);

    if (!mFile.open(QFile::WriteOnly | QFile::Text)) {
        qDebug()<<"could not open file for write";
        return;
    }

    QTextStream out(&mFile);
    out<<str;
    mFile.flush();
    mFile.close();

}

mywidget::mywidget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::mywidget)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(4);
    QStringList colTotle;
    colTotle<<"學號"<<"班級"<<"姓名"<<"電話";
    ui->tableWidget->setHorizontalHeaderLabels(colTotle);
}

mywidget::~mywidget()
{
    delete ui;
}

void mywidget::on_pushButton_clicked()
{
    QTableWidgetItem *inputRow1, *inputRow2, *inputRow3, *inputRow4;

    inputRow1 = new QTableWidgetItem(QString(ui->lineEdit->text()));
    inputRow2 = new QTableWidgetItem(QString(ui->lineEdit_2->text()));
    inputRow3 = new QTableWidgetItem(QString(ui->lineEdit_3->text()));
    inputRow4 = new QTableWidgetItem(QString(ui->lineEdit_4->text()));

    ui->tableWidget->insertRow(ui->tableWidget->rowCount());

    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,0,inputRow1);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,1,inputRow2);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,2,inputRow3);
    ui->tableWidget->setItem(ui->tableWidget->rowCount()-1,3,inputRow4);
}

