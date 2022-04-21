#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>

#include "pkw.cpp"
#include "getshort.h"



int main()
{
    short answer;
    bool exit_loop;
    float tanken_temp;

    pkw myCar(150000, 75.4f, 12.2f, 80.0f);

    while (true){
        system("cls");
        printf("Bordcomputer - Menu\n0 - ENDE\n1 - Fahren\n2 - Tanken\n3 - Daten anzeigen\n");
        answer = getch();



        switch (answer)
        {
        case '0':
            exit_loop = true;
            break;
        
        case '1':
            system("cls");
            printf("Fahren:\n");
            printf("Wieviele km wollen sie fahren? (Restreichweite: %d km) ", myCar.get_reichweite());
            if (myCar.fahren(getshort(5)) != 0){
                printf("\nSoweit koennen Sie nicht fahren! Druecken Sie eine beliebige Taste um fortzufahren.");
                getch();
                break;
            }
            break;
        
        case '2':
            system("cls");
            printf("Tanken\n");
            printf("Wieviele Liter wollen sie tanken? ");
            scanf("%f", &tanken_temp);
            if (myCar.tanken(tanken_temp) != 0){
                printf("Soviel koennen Sie nicht tanken! Druecken Sie eine beliebige Taste um fortzufahren.");
                getch();
                break;
            }
            break;

        case '3':
            system("cls");
            printf("Ihre Daten:\nKilometerstand: %8d km\nTankinhalt:       %6.2f l\nReichweite:         %4d km\nVerbrauch:         %5.2f l/100km\n", myCar.get_kmStand(), myCar.get_tankInhalt(), myCar.get_reichweite(), myCar.get_verbrauch());
            printf("\nDruecken Sie eine beliebige Taste um fortzufahren.\n");
            getch();

            break;

        default:
            printf("%c ist nicht definiert. Bitte eine andere Option auswaehlen. Druecken Sie eine beliebige Taste um fortzufahren.\n", answer);
            getch();
            break;
        }

        if (exit_loop){
            break;
        }
    }

    return 0;
}