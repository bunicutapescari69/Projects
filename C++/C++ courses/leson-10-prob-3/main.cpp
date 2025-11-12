#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*cxeck if int x has its 
    digits organised from small to big*/
    
    int x; cout<<"Insert number:"; cin>>x;
    int xc=x; int n1=0; int n2=0; bool o=true;
    
    while(x>9) {
        n2=x%10;
        n1=(x%100)/10;
        if(!(n1<n2)) {
            o=false;
        }
        x=x/10;
    }
    return o;
    //if 0 then false, if 1 then true
}