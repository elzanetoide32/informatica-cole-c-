#include <iostream>
using namespace std;
int main(){
	float f,fk,ff;
	int i;
	f=0;
	cout<<"Diguite la temperatura en grados celcius: "<<endl;
	cin>>f;
	while(f<-273.14){
		cout<<"Por favor, no ingrese un valor menor a -273.15 C "<<endl;
		cin>>f;
	}
	cout<<"El valor diguitado en celcius es: "<<f<<endl;
	fk=f+273.15;
	cout<<"El equivalente en grados kelvin del valor cargado anteriormente: "<<fk<<endl;
	ff=(f*1.8)+32;
	cout<<"El equivalente en grados fahrenheit del valor cargado anteriormente: "<<ff<<endl;
	if (f<=100){
		f=f-100;
		fk=fk-373.15;
		ff=ff-212;
		cout<<"los grados que le faltan al valor diguitado para llegar al punto de ebullicion es: "<<f<<" C "<<fk<<" K "<<ff<<" F"<<endl;
	}
	else if(f>100){
		cout<<"EL valor diguitado sobrepasa al punto de ebullicion"<<endl;
	}
	
	return 0;


}
