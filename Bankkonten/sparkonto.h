#include "konto.h"

class sparkonto : public konto
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