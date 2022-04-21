#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>

#include "pkw.cpp"
#include "getshort.h"



int main()
{
    short ch;
    bool exit_loop;
    float tanken_temp;
    FILE *file_in;
    FILE *file_out;

    pkw myCar(150000, 75.4f, 12.2f, 80.0f);
    file_in = fopen("myCar.bin", "w");
    if (file_in != NULL){
        rewind(file_in);
        fread(&myCar, sizeof(class pkw), 1, file_in);
        fclose(file_in);
    }


    while (true){
        system("cls");
        printf("\n Bordcomputer");
        printf("\n =============");
        printf("\n 1 - Fahren");
        printf("\n 2 - Tanken");
        printf("\n 3 - Statistik");
        printf("\n 0 - Ende");
        printf("\n =============");
        printf("\n Ihre Wahl? ");

        ch = getch();



        switch (ch)
        {
        case '0':
            exit_loop = true;
            break;
        
        case '1':
            system("cls");
            printf("==== Fahren ====\n");
            printf("Wieviele km wollen sie fahren? (Restreichweite: %d km) ", myCar.get_reichweite());
            if (myCar.fahren(getshort(5)) == -1){
                printf("\nSoweit koennen Sie nicht fahren! Druecken Sie eine beliebige Taste um fortzufahren.");
                getch();
                break;
            }
            break;
        
        case '2':
            system("cls");
            printf("==== Tanken ====\n");
            printf("Wieviele Liter wollen sie tanken? (Freies Tankvolumen: %6.2f l) ", myCar.get_tankVolumen() - myCar.get_tankInhalt());
            scanf("%f", &tanken_temp);
            if (myCar.tanken(tanken_temp) == -1){
                printf("Soviel koennen Sie nicht tanken! Druecken Sie eine beliebige Taste um fortzufahren.");
                getch();
                break;
            }
            break;

        case '3':
            system("cls");
            printf("==== Ihre Daten ====");
            printf("\nKilometerstand: %8d km", myCar.get_kmStand());
            printf("\nTankinhalt:       %6.2f l", myCar.get_tankInhalt());
            printf("\nReichweite:         %4d km", myCar.get_reichweite());
            printf("\nVerbrauch:         %5.2f l/100km", myCar.get_verbrauch());
            printf("\nTankvolumen:       %5.2f l", myCar.get_tankInhalt());
            printf("\nDruecken Sie eine beliebige Taste um fortzufahren.\n");
            getch();

            break;

        default:
            system("cls");
            printf("%c ist nicht definiert. Bitte eine andere Option auswaehlen. Druecken Sie eine beliebige Taste um fortzufahren.\n", ch);
            getch();
            break;
        }

        //speichern des objekts
        file_out = fopen("myCar.bin", "w");
        //rewind(file_out);
        fwrite(&myCar, sizeof(class pkw), 1, file_out);
        fclose(file_out);

        if (exit_loop){
            printf("Servus!");
            break;
        }
    }

    return 0;
}