#include <iostream>
using namespace std;

int main()
{
    /*show prime numbers, the prime numbers who's inverted is still a prime number/ */

    int v[10]; int i; int n; int p; int inv=0; int aux;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    cout<<"The prime numbers are: ";
    
    for(i=0; i<=n; i++) {
        int nd=0;
        for( int j=1; j<=v[i]; j++) {
            if(v[i]%j==0) {
                nd++;
            }
        }
        if(nd==2) {
            cout<<v[i]<<" ";
        }
    }
    
    cout<<endl<<"The inverted and not inverted prime numbers are: ";
    
    for(i=0; i<=n; i++) {
        int nd=0;
        for( int j=1; j<=v[i]; j++) {
            if(v[i]%j==0) {
                nd++;
            }
        }
        if(nd==2) {
            nd=0;
            aux=v[i];
            while(aux!=0) {
                inv=inv*10+ aux%10;
                aux=aux/10;
            }
            for( int j=1; j<=v[i]; j++) {
                if(v[i]%j==0) {
                    nd++;
                }
            }
            if(nd==2) {
                cout<<v[i]<<" ";
            }
        }
    }
    
    return 0;
}