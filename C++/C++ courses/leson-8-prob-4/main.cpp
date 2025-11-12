#include <iostream>
using namespace std;

int main()
{
    /*calculate the multiplying of uneven digits from
    a n number. if the number has no uneven digits, the result will be -1 */
    
    int n; cout<<"Insert number:"; cin>>n;
    int d; int nc=n; int s=0; //int v;//verifier for no uneven digits
    
    while(n!=0) {
        d=n%10;
        if(d%2!=0) {
            s=s+d;
        }
        n=n/10;
    }
    
    if(s==0) {
        s=-1;
    }
    
    cout<<"Sum is "<<s;
    
    return 0;
}