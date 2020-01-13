#include <stdio.h>
void main ()
{
    int km,unk,des,ida,vuel,idayvuel,iyvcd;
    km=556;
    unk=20;
    ida=unk*km;
    vuel=unk*km;
    idayvuel=ida+vuel;
    iyvcd=idayvuel*.80;
    printf("Del centro de Mexico a el centro de Guadalajara son 556 kilometros en carretera.\n El kilometro esta a $20 pesos.\nEl viaje redondo total es de %d pesos. \n¡¡¡USTED SE A GANADO UN DESCUENTO DEL 20 PORCIENTO Y PAGARA SOLO %d PESOS!!!",idayvuel,iyvcd);

}
