#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_chefSpecial_Button_clicked();

    void on_todaySoup_Button_clicked();

    void on_dailyFish_Button_clicked();

    void on_exit_Button_clicked();

private:

    Ui::MainWindow *ui;
    QPixmap imageSteak;
    QPixmap imageSoup;
    QPixmap imageFish;
    QPixmap imageDiner;
    void loadImage();

};

#endif // MAINWINDOW_H
