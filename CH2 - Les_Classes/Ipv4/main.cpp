#include <iostream>
#include "ipv4.h"

using namespace std;

void AfficherTableau(const unsigned char *tab);

int main()
{
    unsigned char adresse[4] = {192,168,1,1};
    unsigned char masque[4];
    unsigned char reseau[4];
    unsigned char diffusion[4];
    unsigned char premiereaddr[4];
    unsigned char derniereaddr[4];

            IPv4 uneAdresse(adresse,24);

    cout << "Adresse IPv4 : ";
    AfficherTableau(adresse);
    uneAdresse.ObtenirMasque(masque);
    cout << "Masque : ";
    AfficherTableau(masque);
    uneAdresse.ObtenirAdresseReseau(reseau);
    cout << "Réseau : ";
    AfficherTableau(reseau);
    uneAdresse.ObtenirAdresseDiffusion(diffusion);
    cout << "Diffusion : ";
    AfficherTableau(diffusion);
    cout << "Première Adresse : ";
        uneAdresse.ObtenirPremiereAdresse(premiereaddr);
        AfficherTableau(premiereaddr);
        cout << "Dernière Adresse : ";
            uneAdresse.ObtenirDerniereAdresse(derniereaddr);
            AfficherTableau(derniereaddr);

    return 0;
}

void AfficherTableau(const unsigned char *tab)
{
    for (int indice = 0; indice < 4; indice++) {
        cout << static_cast<int>(tab[indice]);
        if(indice<3)
            cout << ".";
    }
    cout << endl;
}
