#include <iostream>
using namespace std;

int main()
{
    /*write a program in c++
    that calculates the factorial
    of a read number*/
    
    int n;
    cout<<"Insert number:";
    cin>>n;
    int f=1;
    
    for(int i=1;i<=n;i++){
        f=f*i;
    }
    
    cout<<"Factorial is:"<<f;

    return 0;
}