#include <iostream>
using namespace std;

int main()
{
    /*triangle area and perimeter calculator*/
    int l1; cout<<"Insert first side(base):"; cin>>l1;
    int l2; cout<<"Insert second side:"; cin>>l2;
    int l3; cout<<"Insert third side:"; cin>>l3;
    int h; cout<<"Insert height:"; cin>>h;

    cout<<"P="<<l1+l2+l3<<endl;
    cout<<"A="<<(l1*h)/2<<endl;
    return 0;
}