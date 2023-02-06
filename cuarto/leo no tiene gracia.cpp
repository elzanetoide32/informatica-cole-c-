#include <iostream>

using namespace std;

int main ()
{
	int i,x,z,c;
	x=0;
	i=0;
	z=0;
	float v1,i1,promedio,sumai,sumav;
	cout<<"Ingrese los valores de Corriente"<<endl;
	while (x<11)
	{
		cin>>i1;
		sumai=i1+0;
		x=x+1;
		if (i1>1000)
		{
			z=z+1;
		}
	}
	cout<<"Ingrese los valores de Tension"<<endl;
	while (i<11)
	{
		cin>>v1;
		sumav=v1+0;
		i=i+1;
		
		while(c%2)
		{
			cout<<"La potencia entre "<<v1<<" y "<<i1<<" es: "<<v1*i1<<endl;	
		}
	}
	
	cout<<"El promedio de las tensiones es de: "<<sumav/10<<endl;
	cout<<"El promedio de las corriente es de: "<<sumai/10<<endl;
	
	cout<<"El porcentaje de las corrientes mayor a 1Amper son: "<<(z*100)/10<<endl;
		
	
	

	return 0;	
}
