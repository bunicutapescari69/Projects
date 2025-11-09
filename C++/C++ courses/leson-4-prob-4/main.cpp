#include <iostream>
using namespace std;

int main()
{
    /*make a program that converts a grade into text
    */
    int g;
    cout<<"insert grade(1-10):"; cin>>g;
    
    if(g>0 && g<5) {
        cout<<"Inufficient";
    }
    else if(g>4 && g<7) {
        cout<<"Sufficient";
    }
    else if(g>6 && g<9) {
        cout<<"Good";
    }
    else if(g>8 && g<11) {
        cout<<"Very good";
    }
    else if(g==-9) {
        cout<<"i didnt mean it literally";
    }
    else {
        cout<<"Invalid grade";
    }

    return 0;
}