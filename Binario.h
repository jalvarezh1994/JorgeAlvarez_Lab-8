#include <iostream>
#include <random>

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
};
