#include "Matriz.h"
#include "Fraccion.h"
#include<vector>
using namespace std;

Matriz** createMatrix       (int *j);
bool     deleteMatrix       (int j, Matriz** M);
void     busquedaRecursiva  (int i, int j,char l, int);
int      sumaRecursiva      (vector<int> *V, int i);
void     setMatrices        (Matriz **M,int i, int j );
void     getMatrices        (Matriz **M,int i, int j );

int main(){
    double aux[][5] = {
        {2,1,-1,2,5},
        {4,5,-3,6,9},
        {-2,5,-2,6,4},
        {4,11,-4,8,2}
    };

    double aux1[][4] = {
        {2,1,-1,2},
        {4,5,-3,6},
        {-2,5,-2,6},
        {4,11,-4,8}
    };

    double loFlipas[][7] = {
      { 1, 1 ,-2, 1, 3,-1, 4},
      { 2,-1, 1, 2, 1,-3, 20},
      { 1, 3,-3,-1, 2, 1,-15},
      { 5, 2,-1,-1, 2, 1,-3},
      {-3,-1, 2, 3, 1, 3, 16},
      { 4, 3, 1,-6,-3,-2,-27}  
    };

      Matriz *m = new Matriz;
              m->setI(6);
              m->setJ(7);
 
    m->setMatriz((double(*)[7])loFlipas);
    m->getMatriz();
    jump;
    m->gauss(1,0);
    cout<<endl<<endl;
    m->getMatriz();


    /* if( deleteMatrix(j,M) == true){
        cout<<"Elementos borrados correctamente"<<endl;
        return EXIT_SUCCESS;
    }else{
        cout<<"Error liberar memoria"<<endl;
        return EXIT_FAILURE;
    } */
    //busquedaRecursiva(0,101,'\0',0);

    m->~Matriz();

    return 0;
}

int sumaRecursiva(vector<int> *V, int i){
    if( i >= 10 ) return 0;
        else{
            return V[0][i] + sumaRecursiva(V,i+1);
        }       
}

Matriz** createMatrix(int *j){    
    cout<<"Numero de matrices a introducir "<<endl;
    cin>>*j;

    Matriz **M = new Matriz*[*j];
    int i = 0;
        do{
            M[i] = new Matriz();
        }while( (i++) < (*j)-1);
return M;
}

bool deleteMatrix(int j, Matriz** M){
   int i = 0;
    do{
        delete M[i];
        M[i]->~Matriz();
    }while( (i++) < j-1 );

    //delete []M;
    cout<<M;
return ( M == NULL ? true : false);
}

void setMatrices(Matriz **M,int i, int j ){
    int x,y;
    if( i <= j-1){
        cout<<endl<<endl;
        cout<<"introduzca N para matriz "<<i+1<<endl;
        cin>>x>>y;
        M[i]->setI(x);
        M[i]->setJ(y);

        cout<<"-------------"<<endl;
        M[i]->setMatriz();

    setMatrices(M,i+1, j);
    }
}

void getMatrices(Matriz **M,int i, int j ){
      if( i <= j-1){
        M[i]->getMatriz();
        cout<<endl;
        getMatrices(M, i+1, j);
    }
}

void busquedaRecursiva(int i, int j,char l, int intentos){
    int k = (i+j)/2; 

    cout<<"Su numero es "<<k<<" | opciones( =, <, >)"<<endl;
    cin>>l;

    if( l == '=') cout<<"Su numero es "<<k<<", en "<<intentos<<" intentos."<<endl;
        else if( l == '<')  busquedaRecursiva(i,k,l,intentos+1);
          else if( l == '>')  busquedaRecursiva(k,j,l,intentos+1);    
}

