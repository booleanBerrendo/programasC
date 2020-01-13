
#include <stdio.h>
    #include <math.h>
    int main()
    {
        int n;
        printf("Ingresa un numero\n");
        scanf("%d",&n);
        if(n==0){
          printf("El numero %d es nulo",n);
          } else{
              if(n>0){
                 printf("El numero %d es positivo",n);
              }else{
              printf("El numero %d es negativo",n);
              }
          }
       return 0;
    }
