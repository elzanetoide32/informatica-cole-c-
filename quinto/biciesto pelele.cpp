//detectar si un a�o es biciesto
#include <iostream>
using namespace std;


int main(){
	int bi,bi3,bi2,messi;
	messi=0;
	cout<<"Ingrese el a�o que desea saber si es biciesto o no"<<endl;
	cin>>bi;
	if (bi%4==0 && bi%100!=0 || bi%400==0){
		cout<<"Su a�o es biciesto"<<endl;
		
	}
	else{
		cout<<"Su numero no es biciesto"<<endl;
	}

	system ("pause");
	system ("cls");
	//INgresar a�o final y a�o inivial y decir todos los a�os biciestos que hay en el medio
	cout<<"Ingrese los a�os entre los que quiere saber cuantos bi hay. "<<endl;
	cout<<"A�o inicial: "<<endl;
	cin>>bi2;
	cout<<"A�o final: "<<endl;
	cin>>bi3;
	cout<<"Los a�os bisiesto dentro de este periodo son: "<<bi2<<endl;
	
	for(bi2>=bi3,){
		if (bi2%4==0 && bi2%100!=0 || bi2%400==0){
			cout<<bi2<<endl;
			messi=messi+1;
		}
		bi2=bi2+1;
	}
	cout<<"La cantidad de a�os biciestos dentro del perido marcado son: "<<messi<<endl;
	return 0;	
}
