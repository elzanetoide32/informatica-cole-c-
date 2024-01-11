/*Ejercicio N°3
gcc tpf-ej4.c -lm -o eje4.exe
*/
#include <stdio.h>
#include <math.h>

int main() {
    double real1, imag1, real2, imag2;

    // Solicitar al usuario que ingrese los números complejos
    printf("Ingrese el primer número complejo:\n");
    printf("Parte real: ");
    scanf("%lf", &real1);
    printf("Parte imaginaria: ");
    scanf("%lf", &imag1);

    printf("Ingrese el segundo número complejo:\n");
    printf("Parte real: ");
    scanf("%lf", &real2);
    printf("Parte imaginaria: ");
    scanf("%lf", &imag2);

    // Sumar los números complejos
    double realResultado = real1 + real2;
    double imagResultado = imag1 + imag2;

    // Imprimir los números complejos en su forma binómica
    printf("Primer número complejo: %.2lf + %.2lfi\n", real1, imag1);
    printf("Segundo número complejo: %.2lf + %.2lfi\n", real2, imag2);
    printf("Suma de los números complejos: %.2lf + %.2lfi\n", realResultado, imagResultado);

    return 0;
}
