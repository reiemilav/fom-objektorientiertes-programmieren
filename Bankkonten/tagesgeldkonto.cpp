#include "tagesgeldkonto.h"

tagesgeldkonto::tagesgeldkonto(float initKontostand, float initHabenzins):konto(initHabenzins)
{
    mHabenzins = initHabenzins;
}

tagesgeldkonto::~tagesgeldkonto()
{
}

float tagesgeldkonto::getHabenzins()
{
    return mHabenzins;
}


int tagesgeldkonto::setHabenzins(float tempHabenzins)
{
    mHabenzins = tempHabenzins;
    return 0;
}

int tagesgeldkonto::auszahlung(float betrag)
{
    mKontostand =- betrag;
    return 0;
}