#include "barrecarree.h"

BarreCarree::BarreCarree(const string _nom, const float _densite, const string _reference, const int _longueur, const int _largeur):
    Barre(_nom,_densite,_reference,_longueur),
    largeur(_largeur)
{

}

int BarreCarree::CalculerSection()
{
    sectionCarree = pow(largeur,2);
    return sectionCarree;
}

int BarreCarree::CalculerMasse()
{
    float masse = longueur * sectionCarree * (densite/100);
    return masse;
}
