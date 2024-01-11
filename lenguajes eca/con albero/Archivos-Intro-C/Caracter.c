#include <stdio.h>
int main(){
    char A;
    printf("ingrese un caracter: ");
    scanf("%c",&A);
    if(A>=97 && 122>=A){
        printf("es una letra minuscula\n");
    }
    else if(A>=65 && 90>=A){
        printf("es una mayuscula\n");
    }
    else if(A>=48 && 57>=A){
        printf("es un numero\n");
    }
    else if((A>=33 && 47>=A) || (A>=91 && 96>=A) || (A>=123 && 122>=A)){
        printf("es un caracter especial\n");
    }
    else{
        printf("no es ninguno\n");
    }
    return 0;
}