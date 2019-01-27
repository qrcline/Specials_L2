#include "mainwindow.h"
#include "ui_mainwindow.h"

#include<iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    loadImage();
    ui->picture->setPixmap(imageDiner);
}

void MainWindow::loadImage()
{
    QString steakFilename =":/Pictures/HB_01_tomahawk_01.jpg";
    QString soupFilename =":/Pictures/clamChowder.jpg";
    QString fishFilename =":/Pictures/Sesame-Crusted-Ahi-Tuna-with-Orange-Teriyaki-Sauce-500.jpg";
    QString dinerFilename =":/Pictures/diner.jpg";
    std::cout<<"load image"<<std::endl;

    if(imageSteak.load(steakFilename))
    {
        std::cout<<"Steak loaded ok"<<std::endl;
        imageSteak=imageSteak.scaled(ui->picture->size(),Qt::KeepAspectRatioByExpanding);
    }
    else {
        std::cout<<"Image Load not ok"<<std::endl;
    }

    if(imageSoup.load(soupFilename))
    {
        std::cout<<"Soup loaded ok"<<std::endl;
        imageSoup=imageSoup.scaled(ui->picture->size(),Qt::KeepAspectRatioByExpanding);
    }
    else {
        std::cout<<"Image Load not ok"<<std::endl;
    }

    if(imageFish.load(fishFilename))
    {
        std::cout<<"Fish loaded ok"<<std::endl;
        imageFish=imageFish.scaled(ui->picture->size(),Qt::KeepAspectRatioByExpanding);
    }
    else {
        std::cout<<"Image Load not ok"<<std::endl;
    }
    if(imageDiner.load(dinerFilename))
    {
        std::cout<<"Fish loaded ok"<<std::endl;
        imageDiner=imageDiner.scaled(ui->picture->size(),Qt::KeepAspectRatioByExpanding);
    }
    else {
        std::cout<<"Image Load not ok"<<std::endl;
    }
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_chefSpecial_Button_clicked()
{
    ui->picture->setPixmap(imageSteak);
    //Sets decription
     std::cout<<"Button Clicked"<<std::endl;
     QString message="Tomahawk Steak $35";
     ui->namePrice_Label->setText(message);

     //Sets background color
     QPalette palette=ui->namePrice_Label->palette();
     palette.setColor(QPalette::Window,Qt::black);
     palette.setColor(QPalette::WindowText,Qt::white);
     ui->namePrice_Label->setAutoFillBackground(true);
     ui->namePrice_Label->setPalette(palette);
}

void MainWindow::on_todaySoup_Button_clicked()
{
    ui->picture->setPixmap(imageSoup);
     std::cout<<"Button Clicked"<<std::endl;

     //Sets decription
      std::cout<<"Button Clicked"<<std::endl;
      QString message="Clam Chowder $5";
      ui->namePrice_Label->setText(message);

      //Sets background color
      QPalette palette=ui->namePrice_Label->palette();
      palette.setColor(QPalette::Window,Qt::black);
      palette.setColor(QPalette::WindowText,Qt::white);
      ui->namePrice_Label->setAutoFillBackground(true);
      ui->namePrice_Label->setPalette(palette);
}

void MainWindow::on_dailyFish_Button_clicked()
{
    ui->picture->setPixmap(imageFish);
    std::cout<<"Button Clicked"<<std::endl;

    //Sets decription
     std::cout<<"Button Clicked"<<std::endl;
     QString message="Sesame Crusted Ahi Tuna $30";
     ui->namePrice_Label->setText(message);

     //Sets background color
     QPalette palette=ui->namePrice_Label->palette();
     palette.setColor(QPalette::Window,Qt::black);
     palette.setColor(QPalette::WindowText,Qt::white);
     ui->namePrice_Label->setAutoFillBackground(true);
     ui->namePrice_Label->setPalette(palette);
}

void MainWindow::on_exit_Button_clicked()
{
    QApplication::quit();
}
