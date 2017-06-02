#include <iostream>
#include <vector>
#include "Binario.h"


using namespace std;

void imprimirBinario(Binario*);
void listarBinarios(vector<Binario*>);

int main(int argc, char const *argv[]){
	vector<Binario*> Binarios;
	Binario* b1=new Binario();
	Binario* b2=new Binario();
	int opcion;
	do{
		cout<<"Menú"<<endl;
		cout<<"1. Disyunción(+)"<<endl;
		cout<<"2. Conjunción(-)"<<endl;
		cout<<"3. Implicación(*)"<<endl;
		cout<<"4. Doble Implicación(/)"<<endl;
		cout<<"5. Disyunción exclusiva(^)"<<endl;
		cout<<"6. Agregar binario"<<endl;
		cout<<"7. Listar binarios"<<endl;
		cout<<"8. Escoger binarios"<<endl;
		cout<<"9. Salir"<<endl;
		cout<<"Ingrese la opción que desea: ";
		cin>>opcion;
		switch(opcion){
			case 1:{
				cout<<"Número 1:\t"<<b1<<endl;
				cout<<"Número 2:\t"<<b2<<endl<<"Resultado:\t";
				int * resultado=new int[4];
				resultado=*b1+*b2;
				for (int i = 0; i < 4; ++i){
					cout<<resultado[i]<<"\t";
				}
				cout<<endl;
				break;
			}
			case 2:{
				cout<<"Número 1:\t"<<b1<<endl;
				cout<<"Número 2:\t"<<b2<<endl<<"Resultado:\t";
				int * resultado=new int[4];
				resultado=*b1-*b2;
				for (int i = 0; i < 4; ++i){
					cout<<resultado[i]<<"\t";
				}
				cout<<endl;
				break;
			}
			case 3:{
				cout<<"Número 1:\t"<<b1<<endl;
				cout<<"Número 2:\t"<<b2<<endl<<"Resultado:\t";
				int * resultado=new int[4];
				resultado=(*b1)*(*b2);
				for (int i = 0; i < 4; ++i){
					cout<<resultado[i]<<"\t";
				}
				cout<<endl;
				break;
			}
			case 4:{
				cout<<"Número 1:\t"<<b1<<endl;
				cout<<"Número 2:\t"<<b2<<endl<<"Resultado:\t";
				int * resultado=new int[4];
				resultado=(*b1)/(*b2);
				for (int i = 0; i < 4; ++i){
					cout<<resultado[i]<<"\t";
				}
				cout<<endl;
				break;
			}
			case 5:{
				cout<<"Número 1:\t"<<b1<<endl;
				cout<<"Número 2:\t"<<b2<<endl;
				int * resultado=new int[4];
				resultado=(*b1)^(*b2);
				for (int i = 0; i < 4; ++i){
					cout<<resultado[i]<<"\t";
				}
				cout<<endl;
				break;
			}
			case 6:{
				Binarios.push_back(new Binario());
				break;
			}
			case 7:{
				listarBinarios(Binarios);
				break;
			}
			case 8:{
				int pos1,pos2;
				listarBinarios(Binarios);
				cout<<"Ingrese la posición del primer binario: ";
				cin>>pos1;
				cout<<"Ingrese la posición del segundo binario: ";
				cin>>pos2;
				b1=Binarios[pos1];
				b2=Binarios[pos2];
			}
			case 9:{
				break;
			}
		}

	} while (opcion!=9);
	return 0;
}

void listarBinarios(vector<Binario*> binarios){
	for (int i = 0; i < binarios.size(); ++i){
		cout<<to_string(i)<<" ->\t";

		cout<<binarios[i]<<endl;
		//imprimirBinario(binarios[i]);
		
	}
}

void imprimirBinario(Binario* bin){
	for (int i = 0; i < 4; ++i){
		cout<<bin->getArreglo()[i]<<"\t";
	}
	cout<<endl;
}
