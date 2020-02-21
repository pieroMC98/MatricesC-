#include "Matriz.h"

#include <iostream>

Matriz::Matriz(/* args */) {}
Matriz &Matriz::setI(int N) {
	this->i = N;
	return *this;
}

int Matriz::getI() { return i; }

Matriz &Matriz::setJ(int N) {
	this->j = N;
	return *this;
}

int Matriz::getJ() { return j; }

void Matriz::setMatriz(long double A[][SIZE]) {
	this->matriz = new long double *[this->i];
	for (int k = 0; k < this->i; k++) (this->matriz)[k] = new long double[this->j];
	for (int i = 0; i < this->i; i++)
		for (int j = 0; j < this->i; j++) this->matriz[i][j] = A[i][j];
}

void Matriz::setMatrizFraccion(Fraccion **A) {
	this->matriz_gauss = new Fraccion *[this->i];
	for (int k = 0; k < this->i; k++) this->matriz_gauss[k] = new Fraccion[this->j];
	Error(2);
	for (int i = 0; i < (this->i - 1); i++)
		for (int j = 0; j < this->j; j++) this->matriz_gauss[i][j] = A[i][j];
}

void Matriz::getMatriz() {
	for (int i = 0; i < this->i; i++) {
		for (int j = 0; j < this->j; j++) cout << setprecision(3) << "\t " << (this->matriz)[i][j];
		cout << endl << endl << endl;
	}
}

void Matriz::getMatrizGauss() {
	for (int i = 0; i < (this->i - 1); i++) {
		for (int j = 0; j < this->j; j++) cout << this->matriz_gauss[i][j].imprimir();
		cout << endl << endl << endl;
	}
}

void Matriz::setMatriz() {
	this->matriz = new long double *[this->i];
	for (int k = 0; k < (this->j + (this->i - this->j)); k++)
		(this->matriz)[k] = new long double[this->j + (this->i - this->j)];

	for (int i = 0; i < this->i; i++)
		for (int j = 0; j < this->j; j++) {
			cout << "Introduzca [" << i + 1 << "][" << j + 1 << "]: " << endl;
			cin >> (this->matriz)[i][j];
		}
}

double *resultado(int i, int j, double (*)[SIZE]) { /*
											   double* aux =
						       new double[7]; if( i < 7 ){

												   return
						       aux[i] + resultado(); }else return aux;
											*/
	return 0;
}

void Matriz::gauss(int i, int j) {
	if (j < (this->i - 1)) {
		if (i < (this->i)) {
			long double m = this->matriz[i][j] / this->matriz[j][j];

			if (!m) gauss(j + 2, j + 1);

			for (int k = 0; k < this->j; k++) this->matriz[i][k] -= m * this->matriz[j][k];
			// this->matriz[i][k] =  this->matriz[i]`[k] - (m * this->matriz[j][k])

			gauss(i + 1, j);
		} else
			gauss(j + 2, j + 1);
	}
}

void Matriz::gaussFraccion(int i, int j) {
	if (j < (this->i - 1)) {
		if (i < (this->i)) {
			Fraccion *aux = new Fraccion;

			aux = aux->cociente(this->matriz_gauss[i][j], this->matriz_gauss[j][j]);

			if (!aux->getN()) gaussFraccion(j + 2, j + 1);
			// std::cout << "["<<i<<"]"<< "["<<j<<"] = " << aux->imprimir() << std::endl;

			for (int k = 0; k < this->j; k++) {
				this->matriz_gauss[i][k] = *(
					(new Fraccion())
						->diferencia(this->matriz_gauss[i][k],
							     *(new Fraccion())
								      ->multiplicar(*(aux), this->matriz_gauss[j][k])));
				// std::cout << this->matriz_gauss[i][k].imprimir() << std::endl;
			}
			gaussFraccion(i + 1, j);

		} else
			gaussFraccion(j + 2, j + 1);
	}
}

Matriz::~Matriz() { std::cout << "Objeto eliminado" << std::endl; }
