#include <iostream>
using namespace std;

int main()
{
    /*show the dividers of a number
    and the power that they appear at*/
    
    //12->2^2 and 3^1
    
    int n; cout<<"Insert number:"; cin>>n;
    int d=2; int p=0;
    
    while(n>=d) {
        if(n%d==0) {
            n=n/d;
            p++;
        } else{
            if(p>0) {
                cout<<d<<" to the power of "<<p<<endl;
                p=0;
            }
            d++;
        }
    }
    
    if(p>0) {
        cout<<d<<" to the power of "<<p<<endl;
        p=0;
    }

    return 0;
}