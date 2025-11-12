#include <iostream>
using namespace std;

int main()
{
    /*/* Se citeste un sir de n numere intregi de la tastatura. Se cere:
    a) suma sirului
    b) suma numerelor de pe pozitii pare
    c) produsul sirului
    d) produsul numerelor de pe pozitii impare */*/

    int v[10]; int i; int n; int s1=0; int s2=0; int p1=1; int p2=1;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=0;i<n; i++) {
        s1=s1+v[i];
    }
    cout<<"Sum of all elements is "<<s1<<endl;
    
    for(i=0;i<n; i+=2) {
        s2=s2+v[i];
    }
    cout<<"Sum of even index elements is "<<s2<<endl;
    
    for(i=0;i<n; i++) {
        p1=p1*v[i];
    }
    cout<<"Product of all elements is "<<p1<<endl;
    
    for(i=1;i<n; i+=2) {
        p2=p2*v[i];
    }
    cout<<"Product of uneven index elements is "<<p2<<endl;
    
    return 0;
}