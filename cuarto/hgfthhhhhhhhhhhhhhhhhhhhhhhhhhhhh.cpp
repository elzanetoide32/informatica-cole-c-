#include <istream>
using namespace std;

int main(){
	int a,b,c;
	cout<<"Ingrese 1=para una Suma, 2=para una Resta, 3=para una multiplicacion, 4=para una division."<<endl;
	cin>>a>>endl;
	switch(a)
	 {
	 case 1:
	 		{cout<<"Ingrese dos numeros para una Suma: "<<endl;
	 		 cin>>b,c
	 		 cout<<"Su suma es: "<<b+c<<endl;
	 		 break;
			 }
	 case 2:
	 		{cout<<"Ingrese dos numeros para una Resta: "<<endl;
	 		 cin>>b,c
	 		 cout<<"Su Resta es: "<<b-c<<endl;
	 		 break;
			 }
	 case 3:
	 		{cout<<"Ingrese dos numeros para una multiplicacion: "<<endl;
	 		 cin>>b,c
	 		 cout<<"Su multiplicacion es: "<<b*c<<endl;
	 		 break;
			 }
	 case 4:
	 		{cout<<"Ingrese dos numeros para una division: "<<endl;
	 		 cin>>b,c
	 		 if(c!=0);
	 		 {cout<<"Su division es: "<<b/c<<endl;
			  }
	 		 break;
			 }		 		 
			 }
	
}
