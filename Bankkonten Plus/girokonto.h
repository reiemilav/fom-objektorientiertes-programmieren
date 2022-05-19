#ifndef GIK_H
#define GIK_H

#include "guthabenkonto.h"

class girokonto : public guthabenkonto
{
    private:
        float sollzins;
        float limit;
    
    public:
        girokonto(float, float, float, float);
        float getSollzins();
        float getLimit();
        int setSollzins(float);
        int setLimit(float);
        int auszahung(float);
};

#endif