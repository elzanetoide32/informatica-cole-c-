#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cant=5,aux=0;
	int arrayNum[5]={30,33,22,55,10};
	
	for(int i=0;i<cant-1;i++){
		for(int j=i+1;j<cant;j++){
			if(arrayNum[i]>arrayNum[j]){
				aux=arrayNum[i];
				arrayNum[i]=arrayNum[j];
				arrayNum[j]=aux;
			}
			for(int f=0;f<5;f++){
				cout<<arrayNum[f]<<" ";
			}
			cout<<endl;
		}
		
		
	}
	
	return 0;
}
