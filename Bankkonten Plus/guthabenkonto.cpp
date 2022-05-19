#include "guthabenkonto.h"



guthabenkonto::guthabenkonto(float initKontostand, float initHabenzins):konto(initKontostand)
{
    habenzins = initHabenzins;
}


float guthabenkonto::getHabenzins()
{
    return habenzins;
}

int guthabenkonto::setHabenzins(float tempHabenzins)
{
    habenzins = tempHabenzins;
    return 0;
}

int guthabenkonto::auszahlung(float betrag)
{
    kontostand -= betrag;
    return 0;
}