#include "konto.cpp"
#include "girokonto.cpp"
#include "tagesgeldkonto.cpp"
#include "sparkonto.cpp"

#include "getfloat.h"

#include <stdlib.h>
#include <stdio.h>
#include <conio.h>

int main()
{
    // float betrag;

    girokonto MeinGiro(1000.00f, 0.50f, 12.50f);
    sparkonto MeinSpar(25000.00f, 0.75f);
    tagesgeldkonto MeinGeldmarkt(100000.00f, 0.90f);

    printf("\nKontenuebersicht\n");
    printf("Girokonto:      %11.2f EUR\n", MeinGiro.getKontostand());
    printf("Sparkonto:      %11.2f EUR\n", MeinSpar.getKontostand());
    printf("Geldmarktkonto: %11.2f EUR\n", MeinGeldmarkt.getKontostand());

    printf("\nUmbuchung\n");
    printf("Umbuchungsbetrag: ");
    // betrag = getfloat(8, 2);
    // MeinGiro.auszahlung(betrag);
    // MeinSpar.einzahlung(betrag);

    // printf("\nKontenuebersicht\n");
    // printf("Girokonto:      %11.2f EUR\n", MeinGiro.getKontostand());
    // printf("Sparkonto:      %11.2f EUR\n", MeinSpar.getKontostand());
    // printf("Geldmarktkonto: %11.2f EUR\n", MeinGeldmarkt.getKontostand());


    getch();
}