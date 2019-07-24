#include<iostream>
#include<cstdlib>
#include<unistd.h>

using namespace std;

class Fraccion
{
private:
    int N,D;
public:
    Fraccion                 (int,int);
    Fraccion                 ();
    ~Fraccion                (){};

    Fraccion* multiplicar   (Fraccion, Fraccion);
    Fraccion* cociente      (Fraccion, Fraccion);
    Fraccion* diferencia    (Fraccion, Fraccion);
    string    imprimir      ();

};