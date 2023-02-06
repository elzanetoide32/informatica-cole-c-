//1 realizar un codigo que resuelva la siguiente ecuacion: ax+b=3. a y b ingresado
#include <iostream>
using namespace std;


int main(){
	float a,b,x,c;
	int i=1;
 do{
 	system("cls");
	cout<<"ax+b=3"<<endl<<"Ingrese A y B"<<endl;
	cin>> a;
	cin>>b;
	
	if(a,b<=0){
		cout<<"A y B son negativos.Por favor ingrese A y B nuevamente"<<endl;
		cin>>a;
		cin>>b;
	}
	if(a==0){
		cout<<"A no debe ser cero.Por favor ingrese A nuevamente"<<endl;
		cin>>a;
	}
	c=3-b;
	x=c/a;
	cout<<"El resultado es: "<<x<<endl;
	
	cout<<"Si desea que se repita el programa seleccione 1. Si desea salir seleccione 0"<<endl;
	cin>>i;
	}while(i==1);
	
	cout<<"El programa ha finalizado"<<endl;
	return 0; 
		
}
