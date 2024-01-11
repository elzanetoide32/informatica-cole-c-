/*Probador de condiciones*/
#include <stdio.h>
//gcc ops_ej2.c -Wall -o out2
int main (void)
{
    int a;
    printf ("Ingresar un num:\r\n");
    scanf ("%d", &a);

    if(a)
    {
        printf("Ingresaste un numero distinto de 0\n");
    }
    else
    {
        printf("Ingresaste un 0\n");
    }

    if(!a)
    {
        printf("Ingresaste el numero 0");
    }

    return (0);
}