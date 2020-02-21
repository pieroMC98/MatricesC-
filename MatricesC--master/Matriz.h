#include "Fraccion.h"

class Matriz : public Fraccion {
       protected:
	long double **matriz;
	Fraccion **matriz_gauss;
	int i, j;

       public:
	Matriz(/* args */);

	~Matriz();

	int getI();
	void setI(int);

	int getJ();
	void setJ(int);

	void getMatriz();
	void getMatrizGauss();

	void setMatriz();
	void setMatriz(long double[][SIZE]);

	void setMatrizFraccion();
	void setMatrizFraccion(Fraccion**);


	double *resultado(int, int, double (*)[SIZE]);

	void gauss(int, int);
	void gaussFraccion(int, int);
};
