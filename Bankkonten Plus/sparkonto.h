#ifndef SPK_H
#define SPK_H

#include "guthabenkonto.h"

class sparkonto : public guthabenkonto
{
    private:
        short frist;
    
    public:
        sparkonto(float, float, short);

        short getFrist();
        int setFrist(short);
};

#endif