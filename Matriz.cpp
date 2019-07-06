#include"Matriz.h"

Matriz::Matriz(/* args */){}
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

void Matriz::setMatriz(int **A){
    this->matriz = NULL;
    this->matriz = new int*[N];

    if( this->matriz == NULL) cout<<"Su puta madre";
    



    this->matriz = A;
    Error;

    cout<<this->matriz[0][0]<<endl;

}

void Matriz::getMatriz(){
    for(int i =0; i < N; i++){
        for( int j = 0; j<N; j++)
        cout<< " "<<(this->matriz)[i][j];
        cout<<endl;
    }
}

void Matriz::getMatriz(int i1, int j1){

    cout<<this->matriz[0][0]<<endl;
    for(int i = 0; i < i1; i++){
        for( int j = 0; j < j1; j++)
        cout<< " "<<(this->matriz)[i][j];
        cout<<endl;
    }
    
}

void Matriz::gauss(int i, int j){

    //primera fila
        Error;
    if( i != N && j != N)
        if( i < N){
            cout<<i<<endl;
            float m = this->matriz[i][j]/this->matriz[i+1][j];
            for(int k = i; k<N; k++) this->matriz[k][j] = this->matriz[k][j] - m*(this->matriz[k+1][j]);
            Matriz::gauss(i+1, j);
        }else if( i == N){ 
            i = 0;
            Matriz::gauss(i+1, j+1);        
        }
}


Matriz::~Matriz(){}
