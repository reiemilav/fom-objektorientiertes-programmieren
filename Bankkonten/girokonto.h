#include "konto.h"

class girokonto : konto
{
private:
    float mHabenzins;
    float mSollzins;

public:
    girokonto(/* args */);
    ~girokonto();

    float getHabenzins();
    float getSollzins();
    int setHabenzins(float);
    int setSollzins(float);
    int auszahlung(float);
};
