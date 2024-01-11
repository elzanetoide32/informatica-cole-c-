#include<iostream>
#include<fstream>
using namespace::std;

//declaracion de prototipos de metodos
void crear_stock();
void menu();

//implementacion de metodos
void crear_alumno(){
    ofstream archivo("alumnos-creacion.csv", ios::app);
    if(!archivo){
        cout<<"Error al crear el archivo 'alumnos.csv'"<<endl;
    }else{
        long num_id, documento;
        string apellido,nombre;
        int estado;
        cout<<"Ingrese el numero de ID: ";
        cin>>num_id;
        fflush(stdin);//limpiar el buffer de lectura
        cout<<"Ingrese el documento: ";
        cin >> documento;
        fflush(stdin);//limpiar el buffer de lectura
        cout<<"Ingrese el apellido: ";
        getline(cin, apellido);
        fflush(stdin);//limpiar el buffer de lectura
        cout<<"Ingrese el nombre: ";
        cin>>nombre;
        fflush(stdin);//limpiar el buffer de lectura

        archivo<<num_id<<";"<<documento<<";"<<apellido<<";"<<nombre<<endl;
        archivo.close();

        cout<<"Se ingreso con exito el alumnos"<<endl<<endl;
    }
}

void menu(){
    int opc;
    do{
        cout<<"Menu de opciones"<<endl;
        cout<<"1. Crear alumno"<<endl;
        cout<<"0. Salir"<<endl;
        cout<<"Seleccione una opcion: ";
        cin>>opc;
        switch(opc){
            case 1: crear_alumno(); break;
            case 0: break;
            default: cout<<"Opcion incorrecta"<<endl<<endl;
        }
    }while(opc != 0);
}

int main(){
    menu();
    return 0;
}

