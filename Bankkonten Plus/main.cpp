#include "konto.cpp"
#include "guthabenkonto.cpp"
#include "darlehenskonto.cpp"
#include "girokonto.cpp"
#include "sparkonto.cpp"
#include "geldmarktkonto.cpp"

#include "getfloat.h"
#include "getshort.h"

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

#include <iostream>
#include <iomanip>

#define vcESC 0x1b
#define vcF1 0x3b
#define vcF2 0x3c
#define vcF3 0x3d
#define vcF4 0x3e
#define vcF5 0x3f
#define vcF6 0x40


using namespace std;

int menu();

int main()
{
    FILE *file_in;
    FILE *file_out;


    int betrag = 0;
    int param = 0;
    char ch;  

    girokonto MeinGiro(7463.47f, 0.00f, 12.50f, 3000.00f);
    sparkonto MeinSk(5000.00f, 0.50f, 12);
    geldmarktkonto MeinGmk(4563.00f, 0.30f);
    dahrlehenskonto MeinD(2500000.00f, 1.75f, 15, 15000.00f);

    if (file_in != NULL){
        fopen_s(&file_in, "konten.bin", "r");
        fread(&MeinGiro, sizeof(girokonto), 1, file_in);
        fread(&MeinSk, sizeof(sparkonto), 1, file_in);
        fread(&MeinGmk, sizeof(geldmarktkonto), 1, file_in);
        fread(&MeinD, sizeof(dahrlehenskonto), 1, file_in);
        fclose(file_in);
    }


    menu();

    while ((ch = getch()) != vcESC ){   
        if (param == 1){
            switch (ch)
            {
                case vcF1:
                system("cls");
                cout << "Kontenuebersicht" << endl;
                cout << " \nGuthabenkonten:" << endl;
                cout << "   Girokonto: "  << setprecision(2) << fixed << MeinGiro.getKontostand() << " EUR" << endl;
                cout << "   Sparkonto: "  << setprecision(2) << fixed << MeinSk.getKontostand() << " EUR" << endl;
                cout << "   Geldmarktkonto: " << setprecision(2) << fixed <<  MeinGmk.getKontostand() << " EUR" << endl;
                cout << " \nDahrlehenskonto:" << endl;
                cout << "   Dahrlehenskonto: " << setprecision(2) << fixed << MeinD.getKontostand() << " EUR" << endl;
                getch();
                break;

            case vcF2:
                system("cls");

                cout << "Einzahlung auf das Girokonto" << endl;
                cout << "Einzahlungsbetrag (EUR): ";
                betrag = getfloat(4, 2);
                cout << endl;
                MeinGiro.einzahlung(betrag);
                system("cls");
                cout << "Transaktion abgeschlossen" << endl;
                getch();
                break;

            case vcF3:
                betrag = 0;
                cout << "Auszahlung vom Girokonto" << endl;
                cout << "Auszahlugsbetrag (EUR):";
                betrag = getfloat(4, 2);
                MeinGiro.einzahlung(betrag);
                system("cls");
                cout << "Transaktion abgeschlossen" << endl;
                getch();
                break;

            case vcF4:
                printf("f4");
                break;

            case vcF5:
                printf("f5");
                break;

            case vcF6:
                printf("f6");
                break;
            
            default:
                break;
            }
            param = 0;
            menu();
            

        }
        
        if (ch == 0){
            param = 1; 
        }
    }

    fopen_s(&file_out, "konten.bin", "w");
    fwrite(&MeinGiro, sizeof(girokonto), 1, file_out);
    fwrite(&MeinSk, sizeof(sparkonto), 1, file_out);
    fwrite(&MeinGmk, sizeof(geldmarktkonto), 1, file_out);
    fwrite(&MeinD, sizeof(dahrlehenskonto), 1, file_out);
    fclose(file_out);

}




int menu()
{
    system("cls");
    cout << endl;
    cout << "Kontenverwaltung" << endl;
    cout << "================" << endl;
    cout << endl;
    cout << "F1 - Kontenuebersicht" << endl;
    cout << "F2 - Einzahlung auf das Girokonto" << endl;
    cout << "F3 - Auszahlung vom Girokonto" << endl;
    cout << "F4 - Umbuchung auf das Sparkonto" << endl;
    cout << "F5 - Umbuchung auf das Geldmarktkonto" << endl;
    //cout << "F6 - ..." << endl;
    cout << "ESC - ENDE" << endl;
    cout << endl;
    cout << "Ihre Wahl? ";
}