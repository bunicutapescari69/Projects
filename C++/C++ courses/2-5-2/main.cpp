#include <iostream>
using namespace std;

int main()
{
    /*insert every uneven element's double after them*/

    int v[10]; int i; int n;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=0; i<n; i++) {
        if(v[i]%2==1) {
            for(int j=n; j>i; j--) {
                v[j+1]= v[j]; 
            }
            v[i+1]=2*v[i];
            n++;
        }
    }
    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}