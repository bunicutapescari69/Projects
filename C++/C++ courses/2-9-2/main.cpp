#include <iostream>
using namespace std;

int main()
{
    /*Fie un tablou v unidimensional cu n numere intregi (n<=100). Sa se elimine valorile din tablou care nu sunt numere prime.*/

    int v[100]; int i; int n; bool di;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=0; i<n; i++){
        di=false;
        for(int j=2; j<=v[i]/2; j++) {
            if(v[i]%j==0) {
                di=true;
            }
        }
        if(di) {
            v[i]=0;
            
        }
    }
    
    for(i=0; i<n; i++) { //an inexistent value is 0
        if(v[i]==0) {
            v[i]=v[i+1];
            n--;
        }
    }

    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}