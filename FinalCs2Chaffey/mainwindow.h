#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <stack>
#include <QMainWindow>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    QString num1,num2;
    QVector<QString> ops;
    bool op1=false;
    ~MainWindow();

private slots:


    void on_pushButton_1_released();

    void on_lineEdit_textEdited(const QString &arg1);

    void on_a_2_released();

    void on_pushButton_7_released();

    void on_pushButton_2_released();

    void on_pushButton_3_released();

    void on_pushButton_6_released();

    void on_pushButton_5_released();

    void on_pushButton_4_released();

    void on_pushButton_8_released();

    void on_pushButton_9_released();

    void on_a_released();

    void on_pushButton_Factorial_released();

    void on_pushButton_minus_released();

    //void on_PushButton_equal_released();

    void on_pushButton_Clear_released();

    void on_pushButton_0_released();

    void on_pushButton_Multiply_released();

    void on_pushButton_add_2_released();

    void on_label_objectNameChanged(const QString &objectName);



    void on_pushButton_divide_released();

    void on_pushButton_released();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
