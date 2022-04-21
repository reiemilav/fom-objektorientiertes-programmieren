class pkw
{
private:
    // Instanzvariablen (Eigenschaften des Pkw‘s)
    int kmStand;
    float tankInhalt;
    float tankVolumen;
    float verbrauch;

public:
    // Konstruktor
    pkw();
    pkw(int, float, float, float);
    
    //Destruktor
    ~pkw();

    //Allgemeine Methoden
    short fahren(int);
    short tanken(float);

    //Getter Methoden
    int get_kmStand();
    int get_reichweite();
    float get_tankInhalt();
    float get_tankVolumen();
    float get_verbrauch();
};
