#ifndef BARRE_H
#define BARRE_H


#include <iostream>
#include <string>
#include <math.h>
using namespace std;

class Barre
{
public:
    Barre(const string _nom, const float _densite, const string _reference, const int _longueur);
    ~Barre();
    int AfficherCaracteristiques();
protected:
    string nom;
    float densite;
    string reference;
    int longueur;
};

#endif // BARRE_H
