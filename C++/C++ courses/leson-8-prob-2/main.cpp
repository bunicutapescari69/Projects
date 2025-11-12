#include <iostream>
using namespace std;

int main()
{
    /*show how many times a x digit
    appears in a n number*/
    
    int n; cout<<"Insert number:"; cin>>n;
    int x; cout<<"Insert target digit:"; cin>>x;
    int e;
    int nr=n;
    
    if (x>9 || 0>x) {
        cout<<"ERR1:Invalid digit";
        return 1;
    }
    while(n!=0) {
        if(x==n%10) {
            e++;
        }
        n=n/10;
    }
    
    cout<<"The digit "<<x<<" has been encountered "<<e<<" times in "<<nr;
    
    return 0;
}