#include <iostream>
using namespace std;

int main()
{
    /*sort a vector using bubble sort*/

    int v[10]; int i; int n;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    bool ok;
    do {
        ok=true;
        for(i=0; i<n-1; i++) {
            if(v[i]>v[i+1]) {
                int aux=v[i];
                v[i]=v[i+1];
                v[i+1]=aux;
                ok=false;
            }
        }
    } while(!ok);
    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}