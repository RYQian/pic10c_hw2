#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->horizontalSlider->setRange(0,100);
    ui->spinBox->setRange(0,100);

    ui->horizontalSlider_2->setRange(0,100);
    ui->spinBox_2->setRange(0,100);

    ui->horizontalSlider_3->setRange(0,100);
    ui->spinBox_3->setRange(0,100);

    ui->horizontalSlider_4->setRange(0,100);
    ui->spinBox_4->setRange(0,100);

    ui->horizontalSlider_5->setRange(0,100);
    ui->spinBox_5->setRange(0,100);

    ui->horizontalSlider_6->setRange(0,100);
    ui->spinBox_6->setRange(0,100);

    ui->horizontalSlider_7->setRange(0,100);
    ui->spinBox_7->setRange(0,100);

    ui->horizontalSlider_8->setRange(0,100);
    ui->spinBox_8->setRange(0,100);

    ui->horizontalSlider_9->setRange(0,100);
    ui->spinBox_9->setRange(0,100);

    ui->horizontalSlider_10->setRange(0,100);
    ui->spinBox_10->setRange(0,100);

    ui->horizontalSlider_11->setRange(0,100);
    ui->spinBox_11->setRange(0,100);


}


double MainWindow::total_score_B(int hw1,int hw2,int hw3,int hw4,int hw5,int hw6,int hw7,int hw8,int midterm1, int midterm2, int final)

{

    int midterm = 0;
    if(midterm1 >= midterm2){
        midterm = midterm1;
    }
    else{
        midterm = midterm2;
    }

    double total = (double) (hw1 + hw2 +hw3 +hw4+hw5 +hw6 +hw7 +hw8 )*0.25*0.125 + (double)midterm*0.3 +double(final)*0.44;

    return total;
}


double MainWindow:: get_total()
{
    int hw1 =ui->horizontalSlider->value();
    int hw2 =ui->horizontalSlider_2->value();
    int hw3 =ui->horizontalSlider_3->value();
    int hw4 =ui->horizontalSlider_4->value();
    int hw5 =ui->horizontalSlider_5->value();
    int hw6 =ui->horizontalSlider_6->value();
    int hw7 =ui->horizontalSlider_7->value();
    int hw8 =ui->horizontalSlider_8->value();
    int midterm1 =ui->horizontalSlider_9->value();
    int midterm2 =ui->horizontalSlider_10->value();
    int final =ui->horizontalSlider_11->value();


    double total = 0;
    if(ui->radioButton->isChecked()){
          total = total_score(hw1,hw2,hw3,hw4,hw5,hw6,hw7,hw8,midterm1, midterm2,final);
    }
    if (ui->radioButton_2->isChecked()){
          total = total_score_B(hw1,hw2,hw3,hw4,hw5,hw6,hw7,hw8,midterm1, midterm2,final);
    }


    return total;
}




void MainWindow:: clear_zero()
{
    ui->horizontalSlider->setValue(0);
    ui->horizontalSlider_2->setValue(0);
    ui->horizontalSlider_3->setValue(0);
    ui->horizontalSlider_4->setValue(0);
    ui->horizontalSlider_5->setValue(0);
    ui->horizontalSlider_6->setValue(0);
    ui->horizontalSlider_7->setValue(0);
    ui->horizontalSlider_8->setValue(0);
    ui->horizontalSlider_9->setValue(0);
    ui->horizontalSlider_10->setValue(0);
    ui->horizontalSlider_11->setValue(0);

     ui->label_14->setText(QString::number(0.0));

}







double MainWindow::total_score(int hw1,int hw2,int hw3,int hw4,int hw5,int hw6,int hw7,int hw8,int midterm1, int midterm2, int final)

{

    double total = (double) (hw1 + hw2 +hw3 +hw4+hw5 +hw6 +hw7 +hw8 )*0.25*0.125 + (double)(midterm1 + midterm2)*0.2 +double(final)*0.35;

    return total;
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_horizontalSlider_sliderReleased()
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));

}

void MainWindow::on_horizontalSlider_2_sliderReleased()
{
    double total = get_total();
    ui->label_14->setText(QString::number(total));


}

void MainWindow::on_horizontalSlider_3_sliderReleased()
{
    double total = get_total();
    ui->label_14->setText(QString::number(total));
}



void MainWindow::on_horizontalSlider_4_sliderReleased()
{
    double total = get_total();
    ui->label_14->setText(QString::number(total));

}

void MainWindow::on_horizontalSlider_5_sliderReleased()
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));

}

void MainWindow::on_horizontalSlider_6_sliderReleased()
{
    double total = get_total();
    ui->label_14->setText(QString::number(total));
}

void MainWindow::on_horizontalSlider_7_sliderReleased()
{
    double total = get_total();
    ui->label_14->setText(QString::number(total));
}

void MainWindow::on_horizontalSlider_8_sliderReleased()
{
    double total = get_total();
    ui->label_14->setText(QString::number(total));
}

void MainWindow::on_horizontalSlider_9_sliderReleased()
{
    double total = get_total();
    ui->label_14->setText(QString::number(total));
}

void MainWindow::on_horizontalSlider_10_sliderReleased()
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));
}

void MainWindow::on_horizontalSlider_11_sliderReleased()
{
    double total = get_total();
    ui->label_14->setText(QString::number(total));
}



void MainWindow::on_spinBox_valueChanged(int arg1)
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));


}


void MainWindow::on_spinBox_2_valueChanged(int arg1)
{
    double total = get_total();
    ui->label_14->setText(QString::number(total));

}
void MainWindow::on_spinBox_3_valueChanged(int arg1)
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));

}

void MainWindow::on_spinBox_4_valueChanged(int arg1)
{
    double total = get_total();
    ui->label_14->setText(QString::number(total));

}

void MainWindow::on_spinBox_5_valueChanged(int arg1)
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));
}

void MainWindow::on_spinBox_6_valueChanged(int arg1)
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));
}

void MainWindow::on_spinBox_7_valueChanged(int arg1)
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));
}

void MainWindow::on_spinBox_8_valueChanged(int arg1)
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));
}

void MainWindow::on_spinBox_9_valueChanged(int arg1)
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));
}
void MainWindow::on_spinBox_10_valueChanged(int arg1)
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));
}

void MainWindow::on_spinBox_11_valueChanged(int arg1)
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));
}



void MainWindow::on_radioButton_clicked()
{

    double total = get_total();
    ui->label_14->setText(QString::number(total));

}



void MainWindow::on_radioButton_2_clicked()
{
    double total = get_total();
    ui->label_14->setText(QString::number(total));

}

void MainWindow::on_comboBox_currentTextChanged(const QString &arg1)
{
    clear_zero();
}
