#include "mainwindow.h"
#include "ui_mainwindow.h"

int f=0,i=0;
float a[20];
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    float t;
    t=ui->textEdit->toPlainText().toFloat();
    t=t*10+1;
    a[i]=t;
    ui->textEdit->setText(QString::number(t));
}

void MainWindow::on_pushButton_2_clicked()
{
    float t;
    t=ui->textEdit->toPlainText().toFloat();
    t=t*10+2;
    a[i]=t;
    ui->textEdit->setText(QString::number(t));
}

void MainWindow::on_three_clicked()
{
    float t;
    t=ui->textEdit->toPlainText().toFloat();
    t=t*10+3;
    a[i]=t;
    ui->textEdit->setText(QString::number(t));
}


void MainWindow::on_pushButton_5_clicked()
{
    a[i]=ui->textEdit->toPlainText().toFloat();
    f=1;
    i++;
    ui->textEdit->setText(0);

}

void MainWindow::on_pushButton_7_clicked()
{
    if(f==1)
    {
        a[i-1]=a[i]+a[i-1];
        ui->textEdit->setText(QString::number(a[i-1]));
    }
    if(f==2)
    {
        a[i-1]=a[i-1]-a[i];
        ui->textEdit->setText(QString::number(a[i-1]));

    }
    if(f==3)
    {
        a[i-1]=a[i]*a[i-1];
        ui->textEdit->setText(QString::number(a[i-1]));
    }
    if(f==4)
    {
        a[i-1]=a[i-1]/a[i];
        ui->textEdit->setText(QString::number(a[i-1]));
    }
    if(f==5)
    {
        a[i-1]=sqrt(a[i-1]);
        ui->textEdit->setText(QString::number(a[i-1]));
    }
    if(f==6)
    {
        a[i-1]=a[i-1]*a[i-1];
        ui->textEdit->setText(QString::number(a[i-1]));
    }
    if(f==7)
    {
        a[i-1]=a[i-1]*a[i-1]*a[i-1];
        ui->textEdit->setText(QString::number(a[i-1]));

    }
    if(f==8)
    {
        a[i-1]=pow(a[i-1],a[i]);
        ui->textEdit->setText(QString::number(a[i-1]));
    }

}

void MainWindow::on_pushButton_8_clicked()
{
    ui->textEdit->setText(0);
    i=0;
    f=0;

}






void MainWindow::on_four_clicked()
{
    float t;
    t=ui->textEdit->toPlainText().toFloat();
    t=t*10+4;
    a[i]=t;
    ui->textEdit->setText(QString::number(t));
}

void MainWindow::on_five_clicked()
{
    float t;
    t=ui->textEdit->toPlainText().toFloat();
    t=t*10+5;
    a[i]=t;
    ui->textEdit->setText(QString::number(t));
}

void MainWindow::on_six_clicked()
{
    float t;
    t=ui->textEdit->toPlainText().toFloat();
    t=t*10+6;
    a[i]=t;
    ui->textEdit->setText(QString::number(t));
}

void MainWindow::on_seven_clicked()
{
    float t;
    t=ui->textEdit->toPlainText().toFloat();
    t=t*10+7;
    a[i]=t;
    ui->textEdit->setText(QString::number(t));
}

void MainWindow::on_eight_clicked()
{
    float t;
    t=ui->textEdit->toPlainText().toFloat();
    t=t*10+8;
    a[i]=t;
    ui->textEdit->setText(QString::number(t));
}

void MainWindow::on_nine_clicked()
{
    float t;
    t=ui->textEdit->toPlainText().toFloat();
    t=t*10+9;
    a[i]=t;
    ui->textEdit->setText(QString::number(t));
}

void MainWindow::on_zero_clicked()
{
    float t;
    t=ui->textEdit->toPlainText().toFloat();
    t=t*10;
    a[i]=t;
    ui->textEdit->setText(QString::number(t));
}

void MainWindow::on_sub_clicked()
{
    a[i]=ui->textEdit->toPlainText().toFloat();
    f=2;
    i++;
    ui->textEdit->setText(0);
}

void MainWindow::on_mul_clicked()
{
    a[i]=ui->textEdit->toPlainText().toFloat();
    f=3;
    i++;
    ui->textEdit->setText(0);
}

void MainWindow::on_div_clicked()
{
    a[i]=ui->textEdit->toPlainText().toFloat();
    f=4;
    i++;
    ui->textEdit->setText(0);
}

void MainWindow::on_root_clicked()
{
    a[i]=ui->textEdit->toPlainText().toFloat();
    f=5;
    i++;
    ui->textEdit->setText(0);
}

void MainWindow::on_sqre_clicked()
{
    a[i]=ui->textEdit->toPlainText().toFloat();
    f=6;
    i++;
    ui->textEdit->setText(0);
}

void MainWindow::on_cube_clicked()
{
    a[i]=ui->textEdit->toPlainText().toFloat();
    f=7;
    i++;
    ui->textEdit->setText(0);
}

void MainWindow::on_pushButton_9_clicked()
{
    a[i]=ui->textEdit->toPlainText().toFloat();
    f=8;
    i++;
    ui->textEdit->setText(0);
}
