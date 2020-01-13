#include <math.h>
#include  <stdio.h>
void main ()
{
    float a,b,c,ra,rb,rc;
    printf("Asigne un valor a A\n");
    scanf ("%f",&a);
    printf("Asigne un valor a B\n");
    scanf ("%f",&b);
    printf ("Asigne un valor a C\n");
    scanf ("%f",&c);
    ra=sqrt(a);
    rb=sqrt(b);
    rc=sqrt(c);
    printf ("La raiz de A es %g, la de B %g y la de C %g.",ra,rb,rc);
}
