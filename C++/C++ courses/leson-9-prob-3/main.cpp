#include <iostream>
using namespace std;

int main()
{
    /*find out if a x number is
    palindrome*/
    //basically a symmetrical number
    
    int x; cout<<"Insert number:"; cin>>x;
    int xc=x;
    int y;
    
    while (x!=0){
        y=y*10+(x%10);
        x=x/10;
    }
    cout<<xc<<" "<<y;
    if(xc==y) {
        return 1;
    }
    else {
        return 0;
    }
}