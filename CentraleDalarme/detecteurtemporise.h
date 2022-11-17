#ifndef DETECTEURTEMPORISE_H
#define DETECTEURTEMPORISE_H

#include "detecteur.h"
#include <QTimer>

class DetecteurTemporise : public Detecteur
{
public:
    DetecteurTemporise();
    void onTimerAlarme_timeout();
private:
    QTimer timerAlarme;
};

#endif // DETECTEURTEMPORISE_H
