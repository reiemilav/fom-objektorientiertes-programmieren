#ifndef DLK_H
#define DLK_H
#include "konto.h"

class dahrlehenskonto : public konto
{
    private:
        float sollzins;
        short laufzeit;
        float sondertilgung;

    public:
        dahrlehenskonto(float, float, short, float);
        float getSollzins();
        short getLaufzeit();
        float getSondertilgung();

        int setSollzins(float);
        int setLaufzeit(short);
        int setSondertilgung(float);

};

#endif