class konto
{
private:
    float mKontostand;
    

public:
    konto(float);
    ~konto();

    float getKontostand();
    int einzahlung(float);
};