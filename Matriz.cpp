#include"Matriz.h"

void Matriz::setN(int N){
    this->N = N;
}

int Matriz::getN(){
    return N;
}
void Matriz::setMatriz(){
    this->matriz = new int*[N];
            for( int i = 0; i<N; i++) (this->matriz)[i] =new int[N];

            for( int i = 0; i<N; i++)
                for( int j = 0; j <N; j++){
                    cout<<"Introduzca ["<<i+1<<"]["<<j+1<<"]: "<<endl;
                    cin>>(this->matriz)[i][j];
                }

}

void Matriz::getMatriz(){
    for(int i =0; i < N; i++){
        for( int j = 0; j<N; j++)
        cout<< " "<<(this->matriz)[i][j];
        cout<<endl;
    }
}

void Matriz::gauss(int i, int j){

    //primera fila
    if( i < N){

    for(int i = 0; i < N; i++)  (this->matriz)[i][j]*=-(this->matriz)[i][j];

    }
    

}

Matriz::Matriz(/* args */){}

Matriz::~Matriz(){}
