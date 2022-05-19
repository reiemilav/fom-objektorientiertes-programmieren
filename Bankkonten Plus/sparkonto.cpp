#include "sparkonto.h"

sparkonto::sparkonto(float initKontostand, float initHabenzins, short initFrist):guthabenkonto(initKontostand, initHabenzins)
{
    frist = initFrist;
}

short sparkonto::getFrist()
{
    return frist;
}

int sparkonto::setFrist(short tempFrist)
{
    frist = tempFrist;
    return 0;
}