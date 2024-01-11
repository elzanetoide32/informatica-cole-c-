/*Ejercicio N°3
gcc tpf-ej5.c -lm -o eje5.exe
*/
#include <stdio.h>
#include <math.h>

int main() {
    double radio;
    printf("Ingrese el valor del radio en metros [m]: ");
    scanf("%lf", &radio);

    int opcion;
    printf("Elija una opción:\n");
    printf("1. Calcular el perímetro de una circunferencia\n");
    printf("2. Calcular el área de un círculo\n");
    printf("3. Calcular la superficie de una esfera\n");
    printf("4. Calcular el volumen de una esfera\n");
    scanf("%d", &opcion);

    switch (opcion) {
        case 1:
            // Calcular el perímetro de una circunferencia
            {
                double perimetro = 2 * M_PI * radio;
                printf("El perímetro de la circunferencia es: %.2lf metros [m]\n", perimetro);
            }
            break;
        case 2:
            // Calcular el área de un círculo
            {
                double area = M_PI * radio * radio;
                printf("El área del círculo es: %.2lf metros cuadrados [m^2]\n", area);
            }
            break;
        case 3:
            // Calcular la superficie de una esfera
            {
                double superficie = 4 * M_PI * radio * radio;
                printf("La superficie de la esfera es: %.2lf metros cuadrados [m^2]\n", superficie);
            }
            break;
        case 4:
            // Calcular el volumen de una esfera
            {
                double volumen = (4.0 / 3.0) * M_PI * pow(radio, 3);
                printf("El volumen de la esfera es: %.2lf metros cúbicos [m^3]\n", volumen);
            }
            break;
        default:
            printf("Opción no válida\n");
            break;
    }

    return 0;
}
