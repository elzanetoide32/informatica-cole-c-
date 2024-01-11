#include <iostream>
#include <cstdlib>
#include <cstring>
#include <ctype.h>
#include <conio.c>
#include <iostream>
using namespace std;
void EscribirEncrypt();
void LeerEncrypt();

 
int main()
{   
    
    char a=219;//219;        
clrscr();
system("color 0A");


for(int i = 0; i<1; i++)
{
      system("cls");
      cout<<"\t\t INICIANDO SISTEMA DEL ENCRIPTACION ESPERE UN MOMENTO..."<<endl;
      cout<<"\t\t ->DISEÑADO POR FERNANDO ULLOA Y OSCAR CORTEZ<-"<<endl;
      cout<<"\t\t ->PARA VIOS-UP CREATIVE COMMONS 3.0     2012<-"<<endl;
       gotoxy(5,21);
      cout<<"CARGANDO APLICACION V4.01";
      gotoxy(5,22); 
          for (int j=0; j<55;j++)
          {     Sleep(30);
                cout<<a;               
          textcolor(WHITE);
          }

cout<<" Listo"<<endl;
cout<<endl<<"\t \a \a";
}
    system("cls");
    Sleep(1000);
    system("color f2");
    char opcion, finalizar='0';
    while(finalizar=='0')
    {
    cout<<"Bienvenido, seleccione una opcion: "<<endl
    <<"-------------------------------------------------------------------"<<endl
    <<"1.....................Encriptar y guadar una frase."<<endl
    <<"2.....................Leer y desencriptar una frase."<<endl
    <<"3.....................Salir del programa."<<endl   
    <<"-------------------------------------------------------------------"<<endl
    <<"Opcion a seleccionar: ";
    cin>>opcion;
    system("cls");
    switch (opcion)
    {
           case '1': EscribirEncrypt(); break;
           case '2': LeerEncrypt(); break;
           case '3': finalizar='1'; break;        
           }
    }
    return 0;
}

void EscribirEncrypt()
{
    FILE* file;
    file=fopen("encrypted.txt", "ab");
    char Alphabet[27];
    char Decrypter[27];
    char Entrada[31];
    char Salida[31];
    bool espacio=true;
    strcpy(Alphabet, "abcdefghijklmnopqrstuvwxyz");
    strcpy(Decrypter, "!#$%&/()=?d*+[W]a-_x,;:yk~");
    cout<<"Digite la frase que desea encriptar: ";
    cin.ignore();
    cin.getline(Entrada, 31);
    for(int x=0;x<=strlen(Entrada); x++)
    Entrada[x]=tolower(Entrada[x]);
    for(int x=0;x<=strlen(Entrada); x++)
       {for(int y=0;y<=strlen(Decrypter); y++)    
         if(Entrada[x]==Alphabet[y])
           {Salida[x]=Decrypter[y];
               espacio=false;
               break;};
       if(espacio==true)
       Salida[x]=' ';
       espacio=true;};
    cout<<endl<<"La palabra encriptada: "<<Salida<<", ha sido guardada."<<endl<<endl;
    fwrite(&Salida, sizeof(Salida), 1, file);
    fclose(file);
    system("pause");
    system("cls");
}

void LeerEncrypt()
{
    FILE* file;
    file=fopen("encrypted.txt", "rb");
    if(file==NULL)
    {cout<<"No se ha encriptado ninguna frase anteriormente. Por favor realizarlo y"<<endl
    <<"vuelva a intentarlo."<<endl
    <<"-------------------------------------------------------------------"<<endl;
    system("cls");
    return;};
    char Alphabet[27];
    char Decrypter[27];
    char Entrada[31];
    char Salida[31];
    bool espacio=true;
    strcpy(Alphabet, "abcdefghijklmnopqrstuvwxyz");
    strcpy(Decrypter, "!#$%&/()=?d*+[W]a-_x,;:yk~");
    fread(&Entrada, sizeof(Entrada), 1, file);
    cout<<"La frase encriptada es: "<<Entrada<<endl;
    for(int x=0;x<=strlen(Entrada); x++)
       {for(int y=0;y<=strlen(Decrypter); y++)    
         if(Entrada[x]==Decrypter[y])
           {Salida[x]=Alphabet[y];
               espacio=false;
               break;};
       if(espacio==true)
       Salida[x]=' ';
       espacio=true;};
    cout<<endl<<"La frase desencriptada (en minuscula todo) es: "<<Salida<<endl<<endl;
    fclose(file);
    remove("encrypter.txt");
    system("pause");
    system("cls");
}