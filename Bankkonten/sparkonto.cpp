#include "sparkonto.h"

sparkonto::sparkonto(float initKontostand, float initHabenzins):konto(initKontostand)
{
    mHabenzins = initHabenzins;
}

sparkonto::~sparkonto()
{
}

float sparkonto::getHabenzins()
{
    return mHabenzins;
}


int sparkonto::setHabenzins(float tempHabenzins)
{
    mHabenzins = tempHabenzins;
    return 0;
}


int sparkonto::auszahlung(float betrag)
{
    mKontostand =- betrag;
    return 0;
}