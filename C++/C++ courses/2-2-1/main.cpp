#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*v=[3 6 5 2] 
    i=0,1,....,n
    n=nr de elemente
    
    determine the biggest element from a 
    vector and how many times it appears*/
    
    int v[10];
    int n; cout<<"Insert length:"; cin>>n;
    int e;
    
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    
    int max=v[0];
    for(int i=1; i<n; i++) {
        if(v[i]>max) {
            max=v[i];
        }
    }
    
    for(int i=0; i<n; i++) {
        if(v[i]==max) {
            e++;
        }
    }
    
    cout<<"The biggest number is "<<max<<", found "<<e<<" times.";
    
    return 0;
}