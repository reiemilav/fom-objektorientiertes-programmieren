#include "konto.cpp"
#include "girokonto.cpp"
#include "tagesgeldkonto.cpp"
#include "sparkonto.cpp"

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    girokonto MeinGiro(1000.00f, 0.50f, 12.50f);
    sparkonto MeinSpar(25000.00f, 1.00f);
    sparkonto MeinSpar(100000.00f, 1.00f);

    getch();
}