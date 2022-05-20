#include "darlehenskonto.h"


dahrlehenskonto::dahrlehenskonto(float initKontostand, float initSollzins, short initLaufzeit, float initSondertilgung):konto(initKontostand)
{
    sollzins = initSollzins;
    initLaufzeit = initLaufzeit;
    sondertilgung = initSondertilgung;
}

float dahrlehenskonto::getSollzins(){
    return sollzins;
}

short dahrlehenskonto::getLaufzeit(){
    

}
float dahrlehenskonto::getSondertilgung(){

}

int dahrlehenskonto::setSollzins(float){

}

int dahrlehenskonto::setLaufzeit(short){

}

int dahrlehenskonto::setSondertilgung(float){

}

