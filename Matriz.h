#include<iostream>
#include<cstdlib>
using namespace std;

class Matriz
{
private:
    int **matriz;
    int N;
public:
    Matriz(/* args */);
    ~Matriz();

    int getN();
    void setN(int);

    void getMatriz();
    void setMatriz();

    void gauss(int,int);
};

