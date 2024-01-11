/*Ejercicio N3
gcc tpf-ej2_func.c -o ej2.exe
*/
#include <stdio.h>
#include "tpf-ej2_header.h"
int buscarMaxMin(int* vec, int largo, int op);
int main1() {
    int vec[] = {5, 2, 9, 1, 5, 6};
    int largo = sizeof(vec) / sizeof(vec[0]);
    int op;

    printf("Elija una opción:\n");
    printf("1. Obtener el máximo elemento\n");
    printf("2. Obtener el mínimo elemento\n");
    scanf("%d", &op);

    int resultado = buscarMaxMin(vec, largo, op);

    if (op == 1) {
        printf("El máximo elemento es: %d\n", resultado);
    } else if (op == 2) {
        printf("El mínimo elemento es: %d\n", resultado);
    } else {
        printf("Opción no válida o vector vacío.\n");
    }

    return 0;
}
int buscarMaxMin(int* vec, int largo, int op) {
    if (largo <= 0) {
        return 0; // Si el vector está vacío, devolvemos 0.
    }

    int resultado = vec[0]; // Inicializamos el resultado con el primer elemento del vector.

    for (int i = 1; i < largo; i++) {
        if (op == 1) { // Buscar el máximo elemento
            if (vec[i] > resultado) {
                resultado = vec[i];
            }
        } else if (op == 2) { // Buscar el mínimo elemento
            if (vec[i] < resultado) {
                resultado = vec[i];
            }
        }
    }

    return resultado;
}
