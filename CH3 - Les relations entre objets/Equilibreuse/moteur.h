#ifndef MOTEUR_H
#define MOTEUR_H

class MccUldaq;

class Moteur
{
private:
    int numCanal ;
    double tensionMaxCommande ;
    const MccUldaq & laCarte; // faire pour l'agrégation l’attribut est constant pour pouvoir passer les
    // paramètres

public:
    Moteur(const MccUldaq & _laCarte, const int _numCanal, const double _tensionMaxCommande);
   //~Moteur();
    void FixerConsigne(const int _laConsigne);
};

#endif // MOTEUR_H
