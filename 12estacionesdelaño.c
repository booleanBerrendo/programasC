#include <stdio.h>
#include <math.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
    int di,me,medi,fech,media;
    printf("Dame el dia y el mes separados por un enter:\n");
    scanf("%d\n%d",&di,&me);
    medi=me-1;
    media=medi*30;
    fech=media+di;
    if(fech>=81 && fech<171)
    {
        printf("La fecha es de primavera\n");
    }
    else
    {
        if(fech>=171 && fech<261)
        {
            printf("Tu fecha esta en verano\n");
        }
        else
        {
            if(fech>=261 && fech<351)
            {
                printf("Tu fecha esta en otoño\n");
            }
            else
            {
                if(fech>=351 && fech<360)
                {

                    printf("Tu fecha esta en invierno\n");
                }
                else
                {
                   if(fech>0 &&fech<81)
                   {
                       printf("Tu fecha esta en invierno\n");
                   }
                   else
                   {
                       printf("Tu fecha esta mal escrita\n");
                   }
                }
            }
        }

    }
system("pause");
return 0;
}

