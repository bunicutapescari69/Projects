#include <iostream>
using namespace std;

int main()
{
    /*check if the vector has only positive elements*/

    int v[10]; int i; int n; bool pos=true;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=0; i<n; i++) {
        if(v[i]<0) {
            pos=false;
        }
    }
    
    return pos;
}