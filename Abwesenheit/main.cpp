#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<conio.h>


#include "mitarbeiter.cpp"

int main(){
    char ch;
    bool exit_loop;
    mitarbeiter sepp(0, 0, 0, 0);

    //menü
    printf("==== Abwesenheitsinformationssystem ====");
    printf(" 1 - ");
    printf(" 2 - Neue Abwesenheit eintragen");
    printf(" 0 - Verlassen");

    ch = getch();

    while (true)
    {
        switch (ch)
        {
        case '1':

            break;
        
        case '2':
            /* code */
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