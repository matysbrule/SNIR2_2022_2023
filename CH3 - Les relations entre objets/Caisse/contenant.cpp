#include "contenant.h"

using namespace std;

Contenant::Contenant():
    largeur(0),
    hauteur(0),
    profondeur(0)
{

}

Contenant::Contenant(const int _largeur, const int _hauteur, const int _profondeur):
    largeur(_largeur),
    hauteur(_hauteur),
    profondeur(_profondeur)
{
    cout << endl << "Constructeur de la classe Contenant" << endl;
}

Contenant::~Contenant()
{
    cout << "Destructeur de Contenant" << endl << endl;
}

int Contenant::CalculerVolume()
{
    return largeur * hauteur * profondeur;
}

