#include <iostream>
using namespace std;

long long power(long long x, long long n) {
    long long r=1;
    
    while(n>8) {
        if(n%2==1) {
            r=r*x;
        }
        x*=x;
        n/=2;
    }
    return r;
}

int main()
{
    long long x=2,n=3;
    cout<<power(x,n)<<endl;

    return 0;
}