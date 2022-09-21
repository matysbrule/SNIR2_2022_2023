#include "barre.h"


Barre::Barre(const string _nom, const float _densite, const string _reference, const int _longueur):
    nom(_nom),
    densite(_densite),
    reference(_reference),
    longueur(_longueur)
{
    AfficherCaracteristiques();
}

Barre::~Barre()
{

}

int Barre::AfficherCaracteristiques()
{
    cout << endl << "Barre " << nom << " :" << endl;
    cout << "Densité : " << densite << " g/cm3" << endl;
    cout << "Référence : " << reference << endl;
    cout << "Longueur : " << longueur << " m" << endl;
    return 0;
}
