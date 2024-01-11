/*Post-incremento*/
#include <stdio.h>
//gcc ops_post_inc.c -Wall -o out5

int main (void)
{
    int x=10, a; //inicializo la variable

    a = x++; // POST-incremento, el operador ++ se coloca "despues" de la variable, a su derecha
    printf("Operacion de post-incremento\n");

    // Imprimo "a"
    printf("a = %d\n", a);
    // Imprimo "x"
    printf("x = %d\n", x);

    return(0);
}

/*
ANOTACIÓN: En la operación de POST-INCREMENTO, se incrementa el valor de 
la variable (x) DESPUES de realizar la operación en donde se ve 
involucrada la variable.
En este caso, primero se ejecutará la operación, la cual en este 
caso es la asignación, y luego se incrementará el valor de la variable.
Por ende, primero se realizará la asignación "a = x" (a=10)
 y luego se incrementa el valor de la variable "x" (10 -> 11)

POST -> DESPUES, LA VARIABLE SE INCREMENTA DESPUES DE OPERAR

link de referencia: ...
*/
