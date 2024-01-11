#include <stdio.h>
// gcc pas_x_ref.c -Wall -o ejref

void incrementar(int*);
// la función no devuelve ningún tipo de dato

int main (void)
{
    int a=1;
    printf("1) Valor ANTERIOR (en el main) de 'a': %d\n", a);
    incrementar(&a);
    printf("4) Valor POSTERIOR (en el main) de 'a': %d\n", a);

    return (0);
}

void incrementar(int* a)
{
    printf("2) Valor ANTERIOR (en la funcion) de 'a': %d\n", *a);
    (*a) = (*a) + 1;
    printf("3) Valor POSTERIOR (en la funcion) de 'a': %d\n", *a);
} 