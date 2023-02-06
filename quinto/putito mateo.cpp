#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	char matrix[4][5];  
	int cont=0;
	cout<<"ingrese palabra ";
	for(int m=0;m<4;m++){
		cin>>matrix[m][0];
	}
	
	for(int i=0;i<4;i++){
		cout<<matrix[i]<<endl;	
	}
	return 0;
}