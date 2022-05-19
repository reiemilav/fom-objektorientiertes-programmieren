#include "girokonto.cpp"
#include "guthabenkonto.cpp"
#include "konto.cpp"
#include "darlehenskonto.cpp"

#include "getfloat.h"
#include "getshort.h"

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#include <iostream>

using namespace std;


int main()
{
    char ch;

    girokonto MeinGiro(7463.47f, 0.50f, 12.50f, 3000.00f);


    system("cls");
    cout << endl;
    cout << " Kontenverwaltung" << endl;
    cout << " ================" << endl;
    cout << endl;
    cout << " 1 - Kontenuebersicht" << endl;
    cout << " 2 - Einzahlung auf das Girokonto" << endl;
    cout << " 3 - Auszahlung vom Girokonto" << endl;
    cout << " 4 - Umbuchung auf das Sparkonto" << endl;
    cout << " 5 - Umbuchung auf das Tagesgeldkonto" << endl;
    //cout << " 6 - ..." << endl;
    cout << " ESC - ENDE" << endl;
    cout << endl;
    cout << " Ihre Wahl? ";
    
    ch = getch();

    cout << ch;


}