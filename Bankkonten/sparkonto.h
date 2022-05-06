#include "konto.h"

class sparkonto : konto
{
private:
    float mHabenzins;

public:
    sparkonto(float, float);
    ~sparkonto();

    float getHabenzins();
    int setHabenzins(float);
    int auszahlung(float);
};