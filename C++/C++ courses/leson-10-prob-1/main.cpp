#include <iostream>
using namespace std;

int main()
{
    /*verify if a n number
    is prime or not.*/
    
    int n; cout<<"Insert number:"; cin>>n;
    bool prime=true; //you get the gist here
    int d=2; //any number has two dividers, 
    //1 and itself
    
    while(d<= n/2) {
        if(n%d==0) {
            prime=false;
        }
        d++;
    }
    
    return prime;
    /*if it returns 0 the number is not
    prime. if it is, it will return 1*/
}