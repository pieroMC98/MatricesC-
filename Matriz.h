#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<iomanip>

#define Error(i) cout<<"<--------------------------------------->"<<i<<endl 
#define jump cout<<endl<<endl 
using namespace std;
// stack blitz
class Matriz{
    private:
        double** matriz;
        int     i,j;
    public:
        Matriz          (/* args */);
        ~Matriz         ();

        int  getI       ();
        void setI       (int);

        int  getJ       ();
        void setJ       (int);

        void getMatriz  ();
                
        void setMatriz  ();
        void setMatriz  (double[][7]);
        double* resultado  ();

        void gauss      (int,int);
};

