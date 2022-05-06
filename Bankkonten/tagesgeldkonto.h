#include "konto.h"

class tagesgeldkonto : konto 
{
private:
    float mHabenzins;

public:
    tagesgeldkonto();
    ~tagesgeldkonto();

    float getHabenzins();
    int setHabenzins(float);
    int auszahlung(float);
};