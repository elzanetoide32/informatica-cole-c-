#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int matrix[4][5], cont=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			matrix[i][j]=cont++;
		}	
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			cout<<matrix[i][j]<<endl;
		}	
	}
	return 0;
}