#include<iostream>
#include<cstdlib>
#define Error cout<<"######################"<<endl  
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
    void getMatriz(int,int);
    void setMatriz();
    void setMatriz(int**);
    

    void gauss(int,int);
};

