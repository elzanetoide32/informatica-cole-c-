#include <iostream>
using namespace std;
int main(int argc, char** argv) {
	int rala [4][4], cont=0;
	cout<< "ingrese numeros de la matriz"<<endl;
	for( int a=0;a<4;a++)	{
		for(int b=0;b<4;b++){
			cin>>rala[a][b];
			if (rala [a][b]==1)	{
				cont++;
			}
		}
	}
	if(cont==1){
		cout<< "la matriz es rala"<<endl;
	}
	else{
		cout<< "la matriz no es rala"<<endl;
	}
	
	return 0;
}