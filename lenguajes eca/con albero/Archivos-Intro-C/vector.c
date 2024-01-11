#include<stdio.h>
#include<math.h>
int main(void){
    double a,b,a1,b1,c, g=2;
    printf("ingrese el valor de x: ");
    scanf("%lf",&a);
    printf("ingrese el valor de y: ");
    scanf("%lf",&b);
    a1=pow(a,g);
    b1=pow(b,g);
    c=a1+b1;
    printf("el modulo del vector es: %lf",sqrt(c));
    return 0;
}
