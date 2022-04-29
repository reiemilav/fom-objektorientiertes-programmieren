#include <stdio.h>

#include "getfloat.h"

int main()
{
    float var;

    printf("Eingabe:");
    var = getfloat(3, 2);
    printf("%f", var);
    return 0;
}