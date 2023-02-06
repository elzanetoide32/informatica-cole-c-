#include <iostream>
#include <math.h>
using namespace std;


int main(){
	float V,R1,R2,R3,IT,I,RT,a,P;
	int i,x;
	RT=0;
	do{
	system("cls");
	cout<<"Ingresar el valor de la fuente(en Volt): "<<endl;
	cin>>V;
		while(V<=0){
		cout<<"Por favor, no ingrese 0. Repita nuevamente el valor de la fuente:(en Volt) "<<endl;
		cin>>V;	
	}
	cout<<"Ingrese el valor de R1(en ohm): "<<endl;
	cin>>R1;
	while(R1<=0){
		cout<<"Por favor, no ingrese 0. Repita R1 nuevamente:(en OHM) "<<endl;
		cin>>R1;
	}
	cout<<"Ingrese el valor de R2(en ohm): "<<endl;
	cin>>R2;
	while(R2<=0){
		cout<<"Por favor, no ingrese 0. Repita R2 nuevamente:(en OHM) "<<endl;
		cin>>R2;
	}
	cout<<"Ingrese el valor de R3(en ohm): "<<endl;
	cin>>R3;
		while(R3<=0){
		cout<<"Por favor, no ingrese 0. Repita R3 nuevamente:(en OHM) "<<endl;
		cin>>R3;
	}
	R1=pow(R1,-1);
	R2=pow(R2,-1);
	R3=pow(R3,-1);
	RT=R1+R2+R3;
	RT=pow(RT,-1);
	IT=V/RT;
	x=1;

	do
	{
		system("cls");
		cout<<"Digite un numero segun que quiere calcular"<<endl<<"1.RT"<<endl<<"2.IT"<<endl<<"3.I1"<<endl<<"4.I2"<<endl<<"5.I3"<<endl<<"6.PT"<<endl<<"7.P1"<<endl<<"8.P2"<<endl<<"9.P3"<<endl;
		cin>>i;
		switch(i){
		case 1:
			cout<<"El valor de RT es:"<<RT<<endl;
			break;
		case 2: 
			cout<<"El valor de IT es: "<<IT<<endl;
			break;
		case 3:
			I=IT*(RT/R1);
			cout<<"El valor de I1 es: "<<I<<endl;
			break;
		case 4:
			I=IT*(RT/R2);
			cout<<"El valor de I2 es: "<<I<<endl;
			break;
		case 5:
			I=IT*(RT/R3);
			cout<<"El valor de I3 es: "<<I<<endl;
			break;
		case 6:
			a=IT*RT;
			P=a*IT;
			cout<<"El valor de PT es: "<<P<<endl;
			break;
		case 7:
			I=IT*(RT/R1);
			a=I*R1;
			P=a*R1;
			cout<<"El valor de P1 es: "<<P<<endl;
			break;
		case 8:
			I=IT*(RT/R2);
			a=I*R2;
			P=a*R2;
			cout<<"El valor de P2 es: "<<P<<endl;
			break;
		case 9:
			I=IT*(RT/R3);
			a=I*R3;
			P=a*R3;
			cout<<"El valor de P3 es: "<<P<<endl;
			break;
		default:
			cout<<"El valor seleccionado no coresponde a una opcion posible"<<endl;
			break;	
			
			}
		cout<<"Si quiere obtener otro resultado seleccione 1, en caso contrario seleccione 0. Si desea reiniciar todo seleccione 2"<<endl;
		cin>>x;
		}
	while (x==1);
	
	}
	while (x==2);	
	cout<<"El programa a finalizado"<<endl;
	
	return 0;
}
