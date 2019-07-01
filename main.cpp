#include "Matriz.cpp"
int main()
{
    Matriz m;

    int i = 0, j;
    cout<<"Numero de matrices a introducir "<<endl;
    cin>> j;

    Matriz **M = new Matriz*[j];
    do{
         M[i] = new Matriz();
    }while( (i++) < j-1);


    cout<<"instanciar::"<<endl;
    int n;
    i = 0;
    do{
        cout<<"introduzca N para matriz "<<i+1<<endl;
        cin>>n;
        M[i]->setN(n);

        cout<<"-------------"<<endl;
        M[i]->setMatriz();

    }while( (i++) < j-1);
    system("cls");

    i = 0;
    do{
        M[i]->getMatriz();
        cout<<endl;
    }while((i++) < j-1);

    do{
        M[i]->~Matriz();
    }while((i++) < j-1);

    return 0;
}