class mitarbeiter
{
private:
    // Instanzvariablen (Eigenschaften des Pkw‘s)
    int gleitzeit;
    int krankheit;
    int schulung;
    int urlaub;

public:
    // Konstruktor
    mitarbeiter();
    mitarbeiter(int, int, int, int);
    
    //Destruktor
    ~mitarbeiter();

    //Setter Methoden
    int set_gleitzeit(int);
    int set_krankheit(int);
    int set_schulung(int);
    int set_urlaub(int);

    //Getter Methoden
    int get_gleitzeit();
    int get_krankheit();
    int get_schulung();
    int get_urlaub();
};


