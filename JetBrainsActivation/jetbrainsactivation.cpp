#include "jetbrainsactivation.h"
#include "./ui_jetbrainsactivation.h"
#include <stdlib.h>

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


void JetBrainsActivation::on_CLion_clicked()
{
    system("start CLion.vbs");
}


void JetBrainsActivation::on_DataGrip_clicked()
{
    system("start /ActivationCode/");
}


void JetBrainsActivation::on_GoLand_clicked()
{
    system("start /ActivationCode/");
}


void JetBrainsActivation::on_IDEA_clicked()
{
    system("start /ActivationCode/");
}


void JetBrainsActivation::on_PhpStorm_clicked()
{
    system("start /ActivationCode/");
}


void JetBrainsActivation::on_PyCharm_clicked()
{
    system("start /ActivationCode/");
}


void JetBrainsActivation::on_WebStorm_clicked()
{
    system("start /ActivationCode/");
}

