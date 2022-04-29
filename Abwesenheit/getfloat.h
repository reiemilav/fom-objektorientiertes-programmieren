#include<conio.h>

#define vcRETURN 0x0d
#define vcBACK 0x08
#define vcBELL 0x07
#define vcCOMMA 0x4C


short getfloat(short v, short n) {
    // Variablendefinition
    char ch;
    float zahl = 0;
    short counter = 0;
    // Eingabeprüfung

    while ((ch = _getch()) != vcRETURN)
    {
        if (ch >= '0' && ch <= '9' && counter < v)
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