#include <stdio.h>
#include <stdlib.h> // nueva librería
// gcc pas_x_ref_2.c -Wall -o ejref2

void incrementar(int*);
// la función no devuelve ningún tipo de dato

int main (void)
{
    int a=1;
    printf("1) Valor ANTERIOR (en el main) de 'a': %d\n", a);
    system("pause");
    incrementar(&a);
    system("pause");
    printf("4) Valor POSTERIOR (en el main) de 'a': %d\n", a);

    return (0);
}

void incrementar(int* a)
{
    printf("2) Valor ANTERIOR (en la funcion) de 'a': %d\n", *a);
    system("pause");
    (*a) = (*a) + 1;
    printf("3) Valor POSTERIOR (en la funcion) de 'a': %d\n", *a);

    /*
    PREGUNTA: ¿Por que tengo que utilizar *a en vez de a?
    */
} 
