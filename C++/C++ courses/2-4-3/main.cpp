#include <iostream>
using namespace std;

int main()
{
    /*Sa se citeasca un tablou unidimensional v cu n elemente numere
    intregi. Sa se inlocuiasca toate valorile egale cu valoarea minima
    din tablou, cu valoarea maxima din tablou. */

    int v[10]; int i; int n; int min; int max; 
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    min=max=v[0];
    
    for(i=1; i<n; i++) {
        if(v[i]<min) {
            min=v[i];
        }
        if(v[i]>max) {
            max=v[i];
        }
    }
    
    for(i=0; i<n; i++) {
        if(v[i]==min) {
            v[i]=max;
        }
    }
    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}