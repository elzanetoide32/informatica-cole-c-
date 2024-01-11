#include<stdio.h>
int main(){
    double num;
    printf("ingrese el numero: ");
    scanf("%lf",&num);
    int parteEnt= num;
    printf("la parte entera es: %d\n",parteEnt);
    double partDeci=num-parteEnt;
    printf("la parte decimal es: %lf\n",partDeci);

    return 0;
}