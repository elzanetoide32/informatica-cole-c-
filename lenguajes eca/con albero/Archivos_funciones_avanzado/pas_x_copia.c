/** PASAJE POR COPIA O POR VALOR DE ARGUMENTOS EN FUNCIONES **/

#include <stdio.h>
// gcc pas_x_copia.c -Wall -o ej1

void incrementar(int);
// la función no devuelve ningún dato

int main (void)
{
    int a=1;
    printf("1) Valor ANTERIOR (en el main) de 'a': %d\n", a); // el número (1) indica la secuencia de ejecución de las líneas
    incrementar(a); //llamo a la función
    printf("4) Valor POSTERIOR (en el main) de 'a': %d\n", a);

    return (0);
}

void incrementar(int a)
{
    printf("2) Valor ANTERIOR (en la funcion) de 'a': %d\n", a);
    a = a + 1;
    printf("3) Valor POSTERIOR (en la funcion) de 'a': %d\n", a);
}

/*
LINK CONSULTA:
https://es.stackoverflow.com/questions/1493/cu%C3%A1l-es-la-diferencia-entre-paso-de-variables-por-valor-y-por-referencia
*/