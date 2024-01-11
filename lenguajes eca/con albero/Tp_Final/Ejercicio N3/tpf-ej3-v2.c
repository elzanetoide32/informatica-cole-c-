/*Ejercicio N°3
gcc tpf-ej3-v2.c -o eje3.exe
*/
#include <stdio.h>
void contarYImprimirRepes(int* vec, int largo) ;
int main() {
    int vec[] = {9, 67, 9, 12, 18, 15, 12, 9};
    int largo = sizeof(vec) / sizeof(vec[0]);

    contarYImprimirRepes(vec, largo);

    return 0;
}
void contarYImprimirRepes(int* vec, int largo) {
    printf("Elementos repetidos: ");
    
    for (int i = 0; i < largo; i++) {
        int repe = vec[i];
        int contador = 0;

        // Verificar si el elemento ya se ha contado
        int repetido = 0;
        for (int j = 0; j < i; j++) {
            if (vec[j] == repe) {
                repetido = 1;
                break;
            }
        }

        // Si el elemento no es repetido, contar las repeticiones
        if (!repetido) {
            for (int j = i; j < largo; j++) {
                if (vec[j] == repe) {
                    contador++;
                }
            }

            if (contador > 1) {
                printf("%d (%d veces) ", repe, contador);
            }
        }
    }

    printf("\n");
}