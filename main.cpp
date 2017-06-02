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
		cout<<"1. Disyunción(+)"<<endl;
		cout<<"2. Conjunción(-)"<<endl;
		cout<<"3. Implicación(*)"<<endl;
		cout<<"4. Doble Implicación(/)"<<endl;
		cout<<"5. Disyunción exclusiva(^)"<<endl;
		cout<<"6. Agregar vector"<<endl;
		cout<<"7. Salir"<<endl;
		cout<<"Ingrese la opción que desea: ";
		cin>>opcion;
		switch(opcion){
			case 1:{
				int * resultado=new int[4];
				resultado=*b1+*b2;
				for (int i = 0; i < 4; ++i){
					cout<<resultado[i]<<"\t";
				}
				cout<<endl;
				break;
			}
			case 2:{
				int * resultado=new int[4];
				resultado=*b1-*b2;
				for (int i = 0; i < 4; ++i){
					cout<<resultado[i]<<"\t";
				}
				cout<<endl;
				break;
			}
			case 3:{
				int * resultado=new int[4];
				resultado=(*b1)*(*b2);
				for (int i = 0; i < 4; ++i){
					cout<<resultado[i]<<"\t";
				}
				cout<<endl;
				break;
			}
			case 4:{
				int * resultado=new int[4];
				resultado=(*b1)/(*b2);
				for (int i = 0; i < 4; ++i){
					cout<<resultado[i]<<"\t";
				}
				cout<<endl;
				break;
			}
			case 5:{
				int * resultado=new int[4];
				resultado=(*b1)^(*b2);
				for (int i = 0; i < 4; ++i){
					cout<<resultado[i]<<"\t";
				}
				cout<<endl;
				break;
			}
		}

	} while (opcion!=6);
	return 0;
}

void imrpimirBinario(Binario* bin){
	for (int i = 0; i < 4; ++i){
		cout<<bin->getArreglo()[i]<<"\t";
	}
	cout<<endl;
}
