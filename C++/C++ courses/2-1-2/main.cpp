#include <iostream>
using namespace std;

int main()
{
    /*verify if a num sequence is
    in crescendo order*/
    
    int n; cout<<"Insert sequence length:"; cin>>n;
    int a; cout<<"a="; cin>>a;
    bool c=true; int ap=a;
    
    for(int i=1; i<n; i++) {
        cout<<"a="; cin>>a;
        if(a<ap) {
            c=false;
        }
        ap=a;
    }
    
    return c;
}