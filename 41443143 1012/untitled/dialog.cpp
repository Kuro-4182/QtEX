#include "dialog.h"
#include <QDebug>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
{
    QGridLayout* gridLayout = new QGridLayout;
    displayTextEdit = new QTextEdit(QStringLiteral("Qt的標準通用對話盒"));
    colorPushBtn = new QPushButton(QStringLiteral("顏色對話盒"));
    errorPushBtn = new QPushButton(QStringLiteral("錯誤訊息盒"));
    filePushBtn = new QPushButton(QStringLiteral("檔案對話盒"));
    fontPushBtn = new QPushButton(QStringLiteral("字體對話盒"));
    inputPushBtn = new QPushButton(QStringLiteral("輸入對話盒"));
    pagePushBtn = new QPushButton(QStringLiteral("頁面設定對話盒"));
    progressPushBtn = new QPushButton(QStringLiteral("進度對話盒"));
    printPushBtn = new QPushButton(QStringLiteral("列印對話盒"));
    textColorPushBtn = new QPushButton(QStringLiteral("文字顏色對話盒"));

    gridLayout->addWidget(colorPushBtn,0,0,1,1);
    gridLayout->addWidget(errorPushBtn,0,1,1,1);
    gridLayout->addWidget(filePushBtn,0,2,1,1);
    gridLayout->addWidget(fontPushBtn,1,0,1,1);
    gridLayout->addWidget(inputPushBtn,1,1,1,1);
    gridLayout->addWidget(pagePushBtn,1,2,1,1);
    gridLayout->addWidget(progressPushBtn,2,0,1,1);
    gridLayout->addWidget(printPushBtn,2,1,1,1);
    gridLayout->addWidget(textColorPushBtn,2,2,1,1);
    gridLayout->addWidget(displayTextEdit,3,0,3,3);

        setLayout(gridLayout);
        setWindowTitle(QStringLiteral("內建對話盒展示"));
        resize(800,600);
        connect(colorPushBtn,SIGNAL(clicked()),this,SLOT(doPushBtn()));
        connect(errorPushBtn,SIGNAL(clicked()),this,SLOT(doPushBtn()));
        connect(filePushBtn,SIGNAL(clicked()),this,SLOT(doPushBtn()));
        connect(fontPushBtn,SIGNAL(clicked()),this,SLOT(doPushBtn()));
        connect(inputPushBtn,SIGNAL(clicked()),this,SLOT(doPushBtn()));
        connect(pagePushBtn,SIGNAL(clicked()),this,SLOT(doPushBtn()));
        connect(progressPushBtn,SIGNAL(clicked()),this,SLOT(doPushBtn()));
        connect(printPushBtn,SIGNAL(clicked()),this,SLOT(doPushBtn()));
        connect(textColorPushBtn,SIGNAL(clicked()),this,SLOT(doPushBtn()));
}

Dialog::~Dialog() = default;
void Dialog::doPushBtn(){
    QPushButton* btn = qobject_cast<QPushButton*>(sender());
    if (btn == colorPushBtn) {
        QPalette palette = displayTextEdit->palette();
        const QColor& color = QColorDialog::getColor(palette.color(QPalette::Base),this,"選擇顏色");

        if(color.isValid()) {
            palette.setColor(QPalette::Base, color);
            displayTextEdit->setPalette(palette);
        }

    }

    if (btn == textColorPushBtn) {
        QPalette palette = displayTextEdit->palette();
        const QColor& color = QColorDialog::getColor(palette.color(QPalette::Base),this,"選擇顏色");

        if(color.isValid()) {
            palette.setColor(QPalette::Text, color);
            displayTextEdit->setPalette(palette);
        }

    }

    if (btn == filePushBtn) {
        QString fileName = QFileDialog::getOpenFileName(this,QStringLiteral("打開檔案"),".",QStringLiteral("任何檔案(*.*);;文字檔(*.txt);;XML檔(*.xml)"));
        displayTextEdit->setText(fileName);
    }

    if (btn == progressPushBtn) {
        QProgressDialog progress("複製檔案中...","取消",0,1000,this);
        progress.setWindowTitle("進度對話和展示");
        progress.show();
        for(int i=0;i<1000000;i++){
            progress.setValue(i);
            qApp->processEvents();
            if(progress.wasCanceled()){
                break;
            }
            qDebug()<<i;
        }
    }

}
