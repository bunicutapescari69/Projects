#include <iostream>
using namespace std;

int main()
{
    /*find the mirroring of a number*/
    //yk what a mirroring is lol
    
    int n; cout<<"Insert number:"; cin>>n;
    int u;//u is n upside down
    
    while(n!=0) {
        u=u*10+(n%10);
        n=n/10;
    }
    
    cout<<"The mirroring is "<<u;
    return 0;
}