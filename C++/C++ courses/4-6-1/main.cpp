#include <iostream>
using namespace std;

int main()
{
    int n=100;
    int c=0;//nr de iteratii, puterea la care s-ar scrie n la 2
    
    while(n>1) {
        n=n/2;
        c++;
    }

    cout<<"the iteration number is "<<c<<endl;

    return 0;
}