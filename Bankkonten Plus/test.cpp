#include <stdio.h>
#include <conio.h>

int main()
{
    int ch;

    while ((ch = getch()) != 27)
    {
        printf("%c, %d\n", ch, ch);
    }
    


}