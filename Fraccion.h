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

       public:
	Fraccion(int, int);
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
