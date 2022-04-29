#include "mitarbeiter.h"


mitarbeiter::mitarbeiter()
{
}

mitarbeiter::mitarbeiter(float init_gleitzeit, float init_krankheit, float init_schulung, float init_urlaub)
{
    gleitzeit = init_gleitzeit;
    krankheit = init_krankheit;
    schulung = init_schulung;
    urlaub = init_urlaub;
}

mitarbeiter::~mitarbeiter()
{
}

float mitarbeiter::get_gleitzeit()
{
    return gleitzeit;
}

float mitarbeiter::get_krankheit()
{
    return krankheit;
}

float mitarbeiter::get_schulung()
{
    return schulung;
}

float mitarbeiter::get_urlaub()
{
    return urlaub;
}

int mitarbeiter::set_gleitzeit(float new_gleitzeit)
{
    gleitzeit = new_gleitzeit;
    return 0;
}

int mitarbeiter::set_krankheit(float new_urlaub)
{
    krankheit = new_urlaub;
    return 0;
}

int mitarbeiter::set_schulung(float new_schulung)
{
    schulung = new_schulung;
    return 0;
}

int mitarbeiter::set_urlaub(float new_urlaub)
{
    urlaub = new_urlaub;
    return 0;
}