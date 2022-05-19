#ifndef GHK_H
#define GHK_H

#include "konto.h"

class guthabenkonto : public konto
{
protected:
    float habenzins;

public:
    guthabenkonto(float, float);
    float getHabenzins();
    int setHabenzins(float);
    int auszahlung(float);

};
#endif
