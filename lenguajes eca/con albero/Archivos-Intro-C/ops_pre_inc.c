/*Pre-incremento*/
#include <stdio.h>
//gcc ops_pre_inc.c -Wall -o out4

int main (void)
{
    int x=10, a=0; //inicializo la variable

    a = ++x; // PRE-incremento, el operador ++ se coloca "antes" de la variable, a su izquierda
    printf("Operacion de pre-incremento\n");

    // Imprimo "a"
    printf("a = %d\n", a);
    // Imprimo "x"
    printf("x = %d\n", x);

    return(0);
}

/*
ANOTACIÓN: En la operación de PRE-INCREMENTO, primero se incrementa el valor de la variable 
ANTES de operar con ella o usarla para alguna operación.
En este caso, primero se incrementa el valor de x (10 -> 11) 
y luego se realiza la operación, que en este caso es una asignación (a = 11).
Por ende, cuando imprima el valor de ambas variables, obtendré que ambas valen 11.

PRE -> ANTES, LA VARIABLE SE INCREMENTA ANTES DE OPERAR

link de referencia: ...
*/
