#include "mainwindow.h"
#include "./ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    
    ui->setupUi(this);
    
    this->setWindowTitle("asd");
    
    variable = 10;
    ui->MY_BUTTON->setText("BUTTONBUTTONBUTTON");
    
    
    
//    QString buttonText = ui->pushButton->text();
    
    QFont curFont = ui->label->font();
    curFont.setPointSize(10);
    ui->label->setFont(curFont);
    
}

MainWindow::~MainWindow()
{
    delete ui;
}

