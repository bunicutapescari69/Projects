#include <iostream>
using namespace std;

int main()
{
    /*find the biggest number from
    an sequence of n numbers*/
    
    int n; cout<<"Insert seqence length:"; cin>>n;
    int a; cout<<"Insert first number from the sequence:"; cin>>a;
    int m=a;
    
    for(int i=2; i<=n; i++) {
        cout<<"a=";
        cin>>a;
        if(a>m) {
            m=a;
        }
    }
    
    cout<<"The biggest number from the sequence is "<<m;

    return 0;
}