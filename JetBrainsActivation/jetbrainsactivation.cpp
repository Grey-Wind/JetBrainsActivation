#include "jetbrainsactivation.h"
#include "./ui_jetbrainsactivation.h"

JetBrainsActivation::JetBrainsActivation(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::JetBrainsActivation)
{
    ui->setupUi(this);
}

JetBrainsActivation::~JetBrainsActivation()
{
    delete ui;
}

