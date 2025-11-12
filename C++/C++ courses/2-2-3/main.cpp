#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*show the component of a vector with the most dividers*/
    int v[10];
    int n; cout<<"Insert length:"; cin>>n;
    int m=0; int e;
    
    for(int i=0; i<n; i++) {
        cout<<"Element "<<i<<"=";
        cin>>v[i];
    }
    
    cout<<endl;
    
    e=v[0];
    for(int j=1; j<=e; j++) {
        if(e%j==0) {
            m++;
        }
    }
    for(int i=1; i< n; i++) {
        int nd=0;
        for(int k=1;k<=v[i]; k++) {
            if(v[i]%k==0) nd++;
        }
        
        if((nd>=m)&&(e>=v[i])) {
            m=nd;
            e=v[i];
        }
    }
    cout<<"the element is "<< e;
    return 0;
}