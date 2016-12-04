#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"calculations.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //QString Num1;
}

MainWindow::~MainWindow()
{
    delete ui;

}
void MainWindow::on_pushButton_1_released()
{
    ui->lineEdit->insert("1");
}

void MainWindow::on_lineEdit_textEdited(const QString &arg1)
{
    //QChar::iterator save;
    QString s = ui->lineEdit->text();
    QChar c = s[s.length()-1];
    //QString S=*save;
    QValidator *validator = new QIntValidator(0, 9, this);
    QLineEdit *edit = new QLineEdit(this);
    if(op)
    {
        ui->lineEdit->clear();
        op=false;
        ui->lineEdit->insert(c);
    }

}

void MainWindow::on_a_2_released()
{
    ui->lineEdit->insert("2");
}

void MainWindow::on_pushButton_7_released()
{
    ui->lineEdit->insert("7");
}

void MainWindow::on_pushButton_2_released()
{
    ui->lineEdit->insert("2");
}

void MainWindow::on_pushButton_3_released()
{
    ui->lineEdit->insert("3");
}

void MainWindow::on_pushButton_6_released()
{
    ui->lineEdit->insert("6");
}

void MainWindow::on_pushButton_5_released()
{
    ui->lineEdit->insert("5");
}

void MainWindow::on_pushButton_4_released()
{
    ui->lineEdit->insert("4");
}

void MainWindow::on_pushButton_8_released()
{
    ui->lineEdit->insert("8");
}

void MainWindow::on_pushButton_9_released()
{
    ui->lineEdit->insert("9");
}

void MainWindow::on_a_released()
{

}

void MainWindow::on_pushButton_Factorial_released()
{
    ui->lineEdit->insert("!");
}

void MainWindow::on_pushButton_minus_released()
{
    ui->lineEdit->insert("-");
}

void MainWindow::on_PushButton_equal_released()
{
    QString blink;
    op=true;
   blink= ui->lineEdit->text();



}

void MainWindow::on_pushButton_Clear_released()
{
    ui->lineEdit->clear();
}

void MainWindow::on_pushButton_0_released()
{
    ui->lineEdit->insert("0");
}

void MainWindow::on_pushButton_Multiply_released()
{
    QString num1 =ui->lineEdit->accessibleDescription();
    vector<byte>Num1;
    QString num2 =ui->lineEdit->accessibleDescription();
    vector<byte>Num2;
//    ui->lineEdit->event()
//    unsigned char* test1 = (unsigned char*) num1.data();
//     unsigned char* test2 = (unsigned char*) num2.data();

//     // fill vector
//    for(int i=0;i<num1.size();i++,++test1)
//        Num1.push_back(*test1);
//    for(int i=0;i<num2.size();i++,++test2)
//        Num2.push_back(*test1);

//     vector<byte>Result;
//     bigmultiply(Num1,Num2,Result);
//     ui->lineEdit_2=

}

void MainWindow::on_pushButton_add_2_released()
{
    ui->lineEdit->insert("+");
}

