#ifndef BARRERECTANGLE_H
#define BARRERECTANGLE_H

#include "barre.h"

class BarreRectangle : public Barre
{
public:
    BarreRectangle(const string _nom, const float _densite, const string _reference, const int _longueur, const int _largeur);
    int CalculerSection();
    int CalculerMasse();
protected:
    int largeur;
    float sectionRectangle;
};

#endif // BARRERECTANGLE_H
