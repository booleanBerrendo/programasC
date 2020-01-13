//determinar el pago de un cliente al consumir alimento
//en un local de comida rapida los alimentos en sus respectivos
//precions son hamburguesa 20 hot dogs 8 papas al a francesa 10 rebanada de pizza 12
#include <stdio.h>
void main ()
{
int hb,hd,pa,rf,pz,hbc,hdc,pac,pzc,rfc,tl;
hb=20;
hd=8;
pa=10;
pz=12;
rf=8;
printf (" M E N U: \n HAMBURGUESAS $20 \t HOT DOGS $8 \n ORDEN DE PAPAS $10 \t REBANADA DE PIZZA $12 \n REFRESCOS $8 \n");
printf (" ¿Cuantas hamburguesas lleva?\n");
scanf ("%d",&hbc);
printf  (" ¿Cuantos hotdogs lleva?\n");
scanf ("%d",&hdc);
printf (" ¿Cuantas ordenes de papas lleva?\n");
scanf ("%d",&pac);
printf (" ¿Cuantas rebanadas de pizza lleva?\n");
scanf ("%d",&pzc);
printf (" ¿Cuantos refrescos compro? \n");
scanf ("%d",&rfc);
tl= hbc*hb + hdc*hd + pac*pa + pzc*pz + rfc*rf;
printf ("Fueron %d hamburguesas, %d hotdogs, %d ordenes de papas,\n %d rebanadas de pizza, %d refrescos y el total fue de %d pesos\n\n\n.",hbc,hdc,pac,pzc,rfc,tl);
return (0);
}
