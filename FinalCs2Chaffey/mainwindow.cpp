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


    QString Qs;
    QString nextoperator;

    if(op1)
    {
        cout<<"if op1"<<endl;
        //op1=false;
        if(num1.isEmpty())
        {
            QString r;
             op1=false;
            cout<<"if num1 is empty"<<endl;
            // get the line
            num1=ui->lineEdit->text();
            // clear the line
            ui->lineEdit->clear();
            num1.chop(num1.size()/2);
            cout<<"num1:"<<num1.toStdString()<<endl;
            if(ops.empty())
                ui->label->setText(num1);
            else
            {
                r.push_back(num1);
                r.push_back(ops.front());
                ui->label->setText(r);
            }
         }
        else if(!ops.empty())
         {
             op1=false;
            cout<<"ops is not empty"<<endl;
            if(!(num1.isEmpty()))
               {
                     QString r;
                    cout<<"num1 is not empty"<<endl;
                    string result;
                    //get second num from line edit
                    Qs=ui->lineEdit->text();
                    Qs.chop(Qs.size()/2);
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
                    num1=qstr;
                    // cout<<"num1"<<QString::fromStdString(num1)<<endl;
                     ui->lineEdit->clear();
//                     ui->label->setText();
                     if(ops.empty())
                         ui->label->setText(qstr);
                     else
                     {
                         r.push_back(num1);
                         r.push_back(ops.front());
                         ui->label->setText(r);
                     }

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
   QString r=ui->lineEdit->text();
   ui->lineEdit->insert(r);

}
void MainWindow::on_pushButton_Clear_released()
{
    ui->lineEdit->clear();
    num1.clear();
    op1=false;
    ops.clear();
    ui->label->clear();
}

void MainWindow::on_pushButton_0_released()
{
    ui->lineEdit->insert("0");
}

void MainWindow::on_pushButton_Multiply_released()
{

    ops.push_back("*");
    op1=true;
    QString r=ui->lineEdit->text();
    ui->lineEdit->insert(r);
}
void MainWindow::on_pushButton_add_2_released()
{
    ops.push_back("+");
    op1=true;
    QString r=ui->lineEdit->text();
    ui->lineEdit->insert(r);
}

void MainWindow::on_label_objectNameChanged(const QString &objectName)
{

}

void MainWindow::on_pushButton_divide_released()
{
    ops.push_back("/");
    op1=true;
    QString r=ui->lineEdit->text();
    ui->lineEdit->insert(r);
}

void MainWindow::on_pushButton_released()
{
    QString r =ui->lineEdit->text();
    r.chop(1);
    ui->lineEdit->clear();
    ui->lineEdit->insert(r);
}
