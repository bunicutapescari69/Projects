#include <iostream>
using namespace std;

int main()
{
    /*write a program that reads three real numbers
    from the user and calculates the media of them*/
    
    float a,b,c,m;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"c="; cin>>c;//you get the gist
    
    m=(a+b+c)/3;
    cout<<"Media is " <<m;

    return 0;
}