#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	int menu;
	menu = 0;
	while(menu != 3){
		cout<<"\n";
		cout<<"1. Sumatoria \n";
		cout<<"2.Formula \n";
		cout<<"3.Salir \n";
		cin>> menu;

		if(menu ==1){
			float k,aux,total;
			cout<<"Sumatoria \n";
			cout<<"Ingrese un valor para k: ";
			cin>>k;
			while(k<0){
				cout<<"Ingrese un valor para k que sea positivo: ";
				cin>>k;	
			}
			for(int i = 0; i<=k; i++){
				aux= i*pow(i+1,2);
				total= total+aux;
			}
			cout<< "El total es: ";
			cout<<total;
			
		
		}
		if(menu==2){
			float x = 0;
			float total_1 = 0;
			cout<<"Formula \n";
			cout<<"Ingrese un valor para x: ";
			cin>>x;
			total_1 = 1/(1 +exp(x));
			cout<<"La respuesta es: ";
			cout<< total_1;
		
		}
		
	}
	return 0;
}
