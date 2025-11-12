#include <iostream>
using namespace std;

int main()
{
    /*Se citesc elementele unui tablou v unidimensional cu n (n<=10O) numere intregi cu cel mult patru cifre. Sa se insereze dupa fiecare valoare egala cu 0 din tablou valorile 1, 2 şi 3.  Exemplu: Daca v=(5, 0, 4, 0, 0 , 7) se obtine: v=(5, 0, 1, 2, 3, 4, 0, 1, 2, 3, 0, 1,2, 3, 7)*/

    int v[10]; int i; int n;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=0; i<n; i++) {
        if(v[i]==0) {
            n+=3;
            int aux1=v[i+1];
            int aux2=v[i+1];
            int aux3=v[i+1];
            v[i+1]=1;
            v[i+2]=2;   
            v[i+3]=3;
            v[i+4]=aux1;
            v[i+5]=aux2;
            v[i+6]=aux3;
        }
    }
    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}