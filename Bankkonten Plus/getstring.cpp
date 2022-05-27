#include<stdio.h>
#include<conio.h>

#define vcRETURN 0x0d

void getstring(char *);

int main()
{
    char ort[20];

    printf("\n Ort: ");
    getstring(ort);

    printf("\n Ausgabe: %s", ort);

    _getch();

    return 0;
}

void getstring(char *pt)
{
    /* Variablendeklaration */
    char ch;
    char *pt1;

    /* Startadresse merken */
    pt1 = pt;

    /* Eingabepruefung */
    while ((ch=_getch()) != vcRETURN)
    {
        if (ch >= 'a' && ch <= 'z')
        {
            *pt = ch;
            _putch(*pt);
            pt++;
        }
        
    }
    
}