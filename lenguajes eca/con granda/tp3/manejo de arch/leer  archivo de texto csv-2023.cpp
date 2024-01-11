/*
   eje lectura de archivo csv
*/
#include <iostream>
#include <sstream>
#include <fstream>
#define NOMBRE_ARCHIVO "alumnos-2023.csv"
using namespace std;
int main()
{
    ifstream archivo(NOMBRE_ARCHIVO);
    string linea; 
    char delimitador = ',';
    // Leemos la primer línea para descartarla, pues es el encabezado
    getline(archivo, linea);
    // Leemos todas las líneas
    while (getline(archivo, linea))
    {
        stringstream stream(linea); // Convertir la cadena a un stream
        string idalumno, documento, apellido, nombre;
        // Extraer todos los valores de esa fila
        getline(stream, idalumno, delimitador);
        getline(stream, documento, delimitador);
        getline(stream, apellido, delimitador);
        getline(stream, nombre, delimitador);
        // Imprimir
        cout << "==================" << endl;
        cout << "Id: " << idalumno << endl;
        cout << "Documento: " << documento << endl;
        cout << "Apellido: " << apellido << endl;
        cout << "Nombre: " << nombre << endl;
    }
    archivo.close();
    system("pause");
	return 0;
}
