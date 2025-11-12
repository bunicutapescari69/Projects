#include <iostream>
using namespace std;

int main()
{
    /*make it calculate
    1*1+2*2 +..... +n*n */
    
    int n; cout<<"Insert number:"; cin>>n;
    int s;
    
    for(int i=0; i<=n; i++){
        s=(i*i) + s;
    }
    
    cout<<"Sum is "<<s;

    return 0;
}