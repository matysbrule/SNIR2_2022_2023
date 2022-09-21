#include "barrerectangle.h"

BarreRectangle::BarreRectangle(const string _nom, const float _densite, const string _reference, const int _longueur, const int _largeur):
    Barre(_nom,_densite,_reference,_longueur),
    largeur(_largeur)
{

}

int BarreRectangle::CalculerSection()
{
    sectionRectangle = largeur * longueur;
    return sectionRectangle;
}

int BarreRectangle::CalculerMasse()
{
    float masse = longueur * sectionRectangle * (densite/100);
    return masse;
}
