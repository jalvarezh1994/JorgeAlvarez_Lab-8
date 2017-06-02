#include <iostream>
#include <random>
#include <string>

using namespace std;

class Binario
{
private:
	int* Arreglo = new int[4];
public:
	Binario();
	~Binario();
	void llenar();
	int* getArreglo();
	//Disyunción
	int* operator +(Binario &b1){
		int* resultado=new int[4];
		for (int i = 0; i < 4; ++i){
			if (b1.getArreglo()[i]+this->getArreglo()[i]>0){
				resultado[i]=1;
			}else{
				resultado[i]=0;
			}
		}
		return resultado;
	}
	//Conjunción
	int* operator -(Binario &b1){
		int* resultado=new int[4];
		for (int i = 0; i < 4; ++i){
			if (b1.getArreglo()[i]+this->getArreglo()[i]==2){
				resultado[i]=1;
			}else{
				resultado[i]=0;
			}
		}
		return resultado;
	}
	//Implicación
	int* operator *(Binario &b1){
		int* resultado=new int[4];
		for (int i = 0; i < 4; ++i){
			if (this->getArreglo()[i]==1&&b1.getArreglo()[i]==0){
				resultado[i]=0;
			}else{
				resultado[i]=1;
			}
		}
		return resultado;
	}
	//Doble implicación
	int* operator /(Binario &b1){
		int* resultado=new int[4];
		for (int i = 0; i < 4; ++i){
			if (this->getArreglo()[i]+b1.getArreglo()[i]==1){
				resultado[i]=0;
			}else{
				resultado[i]=1;
			}
		}
		return resultado;
	}
	//Disyunción exclusiva
	int* operator ^(Binario &b1){
		int* resultado=new int[4];
		for (int i = 0; i < 4; ++i){
			if (this->getArreglo()[i]+b1.getArreglo()[i]==1){
				resultado[i]=1;
			}else{
				resultado[i]=0;
			}
		}
		return resultado;
	}
	//Escritura
	friend ostream& operator <<(ostream &escribir,Binario* binario){
		string texto="";
		//std::cout << "out";
		for (int i = 0; i < 4; ++i){
			//std::cout << "for in";
			int b=binario -> getArreglo()[i];
			texto+=to_string(b)+"\t";
		}
		escribir << texto;
		return escribir;
	}
};
