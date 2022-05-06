#include "konto.h"

class tagesgeldkonto : public konto 
{
private:
    float mHabenzins;

public:
    tagesgeldkonto(float, float);
    ~tagesgeldkonto();

    float getHabenzins();
    int setHabenzins(float);
    int auszahlung(float);
};