#include <iostream>
using namespace std;

int main()
{
    /*
    
    Variabilele i si j sunt de tip intreg, iar variabila a memoreaza un tablou bidimensional cu 5 
    linii si 5 coloane, avand initial toate elementele egale cu 0.
    Fara a utiliza alte variabile decat cele mentionate, scrieti secventa de instructiuni de mai jos, inlocuind punctele
    de suspensie, astfel incat, in urma executarii secventei obtinute, variabila a sa memoreze tabloul alaturat.
    
    for(int i = 1; i <= 5; i++) {
        for(int j = 1; j <= 5; j++) {
            ........
        }
    }
    
    4 4 4 4 4
    4 3 3 3 3 
    4 3 2 2 2 
    4 3 2 1 1
    4 3 2 1 0
    
    */
    
    int a[5][5];
    
    for(int i = 0; i <= 4; i++) {
        for(int j = 0; j <= 4; j++) {
            if(i==0 || j==0) {
                a[i][j]=4;
            } else if(i==1 || j==1) {
                a[i][j]=3;
            } else if(i==2 || j==2) {
                a[i][j]=2;
            } else if(i==3 || j==3) {
                a[i][j]=1;
            } else if(i==4 || j==4) {
                a[i][j]=0;
            }
        }
    }
    
    for(int i = 0; i <= 4; i++) {
        for(int j = 0; j <= 4; j++) {
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
    

    return 0;
}