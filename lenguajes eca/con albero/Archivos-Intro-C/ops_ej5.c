/* Práctica de operador "?" */
#include <stdio.h>
//gcc ops_ej5.c -Wall -o out7

int main(void)
{
    int a, b, c;

    a = 3;
    b = 7;

    // dato_devuelto = (expresión) ? (verdadero) : (falso)

    c = (a>b) ? a : b; //(*1)
    printf("Resultado: %d\n", c);

    b = 2;
    c = (a>b) ? a : b; //(*2)
    printf("Resultado: %d\n", c);

    return 0;
}

/*
ANOTACIONES:

(*1): El operador "?" (tmb llamado "condicional") evalúa una expresión y, en función del resultado de dicha expresión, 
devolverá un resultado entre dos posibilidades. El signo "?" hace referencia a que se evalúa la expresión que lo antecede
- Si la expresión evaluada resulta VERDADERA (TRUE), se obtiene como resultado lo que figura entre el "?" y el ":"
- Si la expresión evaluada resulta FALSA (FALSE), se obtiene como resultado lo que figura luego de los ":""
En este caso, la expresión evaluada sería (a > b), siendo a = 3 y b = 7, por lo tanto:
3 > 7 --> FALSE, por lo que la operación devuelve el segundo argumento, que sería "b" en este caso.

(*2): Se vuelve a realizar la misma operación que en (*1), pero ahora se ha modificado el valor de b.
Entonces, la expresión a evaluar nuevamente es la misma, a > b, pero ahora a = 3 y b = 2, por lo tanto
3 > 2 --> TRUE, por lo que la operación devuelve el primer argumento, que sería "a" en este caso

Para mas información, referirse a la siguiente página:
https://cplusplus.com/doc/tutorial/operators/
*/