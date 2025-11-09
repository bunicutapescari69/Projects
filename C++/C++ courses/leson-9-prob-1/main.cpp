#include <iostream>
using namespace std;

int main()
{
    /*find the biggest common divider
    for two inputted numbers. we will
    use euclid's algorithm*/
    
    int a; cout<<"First number:"; cin>>a;
    int b; cout<<"Second number:"; cin>>b;
    
    while(a!=b) {
        if(a>b) {a=a-b;}
        else {b=b-a;} 
    }
    
    cout<<"The biggest common divider is "<<a;

    return 0;
}