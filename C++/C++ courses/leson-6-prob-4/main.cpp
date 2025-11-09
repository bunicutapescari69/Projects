#include <iostream>
using namespace std;

int main()
{
    /*write a program that calculates and
    shows the sum of n numbers of non-even
    and even numbers*/
    //non-even-----------------------------------------
    int n;
    cout<<"Insert number:";
    cin>>n;
    int s;
    
    cout<<"The not even numbers are:";
    
    for(int i=1;i<=n;i=i + 2) {
        cout<<i<<" ";
        s=s+i;
    }
    
    cout<<endl<<"The sum of all of the numbers is:"<<s;
    
    //even--------------------------------------------
    n=0;
    s=0;
    cout<<endl<<"Insert number:";
    cin>>n;
    
    cout<<"The not even numbers are:";
    
    for(int i=0;i<=n;i=i + 2) {
        cout<<i<<" ";
        s=s+i;
    }
    
    cout<<endl<<"The sum of all of the numbers is:"<<s;
    return 0;
}