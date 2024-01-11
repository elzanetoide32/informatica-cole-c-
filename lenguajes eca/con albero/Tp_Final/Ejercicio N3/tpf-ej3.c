/*Ejercicio N°3
gcc tpf-ej3.c -o eje3.exe
*/
#include <stdio.h>

int contarRepes(int* vec, int largo, int repe) ;
int main() {
    int vec[] = {5, 2, 5, 1, 5, 6};
    int largo = sizeof(vec) / sizeof(vec[0]);
    int elementoABuscar = 5;

    int cantidadRepeticiones = contarRepes(vec, largo, elementoABuscar);

    printf("El elemento %d se repite %d veces en el vector.\n", elementoABuscar, cantidadRepeticiones);

    return 0;
}
int contarRepes(int* vec, int largo, int repe) {
    int contador = 0;

    for (int i = 0; i < largo; i++) {
        if (vec[i] == repe) {
            contador++;
        }
    }

    return contador;
}