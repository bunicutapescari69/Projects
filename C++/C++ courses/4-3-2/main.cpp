#include <iostream>
using namespace std;

int main()
{
    /*int m[lines][columns] */
    int i; int j; int c; int l;
    cout<<"Insert l: "; cin>>l;
    cout<<"Insert c: "; cin>>c;
    
    int m[l][c];
    
    for(i=0; i<l; i++) {
        for(j=0; j<c; j++) {
            cout<<"m["<<i<<"]["<<j<<"]= "; cin>>m[i][j];
        }
    }
    
    i=(c*c-c)/2;
    
    cout<<i;
    
    return 0;
}