#include "detecteurtemporise.h"
#include <QMessageBox>

DetecteurTemporise::DetecteurTemporise()
{
    connect(&timerAlarme,&QTimer::timeout,this,&DetecteurTemporise::onTimerAlarme_timeout);
}

void DetecteurTemporise::onTimerAlarme_timeout()
{
    QMessageBox messageAlarme;
    messageAlarme.setText("Un intrus a été détecté");
    messageAlarme.exec();
    timerAlarme.stop();
}

void Detecteur::on_pushbuttonIntrus_clicked()
{
    timerAlarme.start(500);
}
