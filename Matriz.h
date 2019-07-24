#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<iomanip>

#define Error(i) cout<<"<--------------------------------------->"<<i<<endl 
#define jump cout<<endl<<endl 
using namespace std;

class Matriz{
    private:
        float** matriz, **multiplicadores;
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
        void setMatriz  (float[][5]);
        void gauss      (int,int);
};

