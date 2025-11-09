
#include <iostream>
using namespace std;

int main()
{
    /*write a program that reads
    the radius of a circle
    from the user and calculates the 
    perimeter and area of said circle*/
    
    const float pi=3.14159;
    float r,p,a;
    
    cout<<"Radius is:"; cin>>r;
    
    p=pi*r*2;
    a=pi*r*r;
    
    cout<<"Perimeter is "<<p<<endl;
    cout<<"Area is "<<a;
    
    
    return 0;
}