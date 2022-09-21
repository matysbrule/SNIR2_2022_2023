#include "barreronde.h"

BarreRonde::BarreRonde(const string _nom, const float _densite, const string _reference, const int _longueur, const int _diametre):
    Barre(_nom,_densite,_reference,_longueur),
    diametre(_diametre)
{

}

int BarreRonde::CalculerSection()
{
    sectionRonde = M_PI * pow(diametre,2) / 4;
    return sectionRonde;
}

int BarreRonde::CalculerMasse()
{
    float masse = longueur * sectionRonde * (densite/100);
    return masse;
}
