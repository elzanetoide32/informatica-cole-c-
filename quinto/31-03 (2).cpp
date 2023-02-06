#include <iostream>
using namespace std;
int main(){
	float gita,des; 
	cout<<"Ingrese el valor de la compra: "<<endl;
	cin>>gita;
	while (gita<=0){
		cout<<"EL valor que diguito de la compra es imposible, ya que es menor a 0 "<<endl;
		cin>>gita;
	}
	if(gita<100){
		des=(gita*5)/100;
		cout<<"El descuento que rrecibe es de un 5%"<<endl;
		gita=gita-5%;
		cout<<" Restandole el 5%, su compra pasara a valer: "<<gita<<endl;
	}
	else if(gita)
	
	
	return 0;
}
