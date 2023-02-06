#include <iostream>
using namespace std;
int main (){
	int x,a,b,c,d,e;
	cout<<"INGRESE EL AÑO AL CUAL CALCULAR EL DOMINGO DE PASCUAS"<<endl;
	cin>>x;
	while(x<=0){
		cout<<"Cambie el año porque todabia no habia pacuas en el marcado"<<endl;
		cin>>x;
	}
	a=x%19;
	b=x%4;
	c=x%7;
	d=((19*a+24)%30);
	e=((2*b+4*c+6*d+5)%7);
	x=(22+d+e);
	if(x<=31){
		cout<<"el dia es: "<<x<<" Marzo"<<endl;
	}
	else {
		x=x-31;
		cout<<"el dia es: "<<x<<" Abril"<<endl;
	}
	return 0;
}
