#include "Matriz.cpp"
#include<vector>

int sumaRecursiva(vector<int> *V, int i);
void setMatrices(Matriz **M,int i, int j );
void getMatrices(Matriz **M,int i, int j );


int main()
{
    Matriz m;

    int i = 0, j;
    cout<<"Numero de matrices a introducir "<<endl;
    cin>>j;

    Matriz **M = new Matriz*[j];
    do{
         M[i] = new Matriz();
    }while( (i++) < j-1);

    
    cout<<"instanciar::"<<endl;
   
    setMatrices(M,0,j);
    system("cls");

        getMatrices(M,0,j);
  
    vector<int> v;
    v.reserve(10);

    for( int i = 0; i<10;i++) v[i] = i;

    cout<<sumaRecursiva(&v, 0)<<endl;

    i = 0;
    do{
        M[i]->~Matriz();
    }while((i++) < j-1);

    return 0;
}

int sumaRecursiva(vector<int> *V, int i){
    if( i >= 10 ) return 0;
        else{
            return V[0][i] + sumaRecursiva(V,i+1);
        }       
}

void setMatrices(Matriz **M,int i, int j ){
    int n;
    if( i <= j-1){
        cout<<"introduzca N para matriz "<<i+1<<endl;
        cin>>n;
        M[i]->setN(n);

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
