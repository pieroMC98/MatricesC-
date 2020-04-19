#include "Sudoku.h"
Sudoku::Sudoku(/* args */) {}

Sudoku::~Sudoku() {}

int Sudoku::asignation(int &row, int &col) {
	for (int i = 0; i < this->i; i++) {
		for (int j = 0; j < this->j; j++) {
			// si la celda no esta asiganda
			if (!this->matriz[i][j]) {
				// cambio valores de i y j.
				row = i;
				col = j;
				return 1;
			}
		}
	}
	return 0;
}

/*
 *
 */
int Sudoku::isSafe(int n, int r, int c) {
	for (int i = 0; i < this->i; i++) {
		/*   if( this->matriz[r][i] == n || this->matriz[i][c] == n)
		 * return 0;
		 */
		if (this->matriz[r][i] == n) return 0;
	}

	for (int i = 0; i < this->i; i++) {
		if (this->matriz[i][c] == n) return 0;
	}
	//??
	int row0 = (r / 3) * 3, col0 = (c / 3) * 3;

	for (int i = row0; i < row0 + 3; i++)
		for (int j = col0; j < col0 + 3; j++)
			if (this->matriz[i][j] == n) return 0;

	return 1;
}

// solucion por Backtracking
int Sudoku::resolve() {
	int row, col, i;
	if (!asignation(row, col)) return 1;

	for (i = 1; i <= this->i; i++)
		if (isSafe(i, row, col)) {
			this->matriz[row][col] = i;
			if (resolve()) return 1;

			this->matriz[row][col] = 0;
		}
	return 0;
}