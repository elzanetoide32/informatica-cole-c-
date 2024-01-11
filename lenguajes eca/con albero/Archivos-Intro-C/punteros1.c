#include<stdio.h>
#include<math.h>
//para saber array hay q saber punteros
//& -> devuelve la direccion de memoria de la variable que se utilica
//(tipo de dato) *variable-> declaro variable puntero de un determinado tipo de dato
//64 bits==8 bytes==16 nums en hexa
//todas las variables puntero ocupan el mismo espacio de memoria 
// *(varible) -> contenida de la direccion de memoria a la que apunta la variable
//cada ves q compila es una nueva direccion de memoria
//
int main(){
    int *p; //nsino la otra variable tmb es un puntero
    int var;
    p= &var;//apunto el puntero a la dire de var

    *p=10;//var=10// le asigno a la variable var -> accedo a var mediante el puntero

    printf("direccion de memo propia de la variable puntero: %p\n",&p);///%p para punteros
    printf("direccion de memo almacenada en la variable puntero: %p\n",p);//sin & pq es almacenada
    printf("direccion de memo de la variable var: %p\n",&var);
    printf("contenido de la direccion de memo apuntada por el puntero: %d",*p);
    printf("valor de la variable apuntada: %d\n",var);
    printf("cantidad de bytes q ocupa una direccion de memo: %d",(int)sizeof(var));

    return 0;
}



