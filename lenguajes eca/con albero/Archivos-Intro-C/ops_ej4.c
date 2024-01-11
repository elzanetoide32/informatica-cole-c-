/*Pasaje de argumentos con pre y post incrementos*/
#include <stdio.h>
#include <math.h>
//gcc ops_ej4.c -Wall -lm -o out6
//Agregar el -lm para linkear la librería matemática

int main (void)
{
    double a=2, b=3, c=0; // inicializo las variables

    c = pow(a, b);
    printf("Resultado 1: %lf\n", c);
    // a=2, b=3, c=8

    c = pow(a, b++);
    printf("Resultado 2: %lf\n", c);
    // a=2, b=4, c=8

    c = pow(a, ++b);
    printf("Resultado 3: %lf\n", c);
    // a=2, b=5, c=32

    return (0);
}