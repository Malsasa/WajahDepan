//Embrio Otodidak versi 2
//Akan dibuat satu bagian demi satu bagian secara terpisah-pisah, dimulai dari WajahDepan
//Program ini mulai dikerjakan pada Tuesday, January 07, 2014
#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QLabel      *labelJudul                   = new QLabel("<h2>Selamat Datang di Otodidak</h2>");

    QPushButton *tombolLinux                  = new QPushButton("LINUX");
    QPushButton *tombolModem                  = new QPushButton("MODEM");
    QPushButton *tombolAplikasi               = new QPushButton("APLIKASI");
    QPushButton *tombolMP3                    = new QPushButton("MP3");
    QPushButton *tombolSimulatorTerminal      = new QPushButton("SIMULATOR\nTERMINAL");

    QColor anu(Qt::GlobalColor black);

    labelJudul->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Fixed);
    labelJudul->setMinimumHeight(30);
    labelJudul->setStyleSheet("QLabel { background-color : black; color : white; }");
    //sumber: http://stackoverflow.com/questions/2749798/qlabel-set-color-of-text-and-background
    //diperoleh pada Tuesday, January 07, 2014

    //default ukuran tombol-tombol
    tombolLinux->setMinimumSize(33,55);
    tombolModem->setMinimumSize(33,55);
    tombolAplikasi->setMinimumSize(33,55);
    tombolMP3->setMinimumSize(33,55);
    tombolSimulatorTerminal->setMinimumSize(33,55);

    //ukuran maksimal tombol-tombol jika jendela diperbesar
    tombolLinux->setMaximumSize(77,77);
    tombolModem->setMaximumSize(77,77);
    tombolAplikasi->setMaximumSize(77,77);
    tombolMP3->setMaximumSize(77,77);
    tombolSimulatorTerminal->setMaximumSize(77,77);

    tombolLinux->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    tombolModem->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    tombolAplikasi->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    tombolMP3->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
    tombolSimulatorTerminal->setSizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);

    //spesial untuk QLabel saja
//    labelJudul->setAlignment(Qt::AlignHCenter);
    labelJudul->setAlignment(Qt::AlignCenter);


    QGridLayout *layoutLamanUtama = new QGridLayout;
    QWidget *widgetInduk          = new QWidget;
    this->setCentralWidget(widgetInduk);

    layoutLamanUtama->addWidget(labelJudul, 1,1,1,5);
    layoutLamanUtama->addWidget(tombolLinux, 3,1,3,1);
    layoutLamanUtama->addWidget(tombolModem, 3,2,3,1);
    layoutLamanUtama->addWidget(tombolAplikasi, 3,3,3,1);
    layoutLamanUtama->addWidget(tombolMP3, 3,4,3,1);
    layoutLamanUtama->addWidget(tombolSimulatorTerminal, 3,5,3,1);

    widgetInduk->setLayout(layoutLamanUtama);
}

MainWindow::~MainWindow()
{
    delete ui;
}
