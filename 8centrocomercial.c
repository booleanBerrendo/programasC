+#include <stdio.h>
void main ()
{
    float pro,pro1,pro2,pro3;
    printf ("¿Cual fue el precio de su compra?   ");
    scanf ("%f",&pro);
    if(pro<=500)
    {
        printf("Su precio es de %g pesos",pro);
    }
    else
    {
        if(pro>500 && pro<1000)
        {
            pro1=pro-pro*.08;
            printf ("Se aplico un descuento del 8 porciento, fueron %g pesos\n",pro1);
        }
        else
        {
            if (pro>1000 && pro<4000)
            {
                pro2=pro-pro*.12;
                printf ("Se aplico un descuento del 12 porciento y solo pagara %g pesos \n",pro2);
            }
             else
             {
                 pro3=pro-pro*.15;
                 printf("Se aplico un descuento del 15 porciento y solo pagara %g pesos\n",pro3);
             }
        }
    }
}
