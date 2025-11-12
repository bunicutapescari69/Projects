#include <iostream>
using namespace std;

int main()
{
    /*Sa se ordoneze crescator elementele vectorului dupa ultima cifra.*/

    int v[10]; int i; int n;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    return 0;
}