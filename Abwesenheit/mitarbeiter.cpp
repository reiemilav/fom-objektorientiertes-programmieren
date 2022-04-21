#include "mitarbeiter.h"


mitarbeiter::mitarbeiter()
{
}

mitarbeiter::mitarbeiter(int init_gleitzeit, int init_krankheit, int init_schulung, int init_urlaub)
{
    gleitzeit = init_gleitzeit;
    krankheit = init_krankheit;
    schulung = init_schulung;
    urlaub = init_urlaub;
}

mitarbeiter::~mitarbeiter()
{
}