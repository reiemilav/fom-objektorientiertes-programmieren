#include "konto.h"

konto::konto(float initKontostand)
{
    mKontostand = initKontostand;
}

konto::~konto()
{
}

float konto::getKontostand()
{
    return mKontostand;
}

int konto::einzahlung(float betrag)
{
    mKontostand += betrag;
    return 0;
}