#include <stdio.h>
int main(){
    int Num;
    printf("ingrese un numero: ");
    scanf("%d",&Num);
    if(Num%2==0){
        printf("es par");
    }else{
        printf("es impar");
    }

    return 0;
}