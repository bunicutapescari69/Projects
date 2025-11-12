#include <iostream>
using namespace std;
int main()
{
    /*check if x has all of its
    digits equal*/
    int x; cout<<"Insert number:"; cin>>x;
    bool e=true;
    int xl=x;
    
    while((xl>=10) && (e!=false)) {
        if (xl %10!= (xl/10)%10) {
            e=false;
        }
        xl=xl/10;
    }
    
    if(e==true) {
        return 1;
    }
    else if(e==false) {
        return 0;
    }
    else {
        return 2;
    }
}