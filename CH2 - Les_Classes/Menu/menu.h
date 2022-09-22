#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <algorithm>

using namespace std;

class Menu
{
private:
    string nom;
    string * options;
    int nbOptions;
    unsigned long longueurMax;
public:
    Menu(const string &_nom);
    ~Menu();
    int Afficher();
    static void AttendreAppuiTouche();
};

#endif // MENU_H
