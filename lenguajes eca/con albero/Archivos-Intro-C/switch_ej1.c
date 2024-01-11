#include <stdio.h>
//gcc switch_ej1.c -Wall -o out1

int main (void)
{
    char a;
    /* Ingreso de datos */
    printf ("Ingrese un caracter:\r\n");
    scanf ("%c", &a);
    //-- Verifico si es vocal --
    switch (a) 
    {
        case 'a':
            printf ("Es vocal\r\n");
        break;

        case 'e':
            printf ("Es vocal\r\n");
        break;

        case 'i':
            printf ("Es vocal\r\n");
        break;

        case 'o':
            printf ("Es vocal\r\n");
        break;

        case 'u':
            printf ("Es vocal\r\n");
        break;

        default:
            printf ("No es vocal\r\n");
        break;
    }

    return (0);
}