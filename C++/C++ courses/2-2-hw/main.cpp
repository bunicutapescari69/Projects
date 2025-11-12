#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*check if a vector is organised from low to high 
    or high to low*/
    bool lth=true; bool htl=true;
    int n; cout<<"Insert length (up to 10) :"; cin>>n;
    int v[10]; int a;
    
    for(int i=0; i<n; i++) {
        cout<<"Element "<<i<<"=";
        cin>>v[i];
    }
    
    a=v[0];
    
    for(int i=1; i<n; i++) {
        if(v[i]<a) {
            lth=false;
        }
        a=v[i];
    }
    
    for(int i=1; i<n; i++) {
        if(v[i]>a) {
            htl=false;
        }
        a=v[i];
    }
    
    if(lth) {
        cout<<"Elementele are organised from low to high";
    }
    if(htl) {
        cout<<"Elements are organised from high to low";
    }
    if(!lth && !htl) {
        cout<<"Elements are not organised";
    }
    
    return 0;
}