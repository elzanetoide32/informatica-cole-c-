#include <iostream>
#include <utility>
using namespace std;

	int main(){
		int alturas,bajito,altito,i;
		float promedio;
		i=0;
		//bajito=1000000000;
		altito=0;
		do{
		
			cout<<"Ingrese la altura de cada persona en centimetros"<<endl;
			cin>>alturas;
			promedio=promedio+alturas;
			cout<<"La altura es:"<<alturas<<endl;
			i=i+1;
			if (alturas>altito)
				altito=alturas;
			if (alturas<bajito)
				bajito=alturas;
			
			}
		while (i<40);
		promedio=promedio/i;
		cout<<"El promedio entre todas las alturas es: "<<promedio<<endl;
		cout<<"La altura mas alta es de: "<<altito<<endl;
		cout<<"La altura mas baja es de: "<<bajito<<endl;
	system("PAUSE");
	return 0;
	}
