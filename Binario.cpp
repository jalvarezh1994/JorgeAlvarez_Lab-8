#include "Binario.h"
#include <random>

using namespace std;

Binario::Binario(){

}

int* Binario::getArreglo(){
	return Arreglo;
}

void Binario::setArreglo(int Arreglo[4]){
	this->Arreglo=Arreglo;
}

void llenar(){
	for (int i = 0; i < 4; ++i){
		this->getArreglo=rand()%2;
	}
}