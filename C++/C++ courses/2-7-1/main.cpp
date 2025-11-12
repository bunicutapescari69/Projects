#include <iostream>
using namespace std;

int main()
{
    /*order a vector s elements through interchanging*/

    int v[10]; int i; int n;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=0; i<n; i++) {
        for(i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(v[j]<v[i]) {
                    int aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;
                }
            }
        }
    }
    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    return 0;
}