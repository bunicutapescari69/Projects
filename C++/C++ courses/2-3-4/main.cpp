#include <iostream>
using namespace std;

int main()
{
    /* Se citesc elementele unui tablou unidimensional cu n componente numere intregi.
    Sa se realizeze urmatoarele prelucrari: 
    a) Sa se afiseze si sa se numere elementele pare de pe pozitiile impare ale unui vector 
    b) Sa se numere elementele pozitive si pare
    c) Calculati produsul elementelor negative
    d) Sa se calculeze media aritmetica a elementelor pozitive*/

    int v[10]; int i; int n; int e; int p1=1; int sm=0; int m=0;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=1; i<n; i+=2) {
        if(v[i]%2==0) {
            cout<<v[i]<<" ";
            e++;
        }
    }
    cout<<endl<<"There are "<<e<<" even elements in uneven indexes"<<endl;
    e=0;
    
    for(i=0; i<n; i++) {
        if(!(v[i]<0) && v[i]%2==0) {
            e++;
        }
    }
    cout<<"There are "<<e<<" positive and even elements"<<endl;
    
    for(i=0; i<n; i++) {
        if(v[i]<0) {
            p1*=v[i];
        }
    }
    cout<<"The product of the negative numbers is "<<p1<<endl;
    e=0;
    
    for(i=0; i<n; i++) {
        if(v[i]>=0) {
            e++;
            sm+=v[i];
        }
    }
    m=sm/e;
    
    cout<<"The media of all the positive elements is "<<m;
    
    return 0;
}