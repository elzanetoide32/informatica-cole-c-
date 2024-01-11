#include <stdio.h>
#include <math.h>
#define CANT 9
#define CANT2 10.6666

int main()
{
    double pi1, pi2;
    // printf("cant: %d\n",CANT);
    // printf("cant2: %.2f\n",CANT2);
    pi1 = acos(-1);
    printf("%.15lf\n", pi1);

    pi2 = 2 * (asin(1));
    printf("%.15lf\n", pi2);

    double num,num1;
    num=-42.0000;
    num1=-1.3333;
    printf("%lf\n",fabs(num));
    printf("%lf\n",fabs(num1));
    return 0;
}