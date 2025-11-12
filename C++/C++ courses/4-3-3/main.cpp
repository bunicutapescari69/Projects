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
    
    int M=m[0][0];
    int mi=m[0][0];
    
    for(i=0; i<c; i++) {
        for(j=0; j<c; j++) {
            if(m[i][j]<mi) {
                mi=m[i][j];
            }
            if(m[i][j]>M) {
                M=m[i][j];
            }
        }
    }
    
    for(i=0; i<c; i++) {
        for(j=0; j<c; j++) {
            if(m[i][j]==mi) {
                m[i][j]=M;
            }
        }
    }
    
    for(i=0; i<c; i++) {
        for(j=0; j<c; j++) {
            cout<<"m["<<i<<"]["<<j<<"]= "<<m[i][j]<<endl;
        }
    }
    
    return 0;
}