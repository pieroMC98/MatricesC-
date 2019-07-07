#include"Matriz.h"

Matriz::Matriz(/* args */){}
void Matriz::setI(int N){
    this->i = N;
}

int Matriz::getI(){
    return i;
}

void Matriz::setJ(int N){
    this->j = N;
}


int Matriz::getJ(){
    return j;
}

void Matriz::setMatriz(){
    this->matriz = new int*[ this->i ];        
        for( int k = 0; k < (this->j + (this->i - this->j)); k++) (this->matriz)[k] =new int[this->j + (this->i - this->j) ];

        

            for( int i = 0; i< this->i; i++)
                for( int j = 0; j < this->j; j++){
                    cout<<"Introduzca ["<<i+1<<"]["<<j+1<<"]: "<<endl;
                    cin>>(this->matriz)[i][j];
                }

}

void Matriz::setMatriz(int **A){
    Error;
    cout<<A[0][0]<<endl;

        this->matriz = new int*[ 4 ];        
        for( int k = 0; k < 5; k++) (this->matriz)[k] =new int[5];
  
    for(int i = 0; i<4;i++)
        for(int j = 0; j<5;j++) this->matriz[i][j] = A[i][j];
    cout<<matriz[0][0]<<endl;
}

void Matriz::getMatriz(){
    for(int i = 0; i < this->i; i++){
        for( int j = 0; j< this->j; j++)
        cout<< " "<<(this->matriz)[i][j];
            cout<<endl;
    }
}

void Matriz::gauss(int i, int j){

    //primera fila
    if( i != this->i && j != this->j)
        if( i < this->i){
            float m = this->matriz[i][j]/this->matriz[i+1][j];
            cout<<m<<endl;

                for(int k = i; k < this->j; k++) this->matriz[k][j] = this->matriz[k][j] - m*(this->matriz[k+1][j]);
            Matriz::gauss(i+1, j);
        }else if( i == this->i){ 
            i = 0;
            Error;
            Matriz::gauss(i+1, j+1);        
        }
}


Matriz::~Matriz(){}
