#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->btnRun, SIGNAL(clicked()), SLOT(run()));
    qRegisterMetaType<Result>("Result");
}

void MainWindow::run() {
    BackgroundWorker * worker = new BackgroundWorker;
    connect(worker, SIGNAL(resultReady(Result)), SLOT(onResultReady(Result)));
    // Setup callback for cleanup when it finishes
    connect(worker, SIGNAL(finished()), worker, SLOT(deleteLater()));
    // Run, Forest, run!
    worker->start();
}

void MainWindow::onResultReady(Result res) {
    ui->lineResult->setText(QString::number(res, 16).toUpper());
}

MainWindow::~MainWindow()
{
    delete ui;
}
