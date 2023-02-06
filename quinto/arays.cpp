#include <iostream>
#define 	T 73
using namespace std;
int main(){
	cout<<"introducir los numeros que queres sacar el mayor"<<endl;
	int array1[10],array2[10];
	int mayor,cont2=0,cont=0,impa=0,divi=0, porcen=0, primos=0;
	int promA=0,promB;
	bool primo=true;
    for(int i=0; i<10; i++){
		cin>>array1[i];
		
	}

	mayor=array1[0];
	for(int w=0; w<10; w++){
		
		if(mayor<array1[w]){
			
			mayor=array1[w];
		}

        if ((array1[w]%2)==0){
            promA+=array1[w];
        	cont=cont+1;
        	
		}
		else{
        	impa=impa+1;
		}   
        
        if(array1[w]<T){
        	array2[w]=array1[w];
        
        	cont2=cont2+1;
        	cout<<array2[w]<<endl;
        	
		}
		 divi=0;
		for(int q=1; q<=array1[w]; q++){
			if(array1[w]%q == 0){
				divi++;
			}
		}
		if(divi==2){
			primos++;
		}
	}
	promB=(promA/cont);
	porcen=cont*10;
	cout<<"El numero mayor del primer(ARGENTINA) array es: "<<mayor<<endl;
	cout<<promB<<" promedio de numeros pares"<<endl;
	cout<<porcen<<" % de los numeros pares"<<endl;
	cout<<cont<<endl;
	cout<<impa<<endl;
	cout<<"Cantidad numeros menores a 73: "<<cont2<<endl;
	cout<<"primos: "<<primos<<endl;
	/*/dos arrays distintos de 10 posisiciones enteros, hay que cargar los 20 valores y hay que mostarar el mayor de uno y el menor de otro
	//numeros menores a 73
    // promedio dew los numeros pares cantidad de pares promedio de pares
    cantidad de impares
    cantidad de primos
    cantidad 
    promedio
	*/
	return 0;

}
