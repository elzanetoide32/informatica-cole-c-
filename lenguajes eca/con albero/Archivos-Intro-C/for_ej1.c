/*Bucle for 1*/
#include <stdio.h>
//gcc for_ej1.c -Wall -o out3

int main (void)
{
    int i, j=0; // SIEMPRE QUE UTILICEN UN BUCLE, ES ALTAMENTE RECOMENDABLE INICIALIZAR LA VARIABLE ANTES DE EMPEZAR

    for (i=0; i<10; i++) // por las dudas se inicializa en 0 la variable acá tmb, asi pueden reutilizarla en varios contadores
    {
        printf("%d\n", i);
    }

    printf("---------------------\n");

    for (j=0; j<10; ++j)
    {
        printf("%d\n", j);
    }

    return(0);
}

/*
Tanto el pre como el post incremento funcionan para el contador del for, ya que solamente se realiza el incremento, no está asociado a ninguna otra
operación. Esto se evidencia con la presencia de los "," separando cada instrucción.

*/