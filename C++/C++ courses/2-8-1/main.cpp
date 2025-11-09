#include <iostream>
using namespace std;

int main()
{
    /*sort with insertion sort */

    int v[10]; int i; int n; int x; int j;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=1; i<n; i++) {
        x=v[i];
        j=i-1;
        while(j>=0 && v[j]>x) {
            v[j+1]=v[j];
            j--;
        }
        v[j+1]=x;
    }
    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}