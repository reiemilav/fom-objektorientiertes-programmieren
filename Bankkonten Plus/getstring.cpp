#include<stdio.h>
#include<conio.h>

#define vcRETURN 0x0d
#define vcBACK 0x08

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
    while (ch=_getch())
    {
        if (ch == vcRETURN)
        {
            *pt = 0;
            break;
        }
        
        if (ch == vcBACK and pt != pt1)
        {
            _putch(vcBACK);
            _putch(' ');
            _putch(vcBACK);
            pt--;
        }
        
        if (ch >= 32 && ch <= 126)
        {
            *pt = ch;
            _putch(*pt);
            pt++;
        }
    }
}