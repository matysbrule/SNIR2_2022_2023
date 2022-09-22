0#include <iostream>
#include "menu.h"

using namespace std;

enum CHOIX_MENU
{
    OPTION_1 = 1,
    OPTION_2 = 2,
    OPTION_3 = 3,
    OPTION_4 = 4,
    QUITTER = 5
};

int main()
{
    int choix;
    Menu menuChoix("../menu/menus/choix.txt");
    Menu menuFichier("../menu/menus/fichier.txt");
    Menu menuEditer("../menu/menus/editer.txt");
    Menu menuAfficher("../menu/menus/afficher.txt");
    Menu menuRechercher("../menu/menus/rechercher.txt");
    do
    {
        choix = leMenu.Afficher();
        switch (choix)
        {
        case OPTION_1:
            cout << "Vous avez choisi l'option n°1" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_2:
            cout << "Vous avez choisi l'option n°2" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_3:
            cout << "Vous avez choisi l'option n°3" << endl;
            Menu::AttendreAppuiTouche();
            break;
        case OPTION_4:
            cout << "Vous avez choisi l'option n°4" << endl;
            Menu::AttendreAppuiTouche();
            break;
        }
    } while(choix != QUITTER);
    return 0;
}
