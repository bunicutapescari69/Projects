#include <iostream>
using namespace std;

int main()
{
    /*calculate the sum of the
    digits of a number*/
    
    int n; cout<<"Insert number:"; cin>>n;
    int s;
    
    while(n!=0) {
        s=s+n%10;
        n=n/10; /*the digit we exctracted will dissapear
        bc the number is int type*/
    }
    
    cout<<"The sum of the number's digits is "<<s;
    
    return 0;
}