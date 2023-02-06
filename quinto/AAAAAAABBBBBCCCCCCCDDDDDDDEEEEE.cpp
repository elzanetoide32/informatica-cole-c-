
//matriz que represente un edificio que tiene 6 pisos y por cada piso tiene 4 departamnentos 
//hacer menu repetitivo con -ingresar cantidad de habitantes en el depto (ENTEROS)
//VOLER AL MENO SEGUNDA OPCION MOSTARR cuantas personas hay
//personas por piso, de que piso???
//promedio de por piso 
#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int edificio[6][4], menu, piso=0,i=1,x=0;
	float promA=0,total=0;
	cout<<"Ingrese las personas por departamento: "<<endl;
	for(int a=0;a<6;a++){
		cout<<"Piso: "<<a<<endl;
		for(int b=0;b<4;b++){
			cin>>edificio[a][b];
		}
	}
	while(i==1){
		menu=0, piso=0, total=0, x=0;
		cout<<"Menu de opciones"<<endl<<"1= total de personas por piso"<<endl;
		cout<<"2= promedio de personas por piso"<<endl<<"3=  total de personas"<<endl;
		cout<<"4= salir del programa"<<endl;
		cin>>menu;
		switch(menu){
			case 1:
				cout<<"De que piso quiere saber el total de personas ??"<<endl;
				cin>>piso;
				while(piso>6||piso<0){ ///antiprofe
					cout<<"Negro, posta ingresa un piso valido son 6 no son muchos: "<<endl;
					cin>>piso;
				}
				for(int b=0;b<4;b++){
					total+=edificio[piso][b];
				}
				cout<<"El total es: "<<total<<endl;
			break;
			case 2:
				cout<<"De que piso quiere saber el promedio de personas ??"<<endl;
				cin>>piso;
				while(piso>6||piso<0){ ///antiprofe
					cout<<"Negro, posta ingresa un piso valido son 6 no son muchos: "<<endl;
					cin>>piso;
				}
				for(int b=0;b<4;b++){      
					total+=edificio[piso][b];
					x++;
				}
				cout<<total<<endl;
				promA=total/4;
				cout<<"El promedio es: "<<promA<<endl;
			break;	
			case 3:
				total=0;
				for(int a=0;a<6;a++){
					for(int b=0;b<4;b++){
					total=edificio[a][b]+total;
					}
				}	
				cout<<"El total del edificio es: "<<total<<endl;
			break;
			case 4: 
				cout<<"NO vemos en Narnia"<<endl;
				exit (0);
			break;
			default:
				cout<<"Negro escribi un numero valido, no jodas :)"<<endl;
				cin>>menu;
			break;
		}
		cout<<"Para repetir el menu toque 1"<<endl;
		cin>>i;
	}
	return 0;
}                        