#include <iostream>
using namespace std;

int main()
{
    /*show pos wher x is in a vector*/

    int v[10]; int i; int n; int x; int l,m,r,pos;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if(v[j]>v[j+1]) {
                int aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;
    
    cout<<"Search for: "; cin>>x;
    
    l=0; r=n-1; pos=-1;//-1 meaning the num wasnt found 
    
    while(l<=r && pos==-1) {
        m=(l+r)/2;
        
        if(v[m]==x) {
            pos=m;
        }
        else if(v[m]<x) {
            l=m+1;
        }
        else if(v[m]>x) {
            r=m-1;
        }
        else{
            cout<<"Something went wrong...";
            return 1;
        }
    }
    
    if(pos>=0) {
        cout<<x<<" is on index "<<pos;
        return 0;
    }
    else if(pos==-1) {
        cout<<"404 not found ig";
        return 404;
    }
}