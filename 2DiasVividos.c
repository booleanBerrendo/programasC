#include <stdio.h>
void main ()
{
 int an,mn,dn,aa,ma,da,dias,ed;
 printf("Introduzca el anio, mes y dia de nacimiento separados por un espacio.\n");
 scanf("%d %d %d",&an,&mn,&dn);
 printf("introduzca el anio, mes y dia actual separados por un espacio.\n");
 scanf("%d %d %d",&aa,&ma,&da);
 ed=aa-an;
 dias=ed*360;
 printf("Usted tiene: %d anios y tiene un total de %d dias vividos\n",ed,dias );
}
