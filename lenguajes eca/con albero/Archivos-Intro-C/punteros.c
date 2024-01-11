#include<stdio.h>
int main(){
    int vec[3];///el nombre del vector es un puntero
    int *p;

    p=&vec[0];
    vec[0]=1;
    vec[1]=2;
    vec[2]=3;
    //otra forma de escribir en el puntero
    *(p+0)=1;
    *(p+0)=1;
    *(p+0)=1;

    printf("%d\r\n",vec[0]);
    printf("%d\r\n",vec[1]);
    printf("%d\r\n",vec[2]);

    printf("%d\r\n",*(p+0));
    printf("%d\r\n",*(p+1));
    printf("%d\r\n",*(p+2));

    printf("%d\r\n",*(vec+0)); ///es lo mismoq el anterior pq los vectores tienen ya el puntero
    printf("%d\r\n",*(vec+1));
    printf("%d\r\n",*(vec+2));

    return 0;
}