#include "dialog.h"
#include "ui_dialog.h"
#include <string>

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
    ui->radioButton->setChecked(true);

    ui->radioButton_5->setChecked(true);

    ui->lineEdit->setDisabled("");
    ui->lineEdit_2->setDisabled("");
    ui->lineEdit_3->setDisabled("");
    ui->lineEdit_4->setDisabled("");
    ui->lineEdit_5->setDisabled("");
    ui->textEdit->setReadOnly("");

    QStringList languages =
                    {"Java", "C++", "C#", "JavaScript", "PHP"};

    foreach(QString item, languages)
        ui->listWidget->addItem(item);
}

Dialog::~Dialog()
{
    delete ui;
}


void Dialog::on_pushButton_clicked()
{
    ui->lineEdit->setText("Hello");
}

void Dialog::on_pushButton_2_clicked()
{
    if(ui->checkBox->isChecked())
        ui->lineEdit_2->setText("Checked");
    else
        ui->lineEdit_2->setText("Not checked");
}

void Dialog::on_pushButton_3_clicked()
{
    QString old = ui->textEdit->toPlainText();
    if(ui->radioButton->isChecked())
    {
        ui->textEdit->append(ui->radioButton->text());
        ui->textEdit->setPlainText(ui->radioButton->text() +
                                   + '\n' + old);
    }
    else if(ui->radioButton_2->isChecked())
    {
        ui->textEdit->append(ui->radioButton_2->text());
        ui->textEdit->setPlainText(ui->radioButton_2->text() +
                                   + '\n' + old);
    }
    else if(ui->radioButton_3->isChecked())
    {
        ui->textEdit->append(ui->radioButton_3->text());
        ui->textEdit->setPlainText(ui->radioButton_3->text() +
                                   + '\n' + old);
    }
}

void Dialog::on_pushButton_4_clicked()
{
    if(ui->lineEdit_3->isModified())
    {
        bool x = true;
        QString qs = ui->lineEdit_3->text();
        std::string str = qs.toUtf8().constData();
        for(auto d : str)
            if((d>='0') && (d<='9'))
            {
                ui->lineEdit_4->setText("Delete numbers!");
                x = false;
            }
        if(x)
        {
            ui->comboBox->addItem(ui->lineEdit_3->text());
            ui->lineEdit_4->setText("Ready");
        }
    }
}

void Dialog::on_pushButton_5_clicked()
{
    ui->lineEdit_5->setText(ui->comboBox->currentText());
}

void Dialog::on_pushButton_8_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    if(ui->radioButton_5->isChecked())
        item->setTextColor(Qt::black);
    if(ui->radioButton_4->isChecked())
        item->setTextColor(QColor(255,0,255,255));
    if(ui->radioButton_6->isChecked())
        item->setTextColor(Qt::red);

    if(ui->radioButton_7->isChecked())
        item->setTextColor(Qt::green);
    if(ui->radioButton_8->isChecked())
        item->setTextColor(Qt::blue);
    if(ui->radioButton_9->isChecked())
        item->setTextColor(Qt::white);
}

void Dialog::on_pushButton_6_clicked()
{
    QListWidgetItem *item = ui->listWidget->currentItem();
    if(ui->radioButton_5->isChecked())
        item->setBackgroundColor(Qt::black);
    if(ui->radioButton_4->isChecked())
        item->setBackgroundColor(QColor(255,0,255,255));
    if(ui->radioButton_6->isChecked())
        item->setBackgroundColor(Qt::red);

    if(ui->radioButton_7->isChecked())
        item->setBackgroundColor(Qt::green);
    if(ui->radioButton_8->isChecked())
        item->setBackgroundColor(Qt::blue);
    if(ui->radioButton_9->isChecked())
        item->setBackgroundColor(Qt::white);
}

void Dialog::on_pushButton_7_clicked()
{
    if(ui->radioButton_5->isChecked())
    {
        ui->listWidget->setStyleSheet(
            "background-color: black;"
        );
    }
    if(ui->radioButton_4->isChecked())
    {
        ui->listWidget->setStyleSheet(
            "background-color: pink;"
        );
    }
    if(ui->radioButton_6->isChecked())
    {
        ui->listWidget->setStyleSheet(
            "background-color: red;"
        );
    }

    if(ui->radioButton_7->isChecked())
    {
        ui->listWidget->setStyleSheet(
            "background-color: green;"
        );
    }
    if(ui->radioButton_8->isChecked())
    {
        ui->listWidget->setStyleSheet(
            "background-color: blue;"
        );
    }
    if(ui->radioButton_9->isChecked())
    {
        ui->listWidget->setStyleSheet(
            "background-color: white;"
        );
    }
}
