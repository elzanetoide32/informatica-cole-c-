#include <stdio.h>
//gcc switch_ej2.c -Wall -o out2

int main (void)
{
    char a;
    /* Ingreso de datos */
    printf ("Ingrese un caracter:\r\n");
    scanf ("%c", &a);
    //-- Verifico si es vocal --
    switch (a) 
    {   
        case '0':
        case '1':
        case '2':
        case '3':
        case '4':
        case '5':
        case '6':
        case '7':
        case '8':
        case '9':
            printf ("Es un numero\r\n");
        break;

        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
            printf ("Es vocal\r\n");
        break;

        default:
            printf ("No es vocal\r\n");
        break;
    }

    return (0);
}
