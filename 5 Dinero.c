#include <stdio.h>
void main ()
{
    float eu,fr,li,eup,frp,lip;
    eu=5;
    fr=10;
    li=20;
    printf ("Tenemos 5 euros, 10 francos y 20 libras.\n\n");
    eup=eu*18.22;
    frp=fr*2.77;
    lip=li*21.86;
    printf("Un euro equivale a 18.22 pesos, un franco a 2.77 pesos y una libra 21.86 pesos.\n\n");
    printf("Fueron %g pesos, el franco %g pesos y la libra %g \n\n",eup,frp,lip);
    return 0;

}
