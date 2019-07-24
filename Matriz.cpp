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

void Matriz::setMatriz( float A[][ 5 ] ){
    this->matriz = new float*[ 4 ];        
    for( int k = 0; k < 5; k++) (this->matriz)[k] =new float[5];
  
    for(int i = 0; i<4;i++)
        for(int j = 0; j<5;j++) this->matriz[i][j] = A[i][j];
}

void Matriz::getMatriz(){
    // this->multiplicadores =(float**) calloc(this->i, sizeof(float*));
    //     for(int i = 0; i<this->j; j++) multiplicadores[i] = (float)calloc(j,sizeof(float));

    for(int i = 0; i < this->i; i++){
        for( int j = 0; j< this->j; j++)
        cout<<setprecision(3)<< "\t "<<(this->matriz)[i][j];
            cout<<endl<<endl;
    }
}

void Matriz::setMatriz(){
    this->matriz = new float*[ this->i ];        
        for( int k = 0; k < (this->j + (this->i - this->j)); k++) (this->matriz)[k] = new float[this->j + (this->i - this->j) ];        

            for( int i = 0; i< this->i; i++)
                for( int j = 0; j < this->j; j++){
                    cout<<"Introduzca ["<<i+1<<"]["<<j+1<<"]: "<<endl;
                    cin>>(this->matriz)[i][j];
                }

}

void imprimirM(string **M){
    for (size_t i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout<<M[i][j];
        }
        cout<<"\n";
    }
    
}

void Matriz::gauss(int i, int j){
   if(  i <= 4 && j <= 3){   
        if( i <= 3){
               float m = this->matriz[i][j] / this->matriz[j][j];
  
            //   cout<<("(" +to_string(this->matriz[i][j])+"/"+to_string(this->matriz[j][j])+")\n");
            for( int k = 0; k<5; k++) this->matriz[i][k] = this->matriz[i][k] - m*this->matriz[j][k];
            gauss(i+1, j);
        }else{

          gauss(j+2, j+1);  
        } 
    }
}


Matriz::~Matriz(){}

