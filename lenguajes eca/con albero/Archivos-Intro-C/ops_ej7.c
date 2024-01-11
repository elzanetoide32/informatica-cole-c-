/* Práctica de operador "," */
#include <stdio.h>
//gcc ops_ej7.c -Wall -o out9

int main(void)
{
    int a, b;

    a = (b=3, b+2);

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}

/*
ANOTACIONES:

The comma operator (,) is used to separate two or more expressions that are included where only one expression is expected.
When the set of expressions has to be evaluated for a value, only the right-most expression is considered.

In this example, first assign the value 3 to b, and then assign b+2 to variable a.
So, at the end, variable a would contain the value 5 while variable b would contain value 3.

*/

