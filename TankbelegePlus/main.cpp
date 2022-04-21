#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

#define vcRETURN 0x0d
#define vcBACK 0x08
#define vcBELL 0x07


long getlong(short);
short getshort(short);

int main()
{
    short answer;
    bool exit_loop;

    //statistik
    float total_price_of_fuel;
    float average_fuel_milage;
    long total_distance_driven;
    float total_fuel_consumption;


    long milage_start;

    //belege
    char date[100][11];
    float fuel_amount[100];
    long milage[100];
    float price[100];

    //index belege
    short index = 0;

    while (true){
        system("cls");
        printf("TankbelegePlus - Menu\n0 - ENDE\n1 - Neuer Tankbeleg\n2 - Belegliste\n3 - Statistik\n");
        answer = getch();



        switch (answer)
        {
        case '0':
            exit_loop = true;
            break;
        
        case '1':
            system("cls");
            printf("Neuer Tankbeleg:\nDatum: ");
            scanf("%s", date[index]);
            printf("Menge in Liter: ");
            scanf("%f", &fuel_amount[index]);
            printf("Kilometerstand: ");
            scanf("%d", &milage[index]);
            printf("Betrag (brutto) in Euro: ");
            scanf("%f", &price[index]);

            index++;

            break;
        
        case '2':
            system("cls");
            printf("Uebersicht der eingegebenen Tankbelege\n");
            printf("     Datum     Menge  Kilometerstand      Betrag\n");

            for (short i = 0; i < index; i++)
            {
                printf("%s  %6.2f l     %8d km  %6.2f EUR\n", date[i], fuel_amount[i], milage[i], price[i]);
            }

            printf("Druecken Sie eine beliebige Taste um zum Hauptmenu zurueckzukehren.");
            getch();

            break;

        case '3':
            system("cls");
            printf("Bitte geben sie den Anfangskilometerstand ein: ");
            milage_start = getlong(8);
            
            system("cls");

            total_price_of_fuel = 0;
            average_fuel_milage = 0;
            total_distance_driven = 0;
            total_fuel_consumption = 0;


            for (short i = 0; i < index; i++)
            {
                total_price_of_fuel += price[i];
                total_fuel_consumption += fuel_amount[i];

            }

            total_distance_driven = milage[index - 1] - milage_start;
            average_fuel_milage = total_fuel_consumption / total_distance_driven * 100;

            printf("\nDurchschnitt: %5.2f l/100km\n", average_fuel_milage);
            printf("Verbrauchter Kraftstoff %.2f l\n", total_fuel_consumption);
            printf("Ausgaben fuer Kraftstoff %.2f EUR\n", total_price_of_fuel);
            printf("Gefahrene Strecke %d km\n\n", total_distance_driven);
            
            printf("Druecken Sie eine beliebige Taste um zum Hauptmenu zurueckzukehren.");
            getch();

            break;

        default:
            printf("%c ist nicht definiert. Bitte eine andere Option auswählen. Press any key to continue.\n", answer);
            getch();
            break;
        }

        if (exit_loop){
            break;
        }
    }

    return 0;
}



long getlong(short n) {
    // Variablendefinition
    char ch;
    long zahl = 0;
    short counter = 0;
    // Eingabeprüfung

    if (n > 9) n = 9;

    while ((ch = _getch()) != vcRETURN)
    {
        if (ch >= '0' && ch <= '9' && counter < n)
        {
            _putch(ch);
            zahl = zahl * 10 + (ch - '0');
            counter += 1;
        }
        else if (ch == vcBACK && counter > 0)
        {
            _putch(vcBACK);
            _putch(32);
            _putch(vcBACK);
            zahl = zahl / 10;
            counter -= 1;
        }
        else if (ch == vcBACK && counter == 0)
        {
            _putch(vcBELL);
        }
        
    }

    return zahl;
}