#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>

#include "getshort.h"
#include "mitarbeiter.cpp"

int main(){
    float temp_value;

    char ch;
    bool exit_loop;
    mitarbeiter sepp(0, 0, 0, 0);


    while (true)
    {
        //menü
        system("cls");

        printf("==== Abwesenheitsinformationssystem ====\n");
        printf("== Aktuelle Abwesenheiten ==\n");
        printf(" Gleitzeit: %3.2f Tage\n", sepp.get_gleitzeit());
        printf(" Krankheit: %3.2f Tage\n", sepp.get_krankheit());
        printf(" Schulung:  %3.2f Tage\n", sepp.get_schulung());
        printf(" Urlaub:    %3.2f Tage\n", sepp.get_urlaub());
        printf("\n== Menu ==\n");
        printf(" 1 - Neue Gleitzeit\n");
        printf(" 2 - Neue Krankheit\n");
        printf(" 3 - Neue Schulung\n");
        printf(" 4 - Neuer Urlaub\n");
        printf(" 0 - Verlassen\n");



        ch = getch();

        system("cls");

        switch (ch)
        {
        case '1':
            printf("Gleitzeit - Wie lange war die Abwesenheit? ");
            temp_value = getshort(3);
            sepp.set_gleitzeit(sepp.get_gleitzeit() + temp_value);
            break;
        
        case '2':
            printf("Krankheit - Wie lange war die Abwesenheit? ");
            temp_value = getshort(3);
            sepp.set_krankheit(sepp.get_krankheit() + temp_value);
            break;

        case '3':
            printf("Schulung - Wie lange war die Abwesenheit? ");
            temp_value = getshort(3);
            sepp.set_schulung(sepp.get_schulung() + temp_value);
            break;

        case '4':
            printf("Schulung - Wie lange war die Abwesenheit? ");
            temp_value = getshort(3);
            sepp.set_urlaub(sepp.get_urlaub() + temp_value);
            break;

        case '0':
            exit_loop = true;
            break;


        default:
            printf("Diese Option ist nicht definiert! Drücken sie eine beliebige Taste um fortzufahren.");
            getch();
            break;
        
        }

        if (exit_loop){
            break;
        }

    }
    




    return 0;
}