/* Estructura típica de armado de una librería */

/*
Nueva sentencia para compilar el código:
	gcc miprog.c milib.c -Wall -o ej_lib
en este caso, deben estar compilando tanto el código del programa principal ( miprog.c, donde está el main() )
como también el archivo .c en donde se encuentran los desarrollos de las funciones de su nueva librería para 
que sean "linkeadas" en el nuevo archivo ejecutable.
*/

#include <stdio.h>
#include "milib.h" //Incluyo el header de mi nueva librería

int main (void) // se logra de esta manera un main() mas compacto y con menos líneas de código
{
	float radio=3,resul;
	
	resul = area (radio);
	
	printf ("Area de circunferencia: %f\n", resul);
	printf ("Valor de pi usado: %f\n", pi);
}

/*
Existen otras múltiples maneras de desarrollar e implementar librerias de funciones en C, 
pero este es el caso mas genérico y completo que se les puede presentar.
*/