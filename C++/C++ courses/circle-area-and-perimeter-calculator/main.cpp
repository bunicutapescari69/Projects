#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*circle area and perimeter calculator*/
    float pi=3.14159265; int r; cout<<"Insert radius:"; cin>>r;
    cout<<"P="<<2*pi*r<<endl;
    cout<<"A="<<pi*pow(r,2)<<endl;

    return 0;
}