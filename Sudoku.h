#include "Matriz.h"

class Sudoku : public Matriz {
       private:
	/* data */
       public:
	Sudoku(/* args */);
	~Sudoku();

	int asignation(int&, int&);
	int isSafe(int, int, int);
	int resolve();
	void getMatriz();
};
