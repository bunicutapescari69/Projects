#include <iostream>
using namespace std;

int main()
{
    /*show the biggest and smallest digits
    of a n number*/

    int n; cout<<"Insert number:"; cin>>n;
    int bd=0; int sd=9; int cd;
    
    while(n!=0){
        cd=n%10;
        if(cd>bd) {
            bd=cd;
        }
        if(cd<sd) {
            sd=cd;
        }
        n=n/10;
    }
    
    cout<<"Biggest digit:"<<bd<<endl;
    cout<<"Smallest digit:"<<sd<<endl;
    
    return 0;
}