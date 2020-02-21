#include "Fraccion.h"
Fraccion::Fraccion(long long int x, long long int y) {
	this->N = x;
	this->D = y;
}
Fraccion::Fraccion() {
	this->N = 0;
	this->D = 1;
}

Fraccion::Fraccion(int x) {
	this->N = x;
	this->D = 1;
}

void Fraccion::setN(int x) { this->N = x; }
void Fraccion::setD(int x) { this->D = x; }

int Fraccion::getN() { return this->N; }
int Fraccion::getD() { return this->D; }

Fraccion *Fraccion::multiplicar(Fraccion a, Fraccion b) { return new Fraccion(a.N * b.N, a.D * b.D); }
Fraccion *Fraccion::cociente(Fraccion a, Fraccion b) {
	if (a.D == b.D) a.D = b.D = 1;
	return new Fraccion(a.N * b.D, a.D * b.N);
}
Fraccion *Fraccion::diferencia(Fraccion a, Fraccion b) { return new Fraccion(a.N * b.D - b.N * a.D, a.D * b.D); }
string Fraccion::imprimir() { return "(" + to_string(this->N) + " / " + to_string(this->D) + ")" + "  "; }