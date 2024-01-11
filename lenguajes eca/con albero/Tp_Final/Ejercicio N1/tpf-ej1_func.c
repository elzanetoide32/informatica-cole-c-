#include <stdio.h>
#include "tpf-ej1_header.h"
void swap(int* a, int* b);
void ordenarVec(int* vec, int largo, int op);
int main1() {
    int vec[] = {5, 2, 9, 1, 5, 6};
    int largo = sizeof(vec) / sizeof(vec[0]);

    printf("Vector original: ");
    for (int i = 0; i < largo; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");

    ordenarVec(vec, largo, 1); // Ordenar de manera ascendente

    printf("Vector ascendente: ");
    for (int i = 0; i < largo; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");

    ordenarVec(vec, largo, 2); // Ordenar de manera descendente

    printf("Vector descendente: ");
    for (int i = 0; i < largo; i++) {
        printf("%d ", vec[i]);
    }
    printf("\n");

    return 0;
}

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void ordenarVec(int* vec, int largo, int op) {
    if (op == 1) { // Ordenamiento ascendente
        for (int i = 0; i < largo - 1; i++) {
            for (int j = 0; j < largo - i - 1; j++) {
                if (vec[j] > vec[j + 1]) {
                    swap(&vec[j], &vec[j + 1]);
                }
            }
        }
    } else if (op == 2) { // Ordenamiento descendente
        for (int i = 0; i < largo - 1; i++) {
            for (int j = 0; j < largo - i - 1; j++) {
                if (vec[j] < vec[j + 1]) {
                    swap(&vec[j], &vec[j + 1]);
                }
            }
        }
    }
    // Si op no es 1 ni 2, no se modifica el vector (permanece igual).
}
