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

void Matriz::setMatriz( double A[][  SIZE ] ){
  
    this->matriz = new double*[ this->i ];        
    for( int k = 0; k < this->j ; k++) (this->matriz)[k] =new double[ this->j ];
  
    for(int i = 0; i< this->i;i++)
        for(int j = 0; j< this->j;j++) this->matriz[i][j] = A[i][j];
}

void Matriz::getMatriz(){

    for(int i = 0; i < this->i; i++){
        for( int j = 0; j< this->j; j++)
        cout<<setprecision(3)<< "\t "<<(this->matriz)[i][j];
            cout<<endl<<endl<<endl;
    }
}

void Matriz::setMatriz(){
    this->matriz = new double*[ this->i ];        
        for( int k = 0; k < (this->j + (this->i - this->j)); k++) (this->matriz)[k] = new double[this->j + (this->i - this->j) ];        

            for( int i = 0; i< this->i; i++)
                for( int j = 0; j < this->j; j++){
                    cout<<"Introduzca ["<<i+1<<"]["<<j+1<<"]: "<<endl;
                    cin>>(this->matriz)[i][j];
                }

}

double* resultado  (int i,int j,  double(*)[ SIZE ])
{/* 
    double* aux = new double[7];
        if( i < 7 ){
            
            return aux[i] + resultado();
        }else return aux;
 */
return 0;
}

void Matriz::gauss(int i, int j){
   if(j < (this->i - 1) ){   
        if( i < (this->i)){
  
             double m = this->matriz[i][j] / this->matriz[j][j];
   
            if( !m )  gauss(j+2,j+1);

            for( int k = 0; k < this->j ; k++) 
                this->matriz[i][k] -= m*this->matriz[j][k];            
            
            gauss(i+1, j);
        }else  gauss(j+2, j+1);  
    }
}


Matriz::~Matriz(){}

