#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<stdlib.h>
#include<list>
#include<time.h>

#define ARRIBA 72
#define IZQUIERDA 75
#define DERECHA 77
#define ABAJO 80
#define ESPACIO 32
#define ESC 27
#define ENTER 13

using namespace std;

void gotoxy(int x, int y){
HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

void ocultarcursor(){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_CURSOR_INFO cci;
	cci.dwSize = 1;
	cci.bVisible = FALSE;
	SetConsoleCursorInfo(hcon, &cci);
}

char ma[22][22] = 	 {{' ',' ','A',' ','B',' ','C',' ','D',' ','E',' ','F',' ','G',' ','H',' ','I',' ','J',' '},
					  {' ',' ','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_',' '},
					  {'0','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'1','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'2','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'3','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'4','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'5','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'6','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'7','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'8','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'9','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ',' ','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',' '},};
					  
					  
char ju[22][22] =   { {' ',' ','A',' ','B',' ','C',' ','D',' ','E',' ','F',' ','G',' ','H',' ','I',' ','J',' '},
					  {' ',' ','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_',' '},
					  {'0','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'1','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'2','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'3','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'4','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'5','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'6','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'7','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'8','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'9','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ',' ','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',' '},};
					  

char en[22][22] =   { {' ',' ','A',' ','B',' ','C',' ','D',' ','E',' ','F',' ','G',' ','H',' ','I',' ','J',' '},
					  {' ',' ','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_','_',' '},
					  {'0','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'1','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'2','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'3','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'4','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'5','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'6','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'7','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'8','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|','-','|'},
					  {'9','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|',' ','|'},
					  {' ',' ','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-','-',' '},};

					  

class jugador{
	
	private:
		int mapa1, mapa=28;
		int matriz1, matriz=2;
		int ca;
		int x1, y1;
		int x2,y2,f,f1;
		int x3,y3,r=1;
		char dato;
		int turno=1, turno1;
		int ver;
		int vidaju=0;
		
		public:
			
			int retornarvidaju(){return vidaju;}
			void pintarmapaju();
			int capturaX(){return x1;}
			int capturaY(){return y1;}
			int obtener();
			void pintar_portaaviones(int &, int &, int );
			void pintar_submarino(int &, int &, int );
			void pintar_destructor(int &, int &, int );
			void pintar_fragata(int &, int &, int );
			void borrar_portaaviones(int &, int &, int );
			void borrar_submarino(int &, int &, int );
			void borrar_destructor(int &, int &, int );
			void borrar_fragata(int &, int &, int );
			void mover_portaaviones(int &, int &, int );
			void mover_submarino(int &, int &, int );
			void mover_destructor(int &, int &, int );
			void mover_fragata(int &, int &, int );
			void pintar_portaaviones_permanente(int , int , int );
			void pintar_submarino_permanente(int , int , int );
			void pintar_destructor_permanente(int , int , int );
			void pintar_fragata_permanente(int , int , int );
			int convertir_matriz(int);
			int convertir_mapa(int);
			int IAobtener();
			int IAgeneral();
			int IAdificultad(char );
			int IAverificar(int, int);		
};

void jugador::pintar_portaaviones(int &x, int &y, int c)
{
	if(c == 0)
	{
		gotoxy(x,y);cout<<"P";
		gotoxy(x,y+2);cout<<"P";
		gotoxy(x,y+4);cout<<"P";
		gotoxy(x,y+6);cout<<"P";
		
	}
	if(c == 1)
	{
		gotoxy(x,y);cout<<"P";
		gotoxy(x+2,y);cout<<"P";
		gotoxy(x+4,y);cout<<"P";
		gotoxy(x+6,y);cout<<"P";
	}
	
}

void jugador::borrar_portaaviones(int &x, int &y, int c)
{
	if(c == 0)
	{
		gotoxy(x,y);cout<<" ";
		gotoxy(x,y+2);cout<<" ";
		gotoxy(x,y+4);cout<<" ";
		gotoxy(x,y+6);cout<<" ";
		
	}
	if(c == 1)
	{
		gotoxy(x,y);cout<<" ";
		gotoxy(x+2,y);cout<<" ";
		gotoxy(x+4,y);cout<<" ";
		gotoxy(x+6,y);cout<<" ";
	}
	
}

void jugador::mover_portaaviones(int &x, int &y, int c)
{	
	if(kbhit()){
	jugador::borrar_portaaviones(x,y,c);	
	char tecla = getch();
	if(tecla == IZQUIERDA && x>2) x=x-2;
	if(c == 0)
	{
		if(tecla == DERECHA && x<20) x=x+2;
	}
	if(c == 1)
	{
		if(tecla == DERECHA && x<14) x=x+2;
	}
	if(tecla == ARRIBA && y>28) y=y-2;
	if(c == 0)
	{
		if(tecla == ABAJO && y<40) y=y+2;
	}
	if(c == 1)
	{
		if(tecla == ABAJO && y<46) y=y+2;
	}
	jugador::pintar_portaaviones(x,y,c);
	x1=x;
	y1=y;
	}
	
}

void jugador::pintar_submarino(int &x, int &y, int c)
{
	if(c == 0)
	{
		gotoxy(x,y);cout<<"S";
		gotoxy(x,y+2);cout<<"S";
		gotoxy(x,y+4);cout<<"S";
	}
	if(c == 1)
	{
		gotoxy(x,y);cout<<"S";
		gotoxy(x+2,y);cout<<"S";
		gotoxy(x+4,y);cout<<"S";
	}
	
}

void jugador::borrar_submarino(int &x, int &y, int c)
{
	if(c == 0)
	{
		gotoxy(x,y);cout<<" ";
		gotoxy(x,y+2);cout<<" ";
		gotoxy(x,y+4);cout<<" ";	
	}
	if(c == 1)
	{
		gotoxy(x,y);cout<<" ";
		gotoxy(x+2,y);cout<<" ";
		gotoxy(x+4,y);cout<<" ";
	}
	
}

void jugador::mover_submarino(int &x, int &y, int c)
{	
	if(kbhit()){
	jugador::borrar_submarino(x,y,c);	
	char tecla = getch();
	if(tecla == IZQUIERDA && x>2) x=x-2;
	if(c == 0)
	{
		if(tecla == DERECHA && x<20) x=x+2;
	}
	if(c == 1)
	{
		if(tecla == DERECHA && x<16) x=x+2;
	}
	if(tecla == ARRIBA && y>28) y=y-2;
	if(c == 0)
	{
		if(tecla == ABAJO && y<42) y=y+2;
	}
	if(c == 1)
	{
		if(tecla == ABAJO && y<46) y=y+2;
	}
	jugador::pintar_submarino(x,y,c);
	x1=x;
	y1=y;
	}
	
}

void jugador::pintar_destructor(int &x, int &y, int c)
{
	if(c == 0)
	{
		gotoxy(x,y);cout<<"D";
		gotoxy(x,y+2);cout<<"D";
		gotoxy(x,y+4);cout<<"D";
	}
	if(c == 1)
	{
		gotoxy(x,y);cout<<"D";
		gotoxy(x+2,y);cout<<"D";
		gotoxy(x+4,y);cout<<"D";
	}
	
}

void jugador::borrar_destructor(int &x, int &y, int c)
{
	if(c == 0)
	{
		gotoxy(x,y);cout<<" ";
		gotoxy(x,y+2);cout<<" ";
		gotoxy(x,y+4);cout<<" ";	
	}
	if(c == 1)
	{
		gotoxy(x,y);cout<<" ";
		gotoxy(x+2,y);cout<<" ";
		gotoxy(x+4,y);cout<<" ";
	}
	
}

void jugador::mover_destructor(int &x, int &y, int c)
{	
	if(kbhit()){
	jugador::borrar_destructor(x,y,c);	
	char tecla = getch();
	if(tecla == IZQUIERDA && x>2) x=x-2;
	if(c == 0)
	{
		if(tecla == DERECHA && x<20) x=x+2;
	}
	if(c == 1)
	{
		if(tecla == DERECHA && x<16) x=x+2;
	}
	if(tecla == ARRIBA && y>28) y=y-2;
	if(c == 0)
	{
		if(tecla == ABAJO && y<42) y=y+2;
	}
	if(c == 1)
	{
		if(tecla == ABAJO && y<46) y=y+2;
	}
	jugador::pintar_destructor(x,y,c);
	x1=x;
	y1=y;
	}
	
} 

void jugador::pintar_fragata(int &x, int &y, int c)
{
	if(c == 0)
	{
		gotoxy(x,y);cout<<"F";
	}
	if(c == 1)
	{
		gotoxy(x,y);cout<<"F";
	}
	
}

void jugador::borrar_fragata(int &x, int &y, int c)
{
	if(c == 0)
	{
		gotoxy(x,y);cout<<" ";	
	}
	if(c == 1)
	{
		gotoxy(x,y);cout<<" ";
	}
	
}

void jugador::mover_fragata(int &x, int &y, int c)
{	
	if(kbhit()){
	jugador::borrar_fragata(x,y,c);	
	char tecla = getch();
	if(tecla == IZQUIERDA && x>2) x=x-2;
	if(c == 0)
	{
		if(tecla == DERECHA && x<20) x=x+2;
	}
	if(c == 1)
	{
		if(tecla == DERECHA && x<20) x=x+2;
	}
	if(tecla == ARRIBA && y>28) y=y-2;
	if(c == 0)
	{
		if(tecla == ABAJO && y<46) y=y+2;
	}
	if(c == 1)
	{
		if(tecla == ABAJO && y<46) y=y+2;
	}
	jugador::pintar_fragata(x,y,c);
	x1=x;
	y1=y;
	}	
} 

void jugador::pintar_portaaviones_permanente(int x, int y, int c)
{
	jugador::pintar_portaaviones(x,y,c);
	ca=jugador::convertir_matriz(y);
	if(c == 0)
	{
		ju[ca][x]='P';
		ju[ca+2][x]='P';
		ju[ca+4][x]='P';
		ju[ca+6][x]='P';
		
	}
	if(c == 1)
	{
		ju[ca][x]='P';
		ju[ca][x+2]='P';
		ju[ca][x+4]='P';
		ju[ca][x+6]='P';
	}
		
}

void jugador::pintar_submarino_permanente(int x, int y, int c)
{
	jugador::pintar_submarino(x,y,c);
	ca=jugador::convertir_matriz(y);
	if(c == 0)
	{
		ju[ca][x]='S';
		ju[ca+2][x]='S';
		ju[ca+4][x]='S';
	}
	if(c == 1)
	{
		ju[ca][x]='S';
		ju[ca][x+2]='S';
		ju[ca][x+4]='S';
	}
} 

void jugador::pintar_destructor_permanente(int x, int y, int c)
{
	jugador::pintar_destructor(x,y,c);
	ca=jugador::convertir_matriz(y);
	if(c == 0)
	{
		ju[ca][x]='D';
		ju[ca+2][x]='D';
		ju[ca+4][x]='D';
	}
	if(c == 1)
	{
		ju[ca][x]='D';
		ju[ca][x+2]='D';
		ju[ca][x+4]='D';
	}
}

void jugador::pintar_fragata_permanente(int x, int y, int c)
{
	jugador::pintar_fragata(x,y,c);
	ca=jugador::convertir_matriz(y);
	if(c == 0)
	{
		ju[ca][x]='F';
	}
	if(c == 1)
	{
		ju[ca][x]='F';
	}
}

int jugador::convertir_matriz(int y)
{
	while(true)
	{
		if(mapa==y)
		{
			matriz1 = matriz;
			mapa=28;
			matriz=2;
			return matriz1;
		}
		else
		{
			matriz=matriz+2;
			mapa=mapa+2;
		}
	}
}

int jugador::convertir_mapa(int y)
{
	while(true)
	{
		if(matriz == y)
		{
			mapa1 = mapa;
			mapa=28;
			matriz = 2;
			return mapa1;
		}
		else
		{
			matriz=matriz+2;
			mapa=mapa+2;
		}
	}
}

void jugador::pintarmapaju()
{
	for(int i=0;i<22;i++)
	{
		cout<<endl;
		for(int j=0;j<22;j++)
		{
			cout<<ju[i][j];
		}
	}	
}

int jugador::obtener()
{
	while(true)
	{
		f=rand()%19+2;
		if(f%2 == 0) return f;	
	}
}

int jugador::IAobtener()
{
	while(true)
	{
		x2=jugador::obtener();
		y2=jugador::obtener();
		f1=jugador::convertir_mapa(y2);
		
		if(ju[y2][x2] != 'X' && ju[y2][x2] != 'O')
		{
			if(ju[y2][x2] == 'P' || ju[y2][x2] == 'S' || ju[y2][x2] == 'D' || ju[y2][x2] == 'F')
			{
				if(ju[y2][x2] == 'P') dato = 'P';
				if(ju[y2][x2] == 'S') dato = 'S';
				if(ju[y2][x2] == 'D') dato = 'D';
				if(ju[y2][x2] == 'F') dato = 'F';
				ju[y2][x2]='O';
				turno1=2;
				vidaju=vidaju+1;
				return 1;
			}
			else
			{
				ju[y2][x2]='X';
				turno1=1;
				return 2;
			}
			
		}
	}
}

int jugador::IAverificar(int x, int y)
{
			if(ju[y][x] == 'P' || ju[y][x] == 'S' || ju[y][x] == 'D' || ju[y][x] == 'F')
			{
				ju[y][x]='O';
				vidaju=vidaju+1;
				return 1;
			}
}

int jugador::IAgeneral()
{
	if(turno1 ==2) turno =2;
	if(turno1 ==1) turno =1;
	if(turno == 1) jugador::IAobtener();
	
	if(turno == 2)
	{
		ver=jugador::IAdificultad(dato);
		if(ver==1) jugador::IAverificar(x3,y3);
		if(ver==2)
		{
			jugador::IAobtener();
			turno1=1;	
		} 
	}
	
}

int jugador::IAdificultad(char A)
{
	do
	{
		for(int i=2;i<21;i++)
		{
			for(int j=2;j<21;j++)
			{
				if(ju[i][j] == A)
				{
					x3=i;
					y3=j;
					ju[i][j]='O';
					return 1;
				}
			}
		}
		return 2;
	}while(r==1);
	
}


class enemigo : public jugador{
	
	private:
		int x1,x2,x3,x4;
		int y1,y2,y3,y4;
		int c1,c2,c3,c4;
		int x,y,c;
		int d;
		int vidaen=0;
		
		public:
			int retornarvidaen(){return vidaen;}
			void pintarmapa();
			void pintarmapaen();
			void pintar(int &, int &);
			void borrar(int &, int &);
			void mover(int &, int &);
			int obtenerX(int, int);
			int obtenerY(int, int);
			int obtenerC();
			void pintar_naves();
			void pint_portaaviones(int, int, int);
			void pint_submarino(int, int, int);
			void pint_destructor(int, int, int);
			void pint_fragata(int, int, int);
			void disparo(int, int);
};

void enemigo::pintarmapa()
{
	for(int i=0;i<22;i++)
	{
		cout<<endl;
		for(int j=0;j<22;j++)
		{
			cout<<ma[i][j];
		}
	}	
}

void enemigo::pintarmapaen()
{
	for(int i=0;i<22;i++)
	{
		cout<<endl;
		for(int j=0;j<22;j++)
		{
			cout<<en[i][j];
		}
	}
}

void enemigo::borrar(int &x, int &y)
{
	gotoxy(x,y);cout<<" ";
}

void enemigo::pintar(int &x, int &y)
{
	gotoxy(x,y);cout<<">";
}

void enemigo::mover(int &x, int &y)
{
	
	if(kbhit()){
	d=y-1;
	if(en[d][x] != 'X' && en[d][x] != 'O')enemigo::borrar(x,y);
	char tecla = getch();
	if(tecla == IZQUIERDA && x>2) x=x-2;
	if(tecla == DERECHA && x<20) x=x+2;
	if(tecla == ARRIBA && y>3) y=y-2;
	if(tecla == ABAJO && y<20) y=y+2;
	d=y-1;
	if(en[d][x] != 'X' && en[d][x] != 'O')enemigo::pintar(x,y);
	}
}

int enemigo::obtenerX(int c, int v)
{
	if(v == 0)
	{
		if(c == 0)
		{
			while(true)
			{
				x=rand()%19+2;
				if(x%2 == 0) return x;
			}
		}
		if(c == 1)
		{
			while(true)
			{
				x=rand()%19+2;
				if(x%2 == 0) return x;
			}
		}
	}
	if(v == 1)
	{
		if(c == 0)
		{
			while(true)
			{
				x=rand()%19+2;
				if(x%2 == 0) return x;
			}
		}
		if(c == 1)
		{
			while(true)
			{
				x=rand()%13+2;
				if(x%2 == 0) return x;
			}
		}
	}
	if(v == 2)
	{
		if(c == 0)
		{
			while(true)
			{
				x=rand()%19+2;
				if(x%2 == 0) return x;
			}
		}
		if(c == 1)
		{
			while(true)
			{
				x=rand()%15+2;
				if(x%2 == 0) return x;
			}
		}
	}
}

int enemigo::obtenerY(int c, int v)
{
	if(v == 0)
	{
		if(c == 0)
		{
			while(true)
			{
				y=rand()%19+2;
				if(y%2 == 0) return y;
			}
		}
		if(c == 1)
		{
			while(true)
			{
				y=rand()%19+2;
				if(y%2 == 0) return y;
			}
		}
	}
	if(v == 1)
	{
		if(c == 0)
		{
			while(true)
			{
				y=rand()%13+2;
				if(y%2 == 0) return y;
			}
		}
		if(c == 1)
		{
			while(true)
			{
				y=rand()%19+2;
				if(y%2 == 0) return y;
			}
		}
	}
	if(v == 2)
	{
		if(c == 0)
		{
			while(true)
			{
				y=rand()%15+2;
				if(y%2 == 0) return y;
			}
		}
		if(c == 1)
		{
			while(true)
			{
				y=rand()%19+2;
				if(y%2 == 0) return y;
			}
		}
	}
}

int enemigo::obtenerC()
{
	c=rand()%2;
	return c;
}

void enemigo::pint_portaaviones(int x, int y, int c)
{
	if(c == 0)
	{
		en[y][x]='P';
		en[y+2][x]='P';
		en[y+4][x]='P';
		en[y+6][x]='P';
		
	}
	if(c == 1)
	{
		en[y][x]='P';
		en[y][x+2]='P';
		en[y][x+4]='P';
		en[y][x+6]='P';
	}
}

void enemigo::pint_submarino(int x, int y, int c)
{
	if(c == 0)
	{
		en[y][x]='S';
		en[y+2][x]='S';
		en[y+4][x]='S';
	}
	if(c == 1)
	{
		en[y][x]='S';
		en[y][x+2]='S';
		en[y][x+4]='S';
	}
}

void enemigo::pint_destructor(int x, int y, int c)
{
	if(c == 0)
	{
		en[y][x]='D';
		en[y+2][x]='D';
		en[y+4][x]='D';
	}
	if(c == 1)
	{
		en[y][x]='D';
		en[y][x+2]='D';
		en[y][x+4]='D';
	}
}

void enemigo::pint_fragata(int x, int y, int c)
{
	if(c == 0)
	{
		en[y][x]='F';
	}
	if(c == 1)
	{
		en[y][x]='F';
	}
}

void enemigo::pintar_naves()
{
	c1=enemigo::obtenerC();
	x1=enemigo::obtenerX(c1,1);
	y1=enemigo::obtenerY(c1,1);
	enemigo::pint_portaaviones(x1,y1,c1);
	
	while(true)
	{
		c2=enemigo::obtenerC();
		x2=enemigo::obtenerX(c2,2);
		y2=enemigo::obtenerY(c2,2);
		if(c2 == 0)
		{
			if(en[y2][x2] != 'P' && en[y2+2][x2] != 'P' && en[y2+4][x2] != 'P')
			{
				enemigo::pint_submarino(x2,y2,c2);
				break;
			}
		}
		if(c2 == 1)
		{
			if(en[y2][x2] != 'P' && en[y2][x2+2] != 'P' && en[y2][x2+4] != 'P')
			{
				enemigo::pint_submarino(x2,y2,c2);
				break;
			}
		}
	}
	
	
	while(true)
	{
		c3=enemigo::obtenerC();
		x3=enemigo::obtenerX(c3,2);
		y3=enemigo::obtenerY(c3,2);
		if(c3 == 0)
		{
			if(en[y3][x3] != 'P' && en[y3+2][x3] != 'P' && en[y3+4][x3] != 'P' && en[y3][x3] != 'S' && en[y3+2][x3] != 'S' && en[y3+4][x3] != 'S')
			{
				enemigo::pint_destructor(x3,y3,c3);
				break;
			}
		}
		if(c3 == 1)
		{
			if(en[y3][x3] != 'P' && en[y3][x3+2] != 'P' && en[y3][x3+4] != 'P' && en[y3][x3] != 'S' && en[y3][x3+2] != 'S' && en[y3][x3+4] != 'S')
			{
				enemigo::pint_destructor(x3,y3,c3);
				break;
			}
		}
	}
	
	while(true)
	{
		c4=enemigo::obtenerC();
		x4=enemigo::obtenerX(c4,0);
		y4=enemigo::obtenerY(c4,0);
		if(c4 == 0)
		{
			if(en[y4][x4] != 'P' && en[y4][x4] != 'S' && en[y4][x4] != 'D')
			{
				enemigo::pint_fragata(x4,y4,c4);
				break;
			}
		}
		if(c4 == 1)
		{
			if(en[y4][x4] != 'P' && en[y4][x4] != 'S' && en[y4][x4] != 'D')
			{
				enemigo::pint_fragata(x4,y4,c4);
				break;
			}
		}
	}
}

void enemigo::disparo(int x, int y)
{
	y=y-1;
	if(en[y][x] == 'P' || en[y][x] == 'S' || en[y][x] == 'D' || en[y][x] == 'F' || en[y][x] == 'O')
	{
		en[y][x]='O';
		y=y+1;
		gotoxy(x,y);cout<<"O";
		vidaen=vidaen+1;
	}
	else
	{
		en[y][x]='X';
		y=y+1;
		gotoxy(x,y);cout<<"X";
	}
	
}

class menu
{
	public:
		void portada();
		void instrucciones();
		void mision();
	
};

void menu::portada()
{
	char portada[20][80] ={
    "                                                                             ",
    "   aasaaaaaa         aas    aaasasaasaa  aaaaaaaaaaa  aaa        aaaaaaaaaa  ",
    "   aas    aaa       aasaa       aas          aaa      aaa        aaa         ",
    "   aas    aaa      aas aaa      aas          aaa      aaa        aaa         ",
    "   aaaaaaaaa      aaa   aaa     aaa          aaa      aaa        aaaaaaaaa   ",
    "   aaa    aaa    aaaaaaaaaaa    aaa          aaa      aaa        aaa         ",
    "   aaa    aaa   aaa       aaa   aaa          aaa      aaa        aaa         ",
    "   aaaaaaaaa   aaa         aaa  aaa          aaa      aaaaaaaaa  aaaaaaaaaa  ",
    "                                                                             ",
    "    ssssssssssss   sss       sss   ssssssssssssss     ssssssssssss           ",
    "    ssssssssssss   sss       sss         sss          sss        ss          ",
    "    sss            sss       sss         sss          sss         ss         ",
    "    sss            sss       sss         sss          sss         ss         ",
    "    ssssssssssss   sssssssssssss         sss          sss        ss          ",
    "    ssssssssssss   sssssssssssss         sss          ssssssssssss           ",
    "             sss   sss       sss         sss          sss                    ",
    "             sss   sss       sss         sss          sss                    ",
    "     sssssssssss   sss       sss         sss          sss                    ",
    "     sssssssssss   sss       sss    sssssssssssss     sss                    ",
    "                                                                             ",};
for(int j=0;j<80;j++){
        for(int i=0;i<20;i++){
            gotoxy(j+5,i+5);printf("%c",portada[i][j]);}}
    gotoxy(41,34);cout<<"CREADOR Y DISENO: elzanetoide";
    gotoxy(41,28);cout<<"CARGANDO";
    for(int i=0;i<40;i++){
            gotoxy(i+25,30);printf("%c",219);
            Sleep(100);
            }
            getch();
}

void menu::instrucciones()
{
char movimiento[11][76] ={
"           FLECHAS                                                         ",
"           ______                                                          ",
"          |      |                                                         ",
"          |   |  |                                                         ",
"    ______|______|______      ______       ______          ______          ",
"   |      |      |      |    |      |     |      |        |      |         ",
"   | <--  |   |  |  --> |    |   Z  |     |   X  |        |   C  |         ",
"   |______|______|______|    |______|     |______|        |______|         ",
"                                                                           ",
"     TECLAS DE MOVIMIENTO    DISPAROS   COLOCAR BARCO  CAMBIAR ORIENTACION ",};    

	for(int j=0;j<76;j++){
        for(int i=0;i<11;i++){
            gotoxy(j+22,i+5);printf("%c",movimiento[i][j]);}}
            getch();

}

void menu::mision()
{
	char mision[10][80] ={
"1. Objetivo del juego:                                                ",
"Hundir los barcos de tu oponente antes que �l acabe con los tuyos.    ",
"Cada jugador tiene 1 tablero compuesto por 10 filas y 10 columnas.    ",
"Tablero de posici�n: es tu territorio, en �l distribuir�s tu flota    ",
"antes de comenzar la partida.                                         ",
"Tablero principal: es el territorio de tu enemigo,                    ",
"donde tiene desplegada su flota. Ser� aqu� donde se desarrollen       ",
"tus movimientos (disparos) y tratar�s de hundir los barcos enemigos   ",
"                                                                      ",
"                PRECIOSA ENTER PARA INICIAR                           ",};
gotoxy(45,32);
for(int j=0;j<80;j++){
        for(int i=0;i<10;i++){
            gotoxy(j+5,i+5);printf("%c",mision[i][j]);}}
            getch();

}

int main()
{
	system ("color 70");
	
	srand (time(NULL));
	enemigo a;
	jugador b;
	menu a1;
	
	ocultarcursor();
	a1.portada();
	system("cls");
	a1.mision();
	system("cls");
	int q1=2; //x
	int w1=3; //y
	int q2=2; //x
	int w2=28; //y
	int Nave1=1, Nave=1;
	int cam1, cam = 0;
	int p1,p2,p3=0,p4, p5=1;
	int x1,y1,x2,y2,x3,y3,x4,y4;
	int c1,c2,c3,c4;
	int op;
	bool gameover=true;
	
	
	gotoxy(0,0);
	a.pintarmapa();
	gotoxy(0,25);
	a.pintarmapa();
	a1.instrucciones();
	
	
	while(gameover == true)
	{
		if(Nave1 == 2) Nave = 2;
		if(Nave1 == 3) Nave = 3;
		if(Nave1 == 4) Nave = 4;
		if(Nave1 == 5) Nave = 5;
		if(Nave1 == 6) Nave = 6;
		if(Nave1 == 7) Nave = 7;
		
		if(a.retornarvidaju() == 11)
		{
			system("cls");
			gotoxy(10,10);cout<<"HAS GANADO";
			gotoxy(10,12);cout<<"DESEAS VOLVER A JUGAR";
			gotoxy(10,14);cout<<"1. si  / 2. no";
			cin>>op;
			switch(op)
			{
				case 1: return main();
				break;
				
				case 2: gameover=false;
				break;
			}
		}
		
		if(a.retornarvidaen() == 11)
		{
			system("cls");
			gotoxy(10,10);cout<<"HAS PERDIDO";
			gotoxy(10,12);cout<<"DESEAS VOLVER A JUGAR";
			gotoxy(10,14);cout<<"1. si  / 2. no";
			cin>>op;
			switch(op)
			{
				case 1: return main();
				break;
				
				case 2: gameover=false;
				break;
			}
		
		}
		
		
		if(p5 == 1)
		{
			if(p1 == 1)
			{
				b.pintar_portaaviones_permanente(x1, y1, c1);
			}
			if(p2 == 2)
			{
				b.pintar_submarino_permanente(x2, y2, c2);
			}
			if(p3 == 3)
			{
				b.pintar_destructor_permanente(x3, y3, c3);
			}
			if(p4 == 4)
			{
				b.pintar_fragata_permanente(x4, y4, c4);
			}	
		}
		
			if(kbhit())
			{
				char tecla = getch();
				if(tecla == 'c')
				{
					if(cam == 0)
					{
						if(Nave == 1) b.borrar_portaaviones(q2,w2,cam);
						if(Nave == 2) b.borrar_submarino(q2,w2,cam);
						if(Nave == 3) b.borrar_destructor(q2,w2,cam);
						if(Nave == 4) b.borrar_fragata(q2,w2,cam);
						cam = 1;
						q2 = 2;
						w2 = 28;
					}
					else
					{
						if(Nave == 1) b.borrar_portaaviones(q2,w2,cam);
						if(Nave == 2) b.borrar_submarino(q2,w2,cam);
						if(Nave == 3) b.borrar_destructor(q2,w2,cam);
						if(Nave == 4) b.borrar_fragata(q2,w2,cam);
						cam = 0;
						q2 = 2;
						w2 = 28;
					}
				}
				if(tecla == 'x' && Nave<5)
				{
					if(Nave == 1)
					{
						q2 = 2;
						w2 = 28;
						p1 = 1;
						Nave1 = 2;
						x1=b.capturaX();
						y1=b.capturaY();
						c1=cam;
					}
					if(Nave == 2)
					{
						q2 = 2;
						w2 = 28;
						p2 = 2;
						Nave1 = 3;
						x2=b.capturaX();
						y2=b.capturaY();
						c2=cam;
					}
					if(Nave == 3)
					{
						q2 = 2;
						w2 = 28;
						p3 = 3;
						Nave1 = 4;
						x3=b.capturaX();
						y3=b.capturaY();
						c3=cam;
					}
					if(Nave == 4)
					{
						q2 = 2;
						w2 = 28;
						p4 = 4;
						Nave1 = 5;
						x4=b.capturaX();
						y4=b.capturaY();
						c4=cam;
					}
				}
				if(tecla == 'z')
				{
					a.disparo(q1,w1);
					Nave1=7;
				}
			}
		
		
		if(Nave == 1)
		{
			b.mover_portaaviones(q2,w2,cam);
		}
		if(Nave == 2)
		{
			b.mover_submarino(q2,w2,cam);
		}
		if(Nave == 3)
		{
			b.mover_destructor(q2,w2,cam);
		}
		if(Nave == 4)
		{
			b.mover_fragata(q2,w2,cam);
		}
		if(Nave == 5)
		{
			a.pintar_naves();
			p5 = 2;
			Nave1 = 6;
		}
		if(Nave == 6)
		{
			a.mover(q1,w1);
			gotoxy(0,25);
			a.pintarmapaju();
		}
		if(Nave == 7)
		{
			b.IAgeneral();
			gotoxy(0,25);
			a.pintarmapaju();
			Sleep(30);
			Nave1=6;
		}
		
		Sleep(20);
	}
	
	
}
