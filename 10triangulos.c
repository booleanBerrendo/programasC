#include <stdio.h>
#include <math.h>
void main()
{
    int la,lb,lc;
    printf("Dame los tres lados del triangulo separados por un espacio:\n");
    scanf("%d %d %d",&la,&lb,&lc);
    if(la==lb && la==lc && lb==lc)
    {
        printf("Tu triangulo es equilatero");
    }
    else
    {
        if(la!=lb && lb!=lc && la!=lc)
        {
            printf("Tu triangulo es escaleno");
        }
        else
        {
            printf("Tu triangulo es isoceles");
        }
    }
}
