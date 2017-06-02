#include <iostream>
#include "Binario.h"

using namespace std;

void imrpimirBinario(Binario*);

int main(int argc, char const *argv[]){
	Binario* b1=new Binario();
	Binario* b2=new Binario();
	int opcion;
	do{
		cout<<"Número1: ";
		imrpimirBinario(b1);
		cout<<"Número2: ";
		imrpimirBinario(b2);
		cout<<"Menú"<<endl;
		cout<<"Ingrese la opción que desea: ";
		cin>>opcion;

	} while (opcion!=5);
	return 0;
}

void imrpimirBinario(Binario* bin){
	for (int i = 0; i < 4; ++i){
		cout<<bin->getArreglo()[i]<<"\t";
	}
	cout<<endl;
}