#include "Binario.h"
#include <random>

using namespace std;

Binario::Binario(){
	for (int i = 0; i < 4; ++i){
		Arreglo[i]=rand()%2;
	}
}

Binario::~Binario(){
	delete[] Arreglo;
	//cout<<"Se eliminó el arreglo";
}

int* Binario::getArreglo(){
	return Arreglo;
}