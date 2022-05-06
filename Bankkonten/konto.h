#ifndef USER_H
#define USER_H

class konto
{
protected:
    float mKontostand;

public:
    konto(float);
    ~konto();

    float getKontostand();
    int einzahlung(float);
};

#endif // USER_H