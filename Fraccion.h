#ifndef CLASE_FRACCION_H
#define CLASE_FRACCION_H
#include <unistd.h>

#include <cstdlib>
#include <iomanip>
#include <iostream>
#define SIZE 7
#define Error(i) cout << "<--------------------------------------->" << i << endl
#define jump cout << endl << endl

using namespace std;

class Fraccion {
       private:
	int N, D;

	long long int *fraccion_(long long int, long long int);

	long long int *cribaEratostenes(long long int);
	long long int *factores(long long int, long long int &);

       public:
	Fraccion(long long int, long long int);
	Fraccion(int);
	Fraccion();
	~Fraccion(){};

	int getN();
	int getD();

	void setN(int);
	void setD(int);

	Fraccion *multiplicar(Fraccion, Fraccion);
	Fraccion *cociente(Fraccion, Fraccion);
	Fraccion *diferencia(Fraccion, Fraccion);
	string imprimir();
};
#endif	// !CLASE_FRACCION_H
