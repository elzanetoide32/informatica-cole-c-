/*Ejercicio 1 de entrada y salida de datos*/
#include <stdio.h>
//gcc io_ej1.c -Wall -o out2

int main (void)
{
    int var; //-- Declaracion de variable entera --

    /* Imprimo en pantalla una leyenda */
    printf ("Ingrese un numero: ");

    /* Espero al que el usuario ingrese un numero entero y lo almaceno en "var" */
    scanf ("%d", &var);

    //-- Imprimo una leyenda y el valor almacenado en la variable --
    printf ("El numero ingresado es: %d y el siguiente: %d\n", var, var+1);

    //-- Imprimo el número en hexa --
    printf ("El numero ingresado es(en hexa): %x\n", var);

    return(0);
}
