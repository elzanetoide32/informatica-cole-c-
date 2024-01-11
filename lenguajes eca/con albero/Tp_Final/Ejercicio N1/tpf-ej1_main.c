/*Ejercicio N°1
gcc tpf-ej1_main.c tpf-ej1_func.c -o ej1.exe
se tiene q linkear el archivo q tiene la funcion y el q lo llama atraves del header
*/

#include <stdio.h>
#include "tpf-ej1_header.h"
int main(){
    main1();
    return 0;
}