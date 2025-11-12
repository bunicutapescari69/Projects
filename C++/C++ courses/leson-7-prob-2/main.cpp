
#include <iostream>
using namespace std;

int main()
{
    /* show all the even numbers between two
    inputted numbers*/
    
    int a; cout<<"First number:"; cin>>a;
    int b; cout<<"Second number:"; cin>>b;
    int c; //making sure a is not bigger than b
    if(a>b){
        c=a;
        a=b;
        b=c;
    }
    
    //cout<<a<<b; //run this to test if theyre swapped
    
    for(int i=a; i<=b; i++){
        if(i % 2 == 0) {
            cout<<i<<endl;
        }
    }
    
    return 0;
}