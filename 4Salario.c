#include <stdio.h>
void main ()
{
    float salario,nsalario;
    printf ("Introduzca el nuevo salario: \n");
    scanf ("%f",&salario);
    nsalario= salario*1.10;
    printf ("Su nuevo salario con aumento es del %g",nsalario);
    return 0;
}

