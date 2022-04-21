#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>

#define vcRETURN 0x0d
#define vcBACK 0x08
#define vcBELL 0x07


short getshort(short);


class pkw
{
private:
    // Instanzvariablen (Eigenschaften des Pkw‘s)
    int kmStand;
    float tankInhalt;
    float tankVolumen;
    float verbrauch;

public:
    // Konstruktor
    pkw()
    {
        kmStand = 10;
        tankInhalt = 5.0f;
        tankVolumen = 60.0f;
        verbrauch = 6.4f;
    }

    pkw(int init_kmStand, float init_tankInhalt, float init_verbrauch, float init_tankVolumen)
    {
        kmStand = init_kmStand;
        tankInhalt = init_tankInhalt;
        tankVolumen = init_tankVolumen;
        verbrauch = init_verbrauch;
    }

    // Getter-Methoden (zum Abfragen von Daten)
    int get_kmStand()
    {
        return kmStand;
    }
    float get_tankInhalt()
    {
        return tankInhalt;
    }

    int get_reichweite()
    {
        return tankInhalt / verbrauch * 100;
    }

    float get_verbrauch()
    {
        return verbrauch;
    }

    // Setter-Methoden (machen hier keinen Sinn)
    // oder können Sie den Kilometerstand als auch den
    // Tankinhalt Ihres Autos auf einen beliebigen Wert setzen?
    
    // Allgemeine Methoden (was kann man mit einem Auto machen)
    short fahren(int km)
    {
        if (verbrauch * km / 100 > tankInhalt){
            return -1;
        } else {
            kmStand = kmStand + km;
            tankInhalt = tankInhalt - verbrauch * km / 100;
            return 0;
        }
    }

    short tanken(float liter)
    {   
        if (tankInhalt + liter > tankVolumen){
            return -1;
        } else {
            tankInhalt = tankInhalt + liter;
            return 0;
        }

    }
};


int main()
{
    short answer;
    bool exit_loop;
    float tanken_temp;

    pkw myCar(15000, 75.4f, 12.2f, 80.0f);

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
            printf("Wieviele km wollen sie fahren? ");
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




short getshort(short n) {
    // Variablendefinition
    char ch;
    short zahl = 0;
    short counter = 0;
    // Eingabeprüfung

    if (n > 4) n = 4;

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