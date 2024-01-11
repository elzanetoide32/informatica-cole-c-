/*Probador de incrementos*/
#include <stdio.h>
//gcc ops_ej3.c -Wall -o out3

int main (void) 
{
    int w, x, y, z; //declaro las variables

    // DATO: Puedo ejecutar mas de una instrucción en una misma línea, siempre y cuando cada instrucción finalice con su ";" correspondiente
    w = 0; x = 0; y = 0; z = 0; // IMPORTANTE: INICIALIZO LAS VARIABLES
    //-- Imprimo los valores originales --
    printf ("w = %d\t x = %d\t y = %d\t z = %d\r\n", w, x, y, z); //separo las impresiones con un tab

    //-- Incremento en uno e imprimo --
    w = w + 1; x++; ++y; z += 1;
    printf ("w = %d\t x = %d\t y = %d\t z = %d\r\n", w, x, y, z);

    //-- Incremento en uno e imprimo --
    printf ("w = %d\t x = %d\t y = %d\t z = %d\r\n", w = w + 1, x++, ++y, z +=1 );

    //-- Imprimo los valores --
    printf ("w = %d\t x = %d\t y = %d\t z = %d\r\n", w, x, y, z);

    return (0);
}

/*
ANOTACIÓN: Buen ejemplo para comprender y visualizar la diferencia entre pre y post incremento y conocer nuevos operadores

1er línea: Se imprime todas las variables inicializadas en 0. Nada nuevo.

2da (Francia) línea: Se incrementa en 1 a las 4 variables, 
pero de distintas formas.
"w = w + 1" y "z += 1" son exactamente lo mismo, funcionan 
de la misma manera. Primero suman 1 al valor de la variable y 
luego realizan la asignación.
x++ -> POST-incremento
++y -> PRE-incremento
En este caso, tanto el pre-incremento como el post-incremento 
funcionan de la misma manera, ya que no están sujetas a ninguna operación.
No hay ninguna operación u asignación para realizar antes o 
despues del incremento, por ende solamente se realiza el incremento 
en 1 en ambos casos.
Las operaciones de incremento y la impresión por pantalla no están 
relacionadas en este caso, se ejecutan por separado, son independientes.

3er línea: Sucede lo mismo de antes con "w = w + 1" y "z += 1", nada nuevo ahi.
x++ -> POST-incremento
En el caso de "x", se realiza un post-incremento, por ende la variable recién se va a incrementar una vez que haya finalizado la operación
en donde se ve involucrada. Es decir, primero se ejecuta la línea con todas las impresiones de la variables en pantalla y recién ahí se incrementa
la variable, por lo que no veremos su incremento en esta línea.
Le pasa su valor a la función printf() "desactualizado" (argumento), luego cuando se termina de ejecutar printf(), ahí se actuliza x con el incremento.

++y -> PRE-incremento
En el caso de "y", como es un pre-incremento, primero se incrementa en 1 el valor de la variable y luego se ejecuta la operación,
la cual en este caso es la función printf()
Por ende, el argumento que recibe printf() es el valor de la variable actualizada, por eso se ve en pantalla el valor de "y" ya incrementada.

4ta línea:
Finalmente, imprimo los valores de todas las variables luego de los dos incrementos.
Se observa que todas al final tienen el mismo valor, pero la diferencia estuvo (y se pudo observar) en los pre y post incrementos y como pueden
modificar estos los argumentos de las funciones.

CON LOS OPERADORES "Q--", "--Q", "-=" SUCEDE LO MISMO QUE CON ESTOS CASOS, PERO CON LA OPERACIÓN CORRESPONDIENTE 

*/