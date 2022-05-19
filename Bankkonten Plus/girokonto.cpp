#include "girokonto.h"


girokonto::girokonto(float initKontostand, float initHabenzins, float initSollzins, float initLimit):guthabenkonto(initKontostand, initHabenzins)
{
    sollzins = initSollzins;
    limit = initLimit;
}

float girokonto::getSollzins(){
    return sollzins;
}

float girokonto::getLimit(){
    return limit;
}  

int girokonto::setSollzins(float tempSollzins){
    sollzins = tempSollzins;
    return 0;
}

int girokonto::setLimit(float tempLimit){
    limit = tempLimit;
    return 0;
}

int girokonto::auszahung(float betrag){
    if (betrag > kontostand + limit){
        return 1;
    } else {
        kontostand -= betrag;
        return 0;
    }
}