#include "girokonto.h"

girokonto::girokonto(float initKontostand, float initHabenzins, float initSollzins):konto(initKontostand)
{
    mHabenzins = initHabenzins;
    mSollzins = initSollzins;
}

girokonto::~girokonto()
{
}

float girokonto::getHabenzins()
{
    return mHabenzins;
}

float girokonto::getSollzins()
{
    return mSollzins;
}

int girokonto::setHabenzins(float tempHabenzins)
{
    mHabenzins = tempHabenzins;
    return 0;
}

int girokonto::setSollzins(float tempSollzins)
{
    mHabenzins = tempSollzins;
    return 0;
}

int girokonto::auszahlung(float betrag)
{
    mKontostand -= betrag;
    return 0;

}