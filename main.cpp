#include "Matriz.cpp"
#include<vector>

Matriz** createMatrix       (int *j);
bool     deleteMatrix       (int j, Matriz** M);
void     busquedaRecursiva  (int i, int j,char l, int);
int      sumaRecursiva      (vector<int> *V, int i);
void     setMatrices        (Matriz **M,int i, int j );
void     getMatrices        (Matriz **M,int i, int j );
//void     WTF                (int** v);

void WTF( int v[][5]){
    cout<<v[0][0]<<endl;
}
int main()
{
    //system("clear");

    /*Matriz **M = createMatrix(&j);
    
    cout<<"instanciar::"<<endl;
   
    setMatrices(M,0,j);
    system("clear");

    getMatrices(M,0,j);
    M[0]->gauss(0,0);
    getMatrices(M,0,j);*/

    int aux[][5] = {
        {2,3,5,8,2},
        {1,0,3,2,1},
        {4,3,2,1,1},
        {5,2,3,4,6}
    };

      Matriz *m = new Matriz;
    // cout<<"fila: "<<sizeof (aux)/ sizeof (aux[0])<<endl<<"columna: "<<sizeof (aux[0])/sizeof(int)<<endl;

    m->setI(4);
    m->setJ(5);
    m->setMatriz(aux);

    // m->getMatriz();
    m->gauss(0,0);
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

