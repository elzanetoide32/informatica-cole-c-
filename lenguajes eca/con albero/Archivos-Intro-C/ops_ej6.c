/* Práctica de operador "?" */
#include <stdio.h>
//gcc ops_ej6.c -Wall -o out8

int main(void)
{
    int a, b;
    printf("ingrese el valor de a: ");
    scanf("%d",&a);
    printf("ingrese el valor de b: ");
    scanf("%d",&b);
    (a>b) ? printf("Hola\n") : printf("Chau\n"); //(*1)

    // b = 2;
    // (a>b) ? (c=99) : printf("Chau\n"); //(*1)
    // printf("Valor de C: %d\n", c);

    return 0;
}

/*
ANOTACIONES:

(*1): Observar otra manera de como utilizar el operador "?". En este caso, dependiendo del resultado de la expresión
evaluada, ejecuto la primer o segunda operación que figuran en el argumento.
En este caso, 3 > 7 --> FALSE, por lo que se ejecutará la función del segundo argumento (Si, printf() es justamente una función).
Puedo hacer un llamado a función en base al resultado obtenido al evaluar la expresión.
Ver como en este caso la operación "?" no me devuelve nada, no me devuelve una variable como en los ejemplos de "ops_ej5.c"

(*2): Otra manera de utilizar los argumentos de la operación "?", en este caso realizo una asignación (c=99) en caso de 
que al evaluar la expresión, esta resulte verdadera.
En este caso, 3 > 2 --> TRUE, por lo que se ejecutará la asignación c=99.
Nuevamente hago que la operación "?" no me devuelva nada, ya que no es necesario en este caso.
Imprimo el resultado de la asignación debajo con un print() para verificar.

*/