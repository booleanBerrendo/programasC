#include <stdio.h>
void main()
{
    float dc;

int k,k1,kiyv,ki;
char des[30];
k=20;
printf("¿Cual es su destino?\n");
scanf ("%s",&des);
printf("¿Cuantos kilometros hay hasta su destino?\n");
scanf ("%d",&k1);
ki=k1*k;
kiyv=ki*2;
dc=kiyv*.80;
printf ("El precio de los kilometros dados es de %d pesos\n",ki);
printf ("Su destino es %s y son %d pesos de ida, y redondo %d pesos,\n mas su descuento del 20 por ciento son %g pesos.\n",des,ki,kiyv,dc);
}
