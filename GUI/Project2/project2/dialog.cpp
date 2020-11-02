#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->textEdit->hide();
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    QMessageBox inf;

    inf.setWindowTitle(" ");
    inf.setText("Show text");

    ui->textEdit->setStyleSheet(
        "font-size: 20px;"
    );

    switch(inf.exec())
    {
        case QMessageBox::Ok:
            Dialog::resize(620,Dialog::height());
            ui->textEdit->show();
            ui->textEdit->setText("Hello!");
        break;
    }
}

void Dialog::on_pushButton_2_clicked()
{
    QMessageBox::warning(this, "Warning", "This is warning!");
}

void Dialog::on_pushButton_3_clicked()
{
    QMessageBox::about(this, "About", "This is about window!");
}

void Dialog::on_pushButton_4_clicked()
{
    QMessageBox que;
    que.setIcon(QMessageBox::Question);
    que.setText("Do You want to close the dialog?");
    que.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
    que.setDefaultButton(QMessageBox::No);
    que.setWindowTitle("Question");
    int ret = que.exec();

    switch(ret)
    {
        case QMessageBox::Yes:
            QDialog::close();
        break;

        default:
        break;
    }
}
