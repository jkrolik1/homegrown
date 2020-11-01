#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    connect(ui->pushButton_2, SIGNAL(clicked()),
            ui->lineEdit, SLOT(clear()));
    connect(ui->pushButton_2, SIGNAL(clicked()),
            ui->lineEdit_2, SLOT(clear()));
    connect(ui->pushButton_2, SIGNAL(clicked()),
            ui->lineEdit_3, SLOT(clear()));
    connect(ui->pushButton_2, SIGNAL(clicked()),
            ui->lineEdit_4, SLOT(clear()));
}

Dialog::~Dialog()
{
    delete ui;
}

