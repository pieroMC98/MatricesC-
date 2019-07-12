#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include "Fraccion.cpp"
#define Error(i) cout<<"#######################################-->"<<i<<endl 
#define jump cout<<endl<<endl 
using namespace std;

class Matriz{
    private:
        int** matriz;
        int   i,j;
    public:
        Matriz  (/* args */);
        ~Matriz ();

        int  getI   ();
        void setI   (int);

        int  getJ   ();
        void setJ   (int);

        void getMatriz  ();
        void getMatriz  (int[][5]);
        
        void setMatriz  ();
        void setMatriz  (int[][5]);
        void gauss      (int,int);

};

