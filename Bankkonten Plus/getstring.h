#include<stdio.h>
#include<conio.h>

#define vcRETURN 0x0d
#define vcBACK 0x08
#define STRLEN 8

void getstring(char *pt, int strlen)
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
        
        if (ch == vcBACK && pt > pt1)
        {
            _putch(vcBACK);
            _putch(' ');
            _putch(vcBACK);
            pt--;
        }
        
        if (ch >= 32 && ch <= 126 && pt - pt1 < strlen)
        {
            *pt = ch;
            _putch(*pt);
            pt++;
        }
    }
    printf("\nLength: %d", pt - pt1);
}