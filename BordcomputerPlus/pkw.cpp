#include "pkw.h"



pkw::pkw(int init_kmStand, float init_tankInhalt, float init_verbrauch, float init_tankVolumen)
{
    kmStand = init_kmStand;
    tankInhalt = init_tankInhalt;
    tankVolumen = init_tankVolumen;
    verbrauch = init_verbrauch;
}


pkw::~pkw()
{
}

short pkw::fahren(int km)
{
    short result;

    if (tankInhalt < km * verbrauch / 100){
        result = -1;
    } else {
        kmStand += km;
        tankInhalt -= km * verbrauch / 100;
        result = 0;
    }
    
    return result;
}

short pkw::tanken(float liter)
{   
    short result;

    if (tankInhalt + liter > tankVolumen){
        result = -1;
    } else {
        tankInhalt += liter;
        result = 0;
    }
    return result;
}

int pkw::get_kmStand()
{
    return kmStand;
}

float pkw::get_tankInhalt()
{
    return tankInhalt;
}

int pkw::get_reichweite()
{
    return tankInhalt / verbrauch * 100;
}

float pkw::get_verbrauch()
{
    return verbrauch;
}

float pkw::get_tankVolumen()
{
    return tankVolumen;
}