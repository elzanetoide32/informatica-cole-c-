//elegir entre angulo o radianes, e ingresar un angulo
//dsp dar las 3 opciones trigonometricas(seno,cos,tang)
//si el angulo es ==90-> math error
//por defecto las operaciones en radianes
#include<stdio.h>
#include<math.h>
int main(){
    double ang,r,ang2,pi1;
    int op,B;
    printf("ingrese:\n 1 para radianes\n 2 para grados\n");
    scanf("%d",&op);
    pi1 = acos(-1);
    switch (op)
    {
    case 1: //radianes
        printf("ingrese el angulo entre 0 y 2pi: ");
        scanf("%lf",&ang);
        printf("ingrese:\n 1 para seno\n 2 para coseno\n 3 para tangente\n");
        scanf("%d",&B);
        switch (B)
        {
        case 1:
            r=sin(ang);
            printf("el seno de %.6lf es: %lf",ang,r);
            break;
        case 2:
            r=cos(ang);
            printf("el coseno de %.6lf es: %lf",ang,r);
            break;
        case 3:
            if(ang==0.5){
                printf("MATH ERROR");
                break;
            }
            r=tan(ang);
            printf("el seno de %.6lf es: %lf",ang,r);
            break;
        
        default:
            printf("no pertenece a la opcion");
            break;
        }
        break;
    case 2: //angulo
        printf("ingrese el angulo entre 0 y 360: ");
        scanf("%lf",&ang);
        ang2=ang*(pi1/180);
        printf("ingrese:\n 1 para seno\n 2 para coseno\n 3 para tangente\n");
        scanf("%d",&B);
        switch (B)
        {
        case 1:
            r=sin(ang2);
            printf("el seno de %.6lf es: %lf",ang2,r);
            break;
        case 2:
            r=cos(ang2);
            printf("el coseno de %.6lf es: %lf",ang2,r);
            break;
        case 3:
            if(ang==0.5){
                printf("MATH ERROR");
                break;
            }
            r=tan(ang);
            printf("el seno de %.6lf es: %lf",ang2,r);
            break;
        default:
            printf("no pertenece a la opcion");
            break;
        }
        break;
    default:
        printf("no pertenece a la opcion");
        break;
    }

    return 0;
}