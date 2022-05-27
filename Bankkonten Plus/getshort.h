#ifndef GETSTRING
#define GETSTRING

#include<conio.h>

#define vcRETURN 0x0d
#define vcBACK 0x08
#define vcBELL 0x07


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



#endif