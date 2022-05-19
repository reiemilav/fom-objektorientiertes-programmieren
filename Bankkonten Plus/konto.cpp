#include "konto.h"


// konto::konto()
// {
// }

konto::konto(float initKontostand)
{
    kontostand = initKontostand;
}

// konto::~konto()
// {
// }

float konto::getKontostand()
{
    return kontostand;
}

int konto::einzahlung(float betrag)
{
    kontostand += betrag;
    return 0;
}