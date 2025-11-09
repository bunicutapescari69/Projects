#include <iostream>
using namespace std;

int main()
{
    /*see if a sequence has all numbers
    the sam value*/
    int l; cout<<"Insert length:"; cin>>l;
    int a; cout<<"a="; cin>>a;
    bool p=true; int ap=a;
    
    for(int i=1; i<l; i++)  {
        cout<<"a="; cin>>a;
        if(a!=ap) {
            p=false;
        }
        ap=a;
    }

    return p;
}