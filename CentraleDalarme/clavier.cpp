#include "clavier.h"
#include "ui_clavier.h"
#include <QMessageBox>
#include <unistd.h>

Clavier::Clavier(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Clavier)
    , leDetecteur(nullptr)
{
    ui->setupUi(this);
    connect(ui->pushButton0,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_1,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
//    connect(ui->pushButton_2,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
//    connect(ui->pushButton_3,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_4,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_5,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_6,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_7,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_8,&QPushButton::clicked,this,&Clavier::TraiterChiffre);
    connect(ui->pushButton_9,&QPushButton::clicked,this,&Clavier::TraiterChiffre);

    connect(&timerLed,&QTimer::timeout,this,&Clavier::onTimerLed_timeout);
}

Clavier::~Clavier()
{
    delete ui;
}


void Clavier::on_pushButton_Marche_clicked()
{
//    QString texteBouton = ui->pushButton_Marche->text();
//    QMessageBox messageMarche;
//    if(ui->checkBoxLedRouge->checkState() == Qt::Unchecked){
//        ui->checkBoxLedRouge->setCheckState(Qt::Checked);
//    }
//    messageMarche.setText("J'ai appuyé sur sur la touche " + texteBouton);
//    messageMarche.exec();
    timerLed.start(500);
}

void Clavier::TraiterChiffre()
{
    QPushButton *pBouton = static_cast<QPushButton *>(sender());
    QString texteBouton = pBouton->text();
    QMessageBox messageChiffre;
    messageChiffre.setText("j'ai appuyé sur la touche " + texteBouton);
    messageChiffre.exec();
}


void Clavier::on_pushButton_Arret_clicked()
{
//    QString texteBouton = ui->pushButton_Arret->text();
//    QMessageBox messageArret;
//    if(ui->checkBoxLedRouge->checkState() == Qt::Checked){
//        ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
//    }
//    messageArret.setText("J'ai appuyé sur sur la touche " + texteBouton);
//    messageArret.exec();
    timerLed.stop();
    ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
}

void Clavier::onTimerLed_timeout()
{
    if(ui->checkBoxLedRouge->checkState() == Qt::Checked)
        ui->checkBoxLedRouge->setCheckState(Qt::Unchecked);
    else
        ui->checkBoxLedRouge->setCheckState(Qt::Checked);
}


void Clavier::on_pushButton_2_clicked()
{
    if(leDetecteur == nullptr)
        leDetecteur = new Detecteur;
    leDetecteur->show();


}


void Clavier::on_pushButton_3_clicked()
{
    if(leDetecteur != nullptr){
        leDetecteur->hide();
        delete leDetecteur;
        leDetecteur = nullptr;
    }
}
