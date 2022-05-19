#ifndef KONTO_H
#define KONTO_H

class konto
{
protected:
    float kontostand;

public:
    konto(float);
    // ~konto();

    float getKontostand();
    int einzahlung(float);
};

#endif // KONTO_H