#include<iostream>
#include<cstdlib>
#include<unistd.h>
#include<iomanip>
#define SIZE 7
#define Error(i) cout<<"<--------------------------------------->"<<i<<endl 
#define jump cout<<endl<<endl 
using namespace std;

class Matriz{
    protected:
        double** matriz;
        int     i,j;
    public:
        Matriz             (/* args */);
        ~Matriz            ();

        int  getI          ();
        void setI          (int);

        int  getJ          ();
        void setJ          (int);

        void getMatriz     ();
                
        void setMatriz     ();
        void setMatriz     (double[][SIZE]);
        double* resultado  (int,int,double(*)[SIZE]);

        void gauss         (int,int);
};

