#include <iostream>
using namespace std;

int main()
{
    /*make it w=verify if a number is prime or not
    */
    
    int n; cout<<"Insert number:"; cin>>n;
    int d=0;
    
    for(int i=1; i<=n; i++) {
        if(n%i==0){
            d++;
        }
    }
    
    if(d==2){
        cout<<"Number is prime";
        return 1;
    }
    else {
        cout<<"Number is not prime";
        return 0;
    }
}