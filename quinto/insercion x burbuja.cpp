#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int r=0,no_ordenado=0,cant=5,aux=0;
	int array[5]={30,33,22,55,10};
	do{
		r++;
		no_ordenado=0;
		for(int i=0;i<cant-r;i++){
			if(array[i]>array[i+1]){
				aux=array[i];
				array[i]=array[i+1];
				array[i+1]=aux;
				no_ordenado=1;
			}
			for(int f=0;f<5;f++){
				cout<<array[f]<<" ";
			}
			cout<<endl;
		}
	}while(no_ordenado);
	
	return 0;
}

///*array{array}
