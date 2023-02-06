#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int cant=10,aux=0;
	int arrayNum[10]={1,24,45,15,17,25,12,98,19,789121};
	
	for(int i=0;i<cant-1;i++){
		for(int j=i+1;j<cant;j++){
			if(arrayNum[i]>arrayNum[j]){
				aux=arrayNum[i];
				arrayNum[i]=arrayNum[j];
				arrayNum[j]=aux;
			}
			for(int f=0;f>9;f++){
				cout<<arrayNum[f];
			}
			cout<<endl;
		}
	}
	
	return 0;
}
