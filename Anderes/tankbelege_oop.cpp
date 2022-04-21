#include <stdio.h>
#include <stdlib.h>
#include <conio.h>


class pkw
{
    private:
        float mengeGes;
        long kmAnfang;
        long kmAktuell;

    public:
        // Konstruktor
        pkw(long km)
        {
            kmAnfang = km;
            mengeGes = 0;
        }

        //Setter
        void setKilometerstand(long km)
        {
            kmAktuell = km;
        }

        //Adder
        void addTanken(float menge)
        {
            mengeGes += menge;
        }

        //Getter
        long getVerbrauch(void)
        {
            return mengeGes / (kmAktuell-kmAnfang);
        }
};



void main()
{
    long km;
    float menge;

    printf("Anfangskilometerstand: ");
    scanf_s("%d", &km);

    pkw myPkw(km);

    while(true)
    {
        system("cls");

        printf("");
        scanf_s("%d", &km);
        
    }


}