#include <iostream>
using namespace std;

int main()
{
    /*eliminate every even element*/

    int v[10]; int i; int n;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=0; i<n; i++) {
        if(v[i]%2==0) {
            for(int j=i; j<=n; j++) {
                v[j]=v[j+1];
            }
            n--;
        }
    }
    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}