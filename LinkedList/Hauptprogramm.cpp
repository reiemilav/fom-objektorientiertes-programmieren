#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

#include "DList.h"

#define vcESC 0x1b
#define vcF1 0x3b
#define vcF2 0x3c
#define vcF3 0x3d

void menue(void);

int main()
{
    /* Variablendeklaration */
    char ch;
    int value;
    int param;

    /* Initialisierung */
    param = 0;

    /* Liste anlegen */
    DList *List = new DList();

    /* Menueaufruf */
    menue();

    /* Menuesteuerung */
    while ((ch = _getch()) != vcESC)
    {
        if (param == 1)
        {
           if (ch == vcF1)
           {
               system("cls");
               printf("\n Zahl: ");
               scanf("%d", &value);

               List->InsertNode(value);
           }
           else if (ch == vcF2)
           {
                system("cls");

                List->ShowList();

                _getch();
           }
           else if (ch == vcF3)
           {
               
           }
           menue();
           param = 0;
        }
        else if (ch == NULL)
        {
            param = 1;
        }    
    }
    

    return 0;
}

void menue()
{
    system("cls");
    printf("\n Doppelt verkettete Liste");
    printf("\n ========================");
    printf("\n F1  - Neue Zahl");
    printf("\n F2  - Liste ausgeben");
    printf("\n F3  - Liste sortieren");
    printf("\n ESC - ENDE");
    printf("\n");
    printf("\n Ihre Wahl?");

}