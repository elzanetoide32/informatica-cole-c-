#include<iostream>
//ingresAR 10 DATOS Volts 
//10 datos mA
//mostrar: promedio de Tension-------Corriente-----Potenia para los datos impares----% de corriente mayor a un Amper
using namespace std;

int main()
{
	int i=0;
	float v1,v2,v3,v4,v5,v6,v7,v8,v9,v10,vprome;
	float i1,i2,i3,i4,i5,i6,i7,i8,i9,i10,iprome;
	int merca=1000;
	//ponemos 1000 ya que estamos haciendo esto en una sola escala
	//entonces ponemos un Amper en mA que seria 1*1000=1000
	
	cout<<"Ingrese los 10 valores de Tensiones en (v)"<<endl;
	cin>>v1>>v2>>v3>>v4>>v5>>v6>>v7>>v8>>v9>>v10;
	
	cout<<"ingrese los 10 valores de corriente en (mA)"<<endl;
	cin>>i1>>i2>>i3>>i4>>i5>>i6>>i7>>i8>>i9>>i10;
	
	vprome=(v1+v2+v3+v4+v5+v6+v7+v8+v9+v10)/10;
	iprome=(i1+i2+i3+i4+i5+i6+i7+i8+i9+i10)/10;
	
	cout<<"el promedio de Tension es "<<vprome<<endl;
	cout<<"el promedio de corriente es "<<iprome<<endl;
	
	cout<<"La potencia entre "<<v1<<" y "<<i1<<" es: "<<v1*i1<<endl;
	cout<<"La potencia entre "<<v3<<" y "<<i3<<" es: "<<v3*i3<<endl;
	cout<<"La potencia entre "<<v5<<" y "<<i5<<" es: "<<v5*i5<<endl;
	cout<<"La potencia entre "<<v7<<" y "<<i7<<" es: "<<v7*i7<<endl;
	cout<<"La potencia entre "<<v9<<" y "<<i9<<" es: "<<v9*i9<<endl;
	
	if (i1>merca)
	{
		cout<<"el porcentaje es de "<<i1/10<<"% respecto a un Amper"<<endl;
	}
		if (i2>merca)
	{
		cout<<"el porcentaje es de "<<i2/10<<"% respecto a un Amper"<<endl;
	}
		if (i3>merca)
	{
		cout<<"el porcentaje es de "<<i3/10<<"% respecto a un Amper"<<endl;
	}
		if (i4>merca)
	{
		cout<<"el porcentaje es de "<<i4/10<<"% respecto a un Amper"<<endl;
	}
		if (i5>merca)
	{
		cout<<"el porcentaje es de "<<i5/10<<"% respecto a un Amper"<<endl;
	}
		if (i6>merca)
	{
		cout<<"el porcentaje es de "<<i6/10<<"% respecto a un Amper"<<endl;
	}
		if (i7>merca)
	{
		cout<<"el porcentaje es de "<<i7/10<<"% respecto a un Amper"<<endl;
	}
		if (i8>merca)
	{
		cout<<"el porcentaje es de "<<i8/10<<"% respecto a un Amper"<<endl;
	}
		if (i9>merca)
	{
		cout<<"el porcentaje es de "<<i9/10<<"% respecto a un Amper"<<endl;
	}
		if (i10>merca)
	{
		cout<<"el porcentaje es de "<<i10/10<<"% respecto a un Amper"<<endl;
	}
	
	
	//vamo a jugahr un fuchibol manito kkkkkkkkkk
	//simon?
	//que onda con esto? daleeeeeeeeeeeeeeeeeeeeee leo
	//mathy? mathy es puto
	
	
	
	
	
	return 0;
}

