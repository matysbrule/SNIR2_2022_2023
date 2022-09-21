#ifndef CONTENANT_H
#define CONTENANT_H
#include <iostream>


class Contenant
{
public:
    Contenant();
    Contenant(const int _largeur,const int _hauteur,const int _profondeur);
    ~Contenant();
    int CalculerVolume();
protected:
    int largeur;
    int hauteur;
    int profondeur;
};

#endif // CONTENANT_H
