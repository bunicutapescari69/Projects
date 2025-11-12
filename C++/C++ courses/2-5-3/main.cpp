#include <iostream>
using namespace std;

int main()
{
    /*Se citesc elementele unui tablou unidimensional cu n componente numere intregi.
    Sa se insereze dupa fiecare numar par din tablou valoarea negativa a acestuia*/

    int v[10]; int i; int n;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=0; i<n; i++) {
        if((v[i]%2==0) && (v[i]>0)) {
            for(int j=n; j>i; j--) {
                v[j+1]= v[j]; 
            }
            v[i+1]=-(v[i]);
            n++;
        }
    }
    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}