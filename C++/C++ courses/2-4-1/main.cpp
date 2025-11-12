#include <iostream>
using namespace std;

int main()
{
    /* see if any 2 consecutive elements have different negativities. */

    int v[10]; int i; int n; bool r=false; int aux;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    aux=v[0];
    for(i=1; i<n; i++) {
       if((v[i]>=0 && aux<0) || (v[i]<0 && aux>=0)) {
           r=true;
       }
       aux=v[i];
    }
    
    return r;
}