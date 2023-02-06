#include<iostream>
using namespace std;


int main(){
	int cont,a;
	cout<<"Ingrese un numero: "<< endl;
	cin>>a;
	while(a>1){
		cont=cont*a;
		a--;
	}
	cout<<"El factorial de su numero es: "<<cont<<endl;
	

	

    return 0;	
}




