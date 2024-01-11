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
	ofstream archivo ("ejemplo.html");
	string nombreEmpresa,numRemito,enviado,nombreArchivo,Quien;
	char rpt;	
    //////////////////ingreso de datos///////////////////
	fflush(stdin);
    archivo<<"<!DOCTYPE html>"<<endl;
    archivo<<"<html lang='en'>"<<endl;
    archivo<<"<head>"<<endl;
    archivo<<"<meta charset='UTF-8'>"<<endl;
    archivo<<"<meta http-equiv='X-UA-Compatible' content='IE=edge'>"<<endl;
    archivo<<"<meta name='viewport' content='width=device-width, initial-scale=1.0'>"<<endl;
    archivo<<"<title>archivos2</title>"<<endl;
    archivo<<"</head>"<<endl;
    archivo<<"<body>"<<endl;
////////inicializar el html///////
	cout<<"Digite el nombre de la empresa: ";
	getline(cin,nombreEmpresa);
    cout<<"Digite el numero de remito: ";
	getline(cin,numRemito);
	archivo<<"<div class='inicio'>"<<endl;
    archivo<<"nombre de la empresa: "<<nombreEmpresa<<"<br>"<<endl;
    archivo<<"&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;numero de remito: "<<numRemito<<"<br><br>"<<endl;
    archivo<<"</div>"<<endl;
	for(int c=0;c<4;c++){
        cout<<"ingrese la cantidad de la pieza Numero: "<<c<<endl;
        cin>>cantPiez[c];         
    }
    for(int s=0;s<4;s++){
        cout<<"ingrese el stock de la pieza Numero: "<<s<<endl;
        cin>>cantStock[s];
    }
    cout<<"ingrese quien es el que envia el producto: ";
    cin>>Quien;
//////tabla//////
    archivo<<"<table>"<<endl;
    archivo<<"<tr>"<<endl;
    archivo<<"<td>numero de la pieza</td>"<<endl;
    archivo<<"<td>cantidad</td>"<<endl;
    archivo<<"<td>stock</td>"<<endl;
    archivo<<"</tr>"<<endl;           
    archivo<<"<tr>"<<endl;
    archivo<<"<td>"<<rand()%9999 +1<<"</td>"<<endl;
    archivo<<"<td>"<<cantPiez[0]<<"</td>"<<endl;
    archivo<<"<td>"<<cantStock[0]<<"</td>"<<endl;
    archivo<<"</tr>"<<endl;
    archivo<<"<tr>"<<endl;
    archivo<<"<td>"<<rand()%9999 +1<<"</td>"<<endl;
    archivo<<"<td>"<<cantPiez[1]<<"</td>"<<endl;
    archivo<<"<td>"<<cantStock[1]<<"</td>"<<endl;
    archivo<<"</tr>"<<endl;
    archivo<<"<tr>"<<endl;
    archivo<<"<td>"<<rand()%9999 +1<<"</td>"<<endl;
    archivo<<"<td>"<<cantPiez[2]<<"</td>"<<endl;
    archivo<<"<td>"<<cantStock[2]<<"</td>"<<endl;
    archivo<<"</tr>"<<endl;
    archivo<<"<tr>"<<endl;
    archivo<<"<td>"<<rand()%9999 +1<<"</td>"<<endl;
    archivo<<"<td>"<<cantPiez[3]<<"</td>"<<endl;
    archivo<<"<td>"<<cantStock[3]<<"</td>"<<endl;
    archivo<<"</tr>"<<endl;           
    archivo<<"</table>"<<endl;

    archivo<<"&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;enviado por: "<<Quien<<"<br><br>"<<endl;
    archivo<<"<div class='fin'>"<<endl;
    archivo<<"----------------<br>"<<endl;
    archivo<<"Firma&emsp;&emsp;&emsp;&emsp;&emsp;|<br>"<<endl;
    archivo<<"&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;|<br>"<<endl;
    archivo<<"</div>"<<endl;
    ///estilos///
    archivo<<"<style>"<<endl;
    archivo<<"td{"<<endl;
    archivo<<"background-color: rgb(7, 68, 97);"<<endl;
    archivo<<"padding: 10px;"<<endl;
    archivo<<"margin: 10px;"<<endl;
    archivo<<"border-radius: 10px;"<<endl;
    archivo<<"}"<<endl;
    archivo<<".fin{"<<endl;
    archivo<<"width:120px;"<<endl;
    archivo<<"display: inline-block;"<<endl;
    archivo<<"background-color:rgb(7, 68, 97) ;"<<endl;
    archivo<<"border-radius: 5px;"<<endl;
    archivo<<"}"<<endl;
    archivo<<".inicio{"<<endl;
    archivo<<"width: 450px;"<<endl;
    archivo<<"background-color: rgb(7, 68, 97);"<<endl;
    archivo<<"border-radius: 5px;"<<endl;
    archivo<<"display: inline-block;"<<endl;
    archivo<<"}"<<endl;
    archivo<<"</style>"<<endl;   
	archivo.close(); //Cerramos el archivo
    
}
