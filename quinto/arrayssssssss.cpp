#include <iostream>
using namespace std;
int main(){
	cout<<"introducir los numeros que queres sacar el mayor"<<endl;
		cout<<"introducir los numeros que queres sacar el mayor"<<endl;
	float array1[10], array2[10],cum1,cum2,par1,yoquese;
    for(int i=0; i<=10; i++){
		cin>>array1[i];
		
	}

	cum1=array1[0];
	for(int falopa=0; falopa<10; falopa++){
		
		if(cum1<array1[falopa]){
			
			cum1=array1[falopa];
		}

        if (array1[falopa]%2==0){
            yoquese=array1[falopa]+yoquese;
        }
	} 
	cout<<"introducir los numeros que queres sacar el menor"<<endl;
		for(int i2=0; i2<=10; i2++){
		cin>>array2[i2];
	}
	cum2=array2[0];
	for(int falopa2=0; falopa2<10; falopa2++){
		
		if(cum2>array2[falopa2]){
			
			cum2=array2[falopa2];
		}
	}
	
	cout<<"El numero mayor del primer(ARGENTINA) array es: "<<cum1<<endl;
	cout<<"El numero menor del segundo(brasil) array es: "<<cum2<<endl;
	//que pito se hace
	//dos arrays distintos de 10 posisiciones enteros, hay que cargar los 20 valores y hay que mostarar el mayor de uno y el menor de otro
	
	
	return 0;
}
