#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<math.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_one_clicked();

    void on_three_clicked();

    void on_four_clicked();

    void on_five_clicked();

    void on_six_clicked();

    void on_seven_clicked();

    void on_eight_clicked();

    void on_nine_clicked();

    void on_zero_clicked();

    void on_sub_clicked();

    void on_mul_clicked();

    void on_div_clicked();

    void on_root_clicked();

    void on_sqre_clicked();

    void on_cube_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
