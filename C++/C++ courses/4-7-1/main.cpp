#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    /*
    
    In secventa de instructiuni de mai jos, variabilele i si j sunt de tip intreg, iar variabila A este de tip 
    tablou bidimensional cu 6 linii si 6 coloane, numerotate de la 0 la 5, cu elemente numere intregi. Inainte de 
    executarea secventei, toate elementele tabloului sunt nule. Fara a utiliza alte variabile, scrieti o instructiune care 
    poate inlocui punctele de suspensie astfel incat, in urma executarii secventei obtinute, tabloul memorat in variabila 
    A sa aiba elementele din figura de mai jos:
    
    0 1 2 3 4 5 
    1 0 1 2 3 4 
    2 1 0 1 2 3 
    3 2 1 0 1 2 
    4 3 2 1 0 1 
    5 4 3 2 1 0 
    
    
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            ....................
        }
    }
    
    */
    
    int a[6][6]; int i,j;
    
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            a[i][j]=abs(i-j);
        }
    }
    
    for(i = 0; i < 6; i++) {
        for(j = 0; j < 6; j++) {
            cout<<a[i][j]<<" ";
        }
    cout<<endl;
    }
    
    
    
    return 0;
}