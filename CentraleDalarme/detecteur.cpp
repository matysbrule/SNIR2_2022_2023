#include "detecteur.h"
#include "ui_detecteur.h"
#include <unistd.h>
#include <QWidget>
#include <QTimer>

Detecteur::Detecteur(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Detecteur)
{
    ui->setupUi(this);

}

Detecteur::~Detecteur()
{
    delete ui;
}
