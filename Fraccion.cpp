#include"Fraccion.h"

Fraccion::Fraccion(int x, int y){
    this->N = x;
    this->D = y;
}

Fraccion::Fraccion(){
    this->N = 0;
    this->D = 1;
}


Fraccion* Fraccion::multiplicar(Fraccion a, Fraccion b){
    if(! (a.D*b.D) )cout<<"te jodes\n";
    return new Fraccion( a.N*b.N, a.D*b.D );
}

Fraccion* Fraccion::cociente(Fraccion a, Fraccion b){
    if(! (a.D*b.N) )cout<<"te jodes\n";
    
    return new Fraccion( a.N*b.D, a.D*b.N );
}

Fraccion* Fraccion::diferencia(Fraccion a, Fraccion b){
    if(! (a.D*b.D) )cout<<"te jodes\n";
    
    return new Fraccion( a.N*b.D - b.N*a.D, a.D*b.D);
}

string Fraccion::imprimir(){
    string t = "(" +to_string(this->N)+ " / " +to_string( this->D)+ ")"+"\n";
    return t;    
}