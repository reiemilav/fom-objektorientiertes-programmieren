#include "konto.h"

class geldmarktkonto : konto
{
private:
    float mHabenzins;

public:
    float getHabenzins();
    int setHabenzins(float);
    int auszahlung(float);
};