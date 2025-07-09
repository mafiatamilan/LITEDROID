#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QLabel>
#include <QPixmap>
#include <QIcon>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);





        // Set icon for Minimize button
    /*QIcon minimizeIcon("icons/minus.png");
    ui->minimizeButton->setIcon(minimizeIcon);
    ui->minimizeButton->setIconSize(QSize(30, 30));

        // Set icon for Close button
    QIcon closeIcon("icons/close.png");
    ui->closeButton->setIcon(closeIcon);
    ui->closeButton->setIconSize(QSize(30, 30));

        // Optional: connect the buttons to their actions
    connect(ui->minimizeButton, &QPushButton::clicked, this, &MainWindow::showMinimized);
    connect(ui->closeButton, &QPushButton::clicked, this, &MainWindow::close);*/

}

MainWindow::~MainWindow()
{
    delete ui;
}
