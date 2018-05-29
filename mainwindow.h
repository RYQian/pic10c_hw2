#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSlider>
#include <QRadioButton>


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

    double total_score(int hw1,int hw2,int hw3,int hw4,int hw5,int hw6,int hw7,int hw8,int midterm1, int midterm2, int final);

    double total_score_B(int hw1,int hw2,int hw3,int hw4,int hw5,int hw6,int hw7,int hw8,int midterm1, int midterm2, int final);

    double get_total();

    void clear_zero();

    void on_horizontalSlider_sliderReleased();

    void on_horizontalSlider_2_sliderReleased();

    void on_horizontalSlider_3_sliderReleased();

    void on_radioButton_clicked();

    void on_horizontalSlider_4_sliderReleased();

    void on_horizontalSlider_5_sliderReleased();

    void on_horizontalSlider_6_sliderReleased();

    void on_horizontalSlider_7_sliderReleased();

    void on_horizontalSlider_8_sliderReleased();

    void on_horizontalSlider_9_sliderReleased();

    void on_horizontalSlider_10_sliderReleased();

    void on_horizontalSlider_11_sliderReleased();



    void on_spinBox_valueChanged(int arg1);

    void on_spinBox_2_valueChanged(int arg1);

    void on_spinBox_3_valueChanged(int arg1);

    void on_spinBox_4_valueChanged(int arg1);

    void on_spinBox_5_valueChanged(int arg1);

    void on_spinBox_6_valueChanged(int arg1);

    void on_spinBox_7_valueChanged(int arg1);

    void on_spinBox_8_valueChanged(int arg1);

    void on_spinBox_9_valueChanged(int arg1);


    void on_spinBox_10_valueChanged(int arg1);

    void on_spinBox_11_valueChanged(int arg1);



    void on_radioButton_2_clicked();

    void on_comboBox_currentTextChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
