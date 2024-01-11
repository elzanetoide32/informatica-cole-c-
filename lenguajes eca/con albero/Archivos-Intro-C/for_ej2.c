/*Bucle while 1*/
#include <stdio.h>
//cle

int main (void)
{
    int i=0; // SIEMPRE QUE UTILICEN UN BUCLE, ES ALTAMENTE RECOMENDABLE INICIALIZAR LA VARIABLE ANTES DE EMPEZAR

    while(i<10) //otra forma de emular un for
    {
        printf("%d\n", i);
        i++;
    }

    return(0);
}