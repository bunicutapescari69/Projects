#include <iostream>
using namespace std;

int main()
{
    /*wake it find the biggest common divider 
    of 2 numbers*/
    
    int a; cout<<"Insert first number:"; cin>>a;
    int b; cout<<"Insert second number:"; cin>>b;
    int d;
    
    for(int i=1; i<=a && i<=b; i++) {
        if(a%i==0 && b%i==0) {
            d=i;
        }
    }
    
    cout<<"It is "<<d;

    return 0;
}