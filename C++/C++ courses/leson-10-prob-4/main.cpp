#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*show for two x nd y numbers, the number obtained
    by glueing the numbers toghether*/
    
    int x; cout<<"Insert first number:"; cin>>x;
    int y; cout<<"Insert second number:"; cin>>y;
    int z=0; int xc=x; int yc=y; int d=0;
    
    while(y>0) {
        d++;
        y=y/10;
    }
    
    y=yc;
    z=x*pow(10,d)+y;
    
    cout<<z;
    
    return 0;
}