#include "konto.h"

class girokonto : public konto
{
private:
    float mHabenzins;
    float mSollzins;

public:
    girokonto(float, float, float);
    ~girokonto();

    float getHabenzins();
    float getSollzins();
    int setHabenzins(float);
    int setSollzins(float);
    int auszahlung(float);
};
