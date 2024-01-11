/** PASAJE POR COPIA O POR VALOR DE ARGUMENTOS EN FUNCIONES **/

#include <stdio.h>
// gcc pas_x_copia_2.c -Wall -o ej2

void incrementar(int);
// la función no devuelve ningún dato

int cont=1; // VARIABLE GLOBAL

int main (void)
{
    int a=1;
    printf("%d) Valor ANTERIOR (en el main) de 'a': %d\n", cont, a);
    cont++;
    incrementar(a);
    printf("%d) Valor POSTERIOR (en el main) de 'a': %d\n", cont, a);
    cont++;

    return (0);
}

void incrementar(int a)
{
    printf("%d) Valor ANTERIOR (en la funcion) de 'a': %d\n", cont, a);
    cont++;
    a = a + 1;
    printf("%d) Valor POSTERIOR (en la funcion) de 'a': %d\n", cont, a);
    cont++;
}

/*
LINK CONSULTA:
https://es.stackoverflow.com/questions/1493/cu%C3%A1l-es-la-diferencia-entre-paso-de-variables-por-valor-y-por-referencia
*/