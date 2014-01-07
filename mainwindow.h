#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QtGui>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private:
    QLabel      *labelJudul;

    QPushButton *tombolLinux;
    QPushButton *tombolModem;
    QPushButton *tombolAplikasi;
    QPushButton *tombolMP3;
    QPushButton *tombolSimulatorTerminal;

    QGridLayout *layoutLamanUtama;
    QWidget     *widgetInduk;
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
