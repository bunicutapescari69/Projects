#include <iostream>
using namespace std;

int main()
{
    /*write a program that calculates the 
    net salary of an employee,having
    the following rules:
    -if brut is smaller than 2000 lei, 10% imposit
    -if 2000-5000 lei,15% imposit
    -if more than 5000,20%imposit
    */
    float bs,ns;
    cout<<"Insert brute salary:"; cin>>bs;
    
    if(bs<2000) {
        ns=bs-(0.1*bs);
    }
    else if(bs<5000) {
        ns=bs-(0.15*bs);
    }
    else {
        ns=bs-(0.2*bs);
    }
    
    cout<<"Your net salary is "<<ns<<" lei";

    return 0;
}