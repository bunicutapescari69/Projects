#include <iostream>
using namespace std;

int fib(int n) {
    if (n<=1)  {return n;}
    return fib(n - 1) + fib(n - 2);
}

int fibalt(int n) {
    if (n<=1) return n;
    
    int a=0, b=1, c;
    
    for (i=2; i<=n; i++)  {
        c=a+b;
        a=b;
        b=c;
    }
    return b;
}

int main()
{
    /*theres two complexity types:
    temporal > O(2^n)
    spacial*/
    
    cout<<fib(1)<<endl;
    cout<<fib(2)<<endl;
    cout<<fib(3)<<endl;
    cout<<fib(4)<<endl;
    cout<<fib(5)<<endl;
    cout<<fib(6)<<endl;
    cout<<fibalt(6)<<endl;
    
    return 0;
}