#include <iostream>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main() {
	cout<<"1. Sumatoria \n";
	cout<<"2.Formula \n";
	cout<<"3.Salir \n";
	int menu;
	menu = 0;
	cin>> menu;
	while(menu != 3){

	if(menu ==1){
		float k,aux,total;
		cout<<"Sumatoria \n";
		cout<<"Ingrese un valor para k: ";
		cin>>k;
		for(int i = 0; i<=k; i++){
		aux= i*pow(i+1,2);
		total= total+aux;
		}
		cout<< "El total es: ";
		cout<<total;
		
	menu=3;
	} if(menu==2){
			cout<<"2.mundo";
	menu=3;
	}
		
	}
	return 0;
}
