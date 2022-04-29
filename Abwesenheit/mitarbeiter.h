class mitarbeiter
{
private:
    // Instanzvariablen (Eigenschaften des Pkw‘s)
    float gleitzeit;
    float krankheit;
    float schulung;
    float urlaub;

public:
    // Konstruktor
    mitarbeiter();
    mitarbeiter(float, float, float, float);
    
    //Destruktor
    ~mitarbeiter();

    //Setter Methoden
    int set_gleitzeit(float);
    int set_krankheit(float);
    int set_schulung(float);
    int set_urlaub(float);

    //Getter Methoden
    float get_gleitzeit();
    float get_krankheit();
    float get_schulung();
    float get_urlaub();
};


