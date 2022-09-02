#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <fstream>
using namespace std;
int main() {
    string nomDuFichier;
    cout << "Entrer le nom du fichier à lire : ";
    cin >> nomDuFichier;
    //Création du flux en lecture sur le fichier
    ifstream leFichier(nomDuFichier.c_str()) ; // c_str() transforme string en char*
    if (!leFichier .is_open())
        cerr << "Erreur lors de l'ouverture du fichier" << endl;
    else
    {
        string pays;
        int nbOr;
        int nbArgent;
        int nbBronze;

        ofstream monFlux("../Medailles/resulat.txt");
        if (!monFlux .is_open())
            cerr << "Erreur lors de l'ouverture du fichier" << endl;
            else {
            monFlux << "+" << setfill('-') <<setw(18) << "+" <<setw(9) << "+" <<setw(9) << "+" <<setw(9) << "+" <<setfill(' ') <<endl ;
        do
        {
            leFichier >> pays >> nbOr >> nbArgent >> nbBronze;
            if (leFichier.good())//Si les valeurs ont bien été lues
            {
                monFlux << "|" <<setw(17)  <<left <<pays  << "|"
                     << setw(7) <<right <<nbOr << " "<< "|"
                     << setw(7) <<right <<nbArgent << " "<< "|"
                     << setw(7) <<right <<nbBronze << " "<< "|" << endl ;
            }
        } while (!leFichier.eof());
        monFlux << "+" << setfill('-') <<setw(18) << "+" <<setw(9) << "+" <<setw(9) << "+" <<setw(9) << "+" <<setfill(' ') <<endl ;
        }
    }
    return 0;
}
