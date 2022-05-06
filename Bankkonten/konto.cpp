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
}

int konto::einzahlung(float betrag)
{
    mKontostand += betrag;
}