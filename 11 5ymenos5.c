#include <stdio.h>
#include <math.h>
void main ()
{
    float n;
    printf("Introdusca un numero\n");
    scanf("%f",&n);
    if (n>-5 && n <5)
    {
        printf("Su numero es %g y esta entre -5 y 5",n);
    }
    else
    {
        printf("Su numero esta fuera del rango solicitado.");
    }
}
