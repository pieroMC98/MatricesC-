#include "Matriz.cpp"
#include<vector>

int sumaRecursiva(vector<int> *V, int i);
void setMatrices(Matriz **M,int i, int j );
void getMatrices(Matriz **M,int i, int j );
void busquedaRecursiva(int i, int j,char l, int);

int main()
{
    

    /* int i = 0, j;
    cout<<"Numero de matrices a introducir "<<endl;
    cin>>j;

    Matriz **M = new Matriz*[j];
    do{
         M[i] = new Matriz();
    }while( (i++) < j-1);

    
    cout<<"instanciar::"<<endl;
   
    setMatrices(M,0,j);
    system("cls");

        getMatrices(M,0,j); */

    int aux[][5] = {
        {2,3,5,8,2},
        {1,0,3,2,1},
        {4,3,2,1,1},
        {5,2,3,4,6}
    };
    Matriz *m = new Matriz();
   // m.setN(3);
   // m->setMatriz((int**)aux);
    //m->getMatriz(4,5);
    // m.gauss(0,0);
    //m.getMatriz();

      //  getMatrices(M,0,j);

    // M[0]->getMatriz();
  
    /* vector<int> v;
    v.reserve(10);

    for( int i = 0; i<10;i++) v[i] = i;

    cout<<sumaRecursiva(&v, 0)<<endl;

    i = 0;
    do{
        delete M[i]
    }while((i++) < j-1);
 */
    busquedaRecursiva(0,101,'\0',0);
    return 0;
}

int sumaRecursiva(vector<int> *V, int i){
    if( i >= 10 ) return 0;
        else{
            return V[0][i] + sumaRecursiva(V,i+1);
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
