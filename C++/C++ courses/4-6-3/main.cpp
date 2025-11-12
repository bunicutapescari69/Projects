#include <iostream>
using namespace std;

int main()
{
    int k; int n;
    cout<<"n="; cin>>n;
    cout<<"k="; cin>>k;
    
    int m[n][n];
    for(int i=0; i<n; i++) {
        m[i][i]=k*(i+1);
        for( int j=i-1; j>=0; j-- ) {
            m[i][j]=m[i][j+1] +1;
        }
        for( int j=i+1; j<0; j++ ) {
            m[i][j]=m[i][j-1] -1;
        }
    }
    
    for(int i=0; i<n; i++) {
        for(int j=0; j<n; j++) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}