#include <iostream>
using namespace std;

int main()
{
    int a[7][7], i, j;
    
    for(i=0; i<6; i++) {
        for(j=0; j<6; j++) {
            a[i][j]=0;
        }
    }
    for(i=0; i<6; i++) {
        for(j=0; j<6; j++) {
            if(i==0 || i==5 || j<2 || j>3) {
                a[i][j]=i+1;
            }
        }
    }
    
    for(i=0; i<6; i++) {
        for(j=0; j<6; j++) {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}