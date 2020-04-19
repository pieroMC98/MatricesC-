#include "Fraccion.h"

long long int* Fraccion::cribaEratostenes(long long int count) {
	long long int* v = (long long int*)calloc(count, sizeof(long long int));
	// Error(count);
	v[0] = 1;
	v[1] = 2;

	long long int i = 3, limit = 2., save;
	while (limit < count) {
		save = false;
		for (long long int k = 2; k < i; k++)
			if (i % k != 0)
				save = true;
			else {
				save = false;
				break;
			}

		if (save == true) v[limit++] = i;
		i++;
	}

	return v;
}

long long int* Fraccion::factores(long long int i, long long int& factor) {
	long long int *v = (long long int*)calloc(i, sizeof(long long int)), sum = 1500, *criba = cribaEratostenes(sum);
	int k = 1;

	while (i != 1 && i != 0) {
		k = 1;
		while (1) {
			if (k >= 1500) {
				sum += 10;
				criba = cribaEratostenes(sum);
			}

			if (i % criba[k] == 0) {
				v[factor++] = criba[k];
				i = i / criba[k];
				break;
			}
			k++;
		}
	}
	v = (long long int*)realloc(v, factor);
	return v;
}

long long int* Fraccion::fraccion_(long long int a, long long int b) {
	long long int factor1 = 0, factor2 = 0;

	long long int *N = factores(a < 0 ? -1 * a : a, factor1), *D = factores(b < 0 ? -1 * b : b, factor2);

	static long long int Return[2];

	for (long long int i = 0; i < factor1; i++)
		for (long long int j = 0; j < factor2; j++)
			if (N[i] == D[j]) N[i] = D[j] = 1;

	Return[0] = Return[1] = 1;
	for (long long int i = 0; i < factor1; i++) Return[0] *= N[i];

	for (long long int i = 0; i < factor2; i++) Return[1] *= D[i];

	return Return;
}

Fraccion::Fraccion(long long int x, long long int y) {
	if (y < 0) {
		y *= -1;
		x *= -1;
	}

	if ((x * -1) == y) {
		x = -1;
		y = 1;
	}

	// if (x != 0) {
	// 	long long int* aux = fraccion_(x, y);
	// 	this->N = aux[0];
	// 	this->D = aux[1];
	// } else {
	// 	this->N = x;
	// 	this->D = y;
	// }
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

Fraccion* Fraccion::multiplicar(Fraccion a, Fraccion b) { return new Fraccion(a.N * b.N, a.D * b.D); }
Fraccion* Fraccion::cociente(Fraccion a, Fraccion b) { return new Fraccion(a.N * b.D, a.D * b.N); }
Fraccion* Fraccion::diferencia(Fraccion a, Fraccion b) { return new Fraccion(a.N * b.D - b.N * a.D, a.D * b.D); }
string Fraccion::imprimir() { return "(" + to_string(this->N) + (" / " + to_string(this->D) + ")") + "  "; }
