#include <iostream>
using namespace std;

int main()
{
    /*order the elements on even indexes crescendo and the uneven index elements decrescendo */

    int v[10]; int i; int n;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++){
            if((v[i]>v[j]) && (i%2==0) && (j%2==0)) {
                int aux=v[i]; //i e stanga j e dreapta
                v[i]=v[j];
                v[j]=aux;
            }
            if((v[i]<v[j]) && (i%2==1) && (j%2==1)) {
                int aux=v[j]; 
                v[j]=v[i];
                v[i]=aux;
            }
        }
    }
    
    for(i=0; i<n; i++) {
       cout<<v[i]<<" "; 
    }
    // ! OUTPUT IS ALTERNATIVE !
    return 0;
}