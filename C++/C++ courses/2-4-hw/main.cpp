#include <iostream>
using namespace std;

int main()
{
    /*Sa se citeasca un tablou unidimensional v cu n elemente si sa se determine
    cate dintre elementele tabloului sunt egale cu prima sau cu ultima valoare
    din tablou.*/

    int v[10]; int i; int n; int f; int l; int fe=0; int le=0;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    f=v[0];
    l=v[n-1];
    
    for(i=1; i<n-1; i++) {
        if(v[i]==f) {
            fe++;
        }
        if(v[i]==l) {
            le++;
        }
    }
    
    fe++;
    le++;
    cout<<fe<<" elements are equal to the first element."<<endl;
    cout<<le<<" elements are equal to the last element."<<endl;
    return 0;
}