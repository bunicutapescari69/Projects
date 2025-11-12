#include <iostream>
using namespace std;

int main()
{
    /*calculate the sum of the digits
    from a 3 digit long number*/
    
    /*method 1 -------------------------------
    int n;
    
    cout<<"Insert 3 digit long number:";
    cin>>n;
    
    //% is mod
    
    int n1= n%10;  //123%10=3
    n=(n-n1)/10;   //(123-3)/10=12
    int n2= n%10;  //12%10=2
    int n3=(n-n2)/10;  //(12-2)/10=1
    
    cout<<"Sum is:"<<n1+n2+n3;*/
    
    //method 2 -------------------------------
    int n;
    
    cout<<"Insert 3 digit long number:";
    cin>>n;
    int r;
    int s;
    
    for(int i=0;i<3;i++) {
        r=n%10;
        s=s+r;
        n=(n-r)/10;
    } //u already know what the for does lolol
    
    cout<<"Sum is:"<<s; 
    
    return 0;
}