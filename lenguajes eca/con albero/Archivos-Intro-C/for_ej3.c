/*Bucle while 2*/
#include <stdio.h>
//gcc for_ej3.c -Wall -o out5

int main (void)
{
    int i=0; // SIEMPRE QUE UTILICEN UN BUCLE, ES ALTAMENTE RECOMENDABLE INICIALIZAR LA VARIABLE ANTES DE EMPEZAR

    while(1) //otra forma de emular un for
    {
        printf("%d\n", i);
        i++;

        if (!(i<10))
        {
            break;
        }
    }

    return(0);
}

/*
Si alguna vez se les queda loopeando un while 1, presiones "ctrl + c" en la consola y termina el proceso de ejecución de ese programa
*/