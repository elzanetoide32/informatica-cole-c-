/** PASAJE POR COPIA O POR VALOR DE ARGUMENTOS EN FUNCIONES **/

#include <stdio.h>
#include <stdlib.h> // nueva librería
// gcc pas_x_copia_3.c -Wall -o ej3

void incrementar(int);
// la función no devuelve ningún dato, solamente recibe un INT

int main (void)
{
    int a=1;
    // Imprimo la dirección de memoria de la variable "a" en el main()
    printf("DIRECCION DE MEMORIA DE LA VARIABLE (en el main): %p\n", &a);

    printf("1) Valor ANTERIOR (en el main) de 'a': %d\n", a); // el número (1) indica la secuencia de ejecución de las líneas
    system("pause"); // Pauso la ejecución secuencial del código hasta que no presione alguna tecla (nuevo)
    incrementar(a); // Llamo a la función incrementar() y le paso como argumento la variable "a" 
    system("pause");
    printf("4) Valor POSTERIOR (en el main) de 'a': %d\n", a);

    return (0);
}

void incrementar(int a)
{   
    // Imprimo la dirección de memoria de la variable "a" dentro de la función incrementar()
    printf("DIRECCION DE MEMORIA DE LA VARIABLE (en la funcion): %p\n", &a);

    printf("2) Valor ANTERIOR (en la funcion) de 'a': %d\n", a);
    a = a + 1; // Incremento la variale "a"
    system("pause");
    printf("3) Valor POSTERIOR (en la funcion) de 'a': %d\n", a);
}

/*
LINKS CONSULTA:
https://es.stackoverflow.com/questions/1493/cu%C3%A1l-es-la-diferencia-entre-paso-de-variables-por-valor-y-por-referencia

https://cboard.cprogramming.com/c-programming/176151-system-pause.html

PREGUNTA:
¿Por qué no coinciden los valores de "a" en los prints (3) y (4)? Justificar
*/

/* ESPACIO PARA OTRAS ANOTACIONES */