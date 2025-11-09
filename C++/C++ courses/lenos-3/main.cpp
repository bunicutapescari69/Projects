/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

int main()
{
    //theres +,-,*,/ like always
    
    float a;
    float b;
    char c;
    cout<<"First number:";
    cin>>a;
    cout<<"Second number:";
    cin>>b;
    cout<<"Operation (+,-,*,/): ";
    cin>>c;
    
    //i modded the code a lil bit
    if(c=='+') {
        cout<<"Answer is "<<a+b;
    }
    else if(c=='-') {
        cout<<"Answer is "<<a-b;
    }
    else if(c=='*') {
        cout<<"answer is "<<a*b;
    }
    else if(c=='/') {
        cout<<"Answer is "<<a/b;
    }
    else {
        cout<<"Invalid operation";
    }
    return 0;
}