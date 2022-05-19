#include "konto.cpp"
#include "guthabenkonto.cpp"
#include "darlehenskonto.cpp"
#include "girokonto.cpp"
#include "sparkonto.cpp"
#include "geldmarktkonto.h"

#include "getfloat.h"
#include "getshort.h"

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#include <iostream>

using namespace std;

int menu();

int main()
{
    girokonto MeinGk(7463.47f, 0.50f, 12.50f, 3000.00f);
    sparkonto MeinSk();
    geldmarktkonto MeinGmk();


    menu();

    getch();

}

int menu()
{
    system("cls");
    cout << endl;
    cout << " Kontenverwaltung" << endl;
    cout << " ================" << endl;
    cout << endl;
    cout << " F1 - Kontenuebersicht" << endl;
    cout << " F2 - Einzahlung auf das Girokonto" << endl;
    cout << " F3 - Auszahlung vom Girokonto" << endl;
    cout << " F4 - Umbuchung auf das Sparkonto" << endl;
    cout << " F5 - Umbuchung auf das Tagesgeldkonto" << endl;
    //cout << " F6 - ..." << endl;
    cout << " ESC - ENDE" << endl;
    cout << endl;
    cout << " Ihre Wahl? ";

    
    
}