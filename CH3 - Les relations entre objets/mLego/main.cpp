#include "barre.h"
#include "barreronde.h"
#include "barrerectangle.h"
#include "barrecarree.h"

int main()
{
    BarreRonde uneBarreRonde("Ronde",6,25,"#YB25FG",4, 7);
    cout << "Taille : " << uneBarreRonde.CalculerSection() << " mm2" << endl;
    cout << "Poids : " << uneBarreRonde.CalculerMasse() << " kg" << endl;
    BarreRectangle uneBarreRectangle("Rectangle",7,23,"#FT15HG",5,7);
    cout << "Taille : " << uneBarreRectangle.CalculerSection() << " mm2" << endl;
    cout << "Poids : " << uneBarreRectangle.CalculerMasse() << " kg" << endl;
    BarreCarree uneBarreCarree("Carrée",8,31,"#DG54DT",6,7);
    cout << "Taille : " << uneBarreCarree.CalculerSection() << " mm2" << endl;
    cout << "Poids : " << uneBarreCarree.CalculerMasse() << " kg" << endl;
    return 0;
}
