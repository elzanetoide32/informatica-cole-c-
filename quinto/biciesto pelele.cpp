//detectar si un año es biciesto
#include <iostream>
using namespace std;


int main(){
	int bi,bi3,bi2,messi;
	messi=0;
	cout<<"Ingrese el año que desea saber si es biciesto o no"<<endl;
	cin>>bi;
	if (bi%4==0 && bi%100!=0 || bi%400==0){
		cout<<"Su año es biciesto"<<endl;
		
	}
	else{
		cout<<"Su numero no es biciesto"<<endl;
	}

	system ("pause");
	system ("cls");
	//INgresar año final y año inivial y decir todos los años biciestos que hay en el medio
	cout<<"Ingrese los años entre los que quiere saber cuantos bi hay. "<<endl;
	cout<<"Año inicial: "<<endl;
	cin>>bi2;
	cout<<"Año final: "<<endl;
	cin>>bi3;
	cout<<"Los años bisiesto dentro de este periodo son: "<<bi2<<endl;
	
	for(bi2>=bi3,){
		if (bi2%4==0 && bi2%100!=0 || bi2%400==0){
			cout<<bi2<<endl;
			messi=messi+1;
		}
		bi2=bi2+1;
	}
	cout<<"La cantidad de años biciestos dentro del perido marcado son: "<<messi<<endl;
	return 0;	
}
