/*
/////una empresa necesita realizar una factura con el siguente formato:(dar estilo al texto)
/////los datos ingresados x el usuario
nombre de la empresa
                                          n° de remito(string)
 numeroPieza(num con func random)    cantidad    stock
 product1
 product2
 product3
 product4

                           enviado: (x quien)
 -----
 firma(espacio)
*/

#include<iostream>
#include<stdlib.h>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;
void escribirFrases();
int cantPiez [3];
int cantStock [3];
int main(){    
    srand(time(nullptr));
	escribirFrases();	
	system("pause");
	return 0;
} 

void escribirFrases(){
	ofstream archivo;
	string nombreEmpresa,numRemito,enviado,nombreArchivo,Quien;
	char rpt;
    ///////archivos/////
	cout<<"Digite el nombre del archivo: ";
	getline(cin,nombreArchivo);
	archivo.open(nombreArchivo.c_str(),ios::out); //Creamos el archivo
	if(archivo.fail()){ //Si a ocurrido algun error
		cout<<"No se pudo abrir el archivo";
		exit(1);
	}	
    //////////////////ingreso de datos///////////////////
	fflush(stdin);
	cout<<"Digite el nombre de la empresa: ";
	getline(cin,nombreEmpresa);
	archivo<<nombreEmpresa<<endl;
	cout<<"Digite el numero de remito: ";
	getline(cin,numRemito);
	archivo<<"                                     "<<numRemito<<endl;
    for(int c=0;c<4;c++){
        cout<<"ingrese la cantidad de la pieza Numero: "<<c<<endl;
        cin>>cantPiez[c];         
    }

    for(int s=0;s<4;s++){
        cout<<"ingrese el stock de la pieza Numero: "<<s<<endl;
        cin>>cantStock[s];
    }
    archivo<<"numero de pieza    "<<"cantidad    "<<"stock"<<endl;
    archivo<<rand()%9999 +1<<"                 "<<cantPiez[0]<<"          "<<cantStock[0]<<endl;
    archivo<<rand()%9999 +1<<"                 "<<cantPiez[1]<<"          "<<cantStock[1]<<endl;
    archivo<<rand()%9999 +1<<"                 "<<cantPiez[2]<<"          "<<cantStock[2]<<endl;
    archivo<<rand()%9999 +1<<"                 "<<cantPiez[3]<<"          "<<cantStock[3]<<endl;

    cout<<"ingrese quien es el que envia el producto: ";
    cin>>Quien;
    archivo<<"                                     "<<"enviado: "<<Quien<<endl;
    archivo<<"----------------"<<endl;
    archivo<<"               |"<<endl;
    archivo<<"               |"<<endl; 
	archivo.close(); //Cerramos el archivo
}
