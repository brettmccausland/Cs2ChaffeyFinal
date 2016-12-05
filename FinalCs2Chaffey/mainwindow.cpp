#include "mainwindow.h"
#include "ui_mainwindow.h"
#include"calculations.h"
#include "vector"
#include "stack"
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

    //QValidator *validator = new QIntValidator(0, 9, this);
    //QLineEdit *edit = new QLineEdit(this);
    QString Qs;
    QString nextoperator;
    if(op1)
    {

        if(num1.isEmpty())
        {
            Qs = ui->lineEdit->text();
            QChar c = Qs[Qs.length()-1];
            num1=arg1;
            num1.chop(1);
            ui->lineEdit->clear();
            ui->lineEdit->insert(c);
            op1=false;
        }
        else
        {
            if(!ops.empty())
           {
                string result;
                //get second num from line edit
                Qs=ui->lineEdit->text();
                //convert qstring to strings
                string snum1=num1.toStdString();
                string snum2=Qs.toStdString();
                // delete the old number
                num1.clear();
                // get the next operator and remove it
               QString nextoperator=ops.front();
                ops.pop_front();
                // convert from Qstring operator string
                 string str_op=nextoperator.toStdString();
                 //convert string to char
                const char *cstr = str_op.c_str();
                 process(snum1,snum2,*cstr,result);
                 //convert result to qstr
                 QString qstr = QString::fromStdString(result);
                 ui->lineEdit->clear();
                 ui->lineEdit->insert(qstr);
                 op1=false;
           }
        }
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

}

void MainWindow::on_pushButton_minus_released()
{

   ops.push_back("-");
   op1=true;

}

void MainWindow::on_PushButton_equal_released()
{


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

    ops.push_back("*");
    op1=true;
}
void MainWindow::on_pushButton_add_2_released()
{
    ops.push_back("+");
    op1=true;
}
