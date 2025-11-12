#include <iostream>
using namespace std;

int main()
{
    /*write a program that calculates
    the cube of a number*/
    
    int n;
    cout<<"Insert number:";
    cin>>n;
    int c=n;
    
    for(int i=0;i<2;i++){
        c=c*n;
    }
    
    cout<<"Cube is:"<<c;
    
    return 0;
}