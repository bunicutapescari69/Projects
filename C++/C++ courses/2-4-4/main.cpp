#include <iostream>
using namespace std;

int main()
{
    /*Se citesc elementele unui tablou unidimensional
    cu n elemente numere intregi. Sa se numere cate elemente
    sunt egale cu media aritmetica a vecinilor sai.*/

    int v[10]; int i; int n; int ma; int e;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=1; i<n; i++) {
        ma=(v[i-1]+v[i+1])/2;
        if(v[i]==ma) {
            e++;
        }
    }
    
    if(v[0]==v[1]) {
        e++;
    }
    
    if(v[n]==v[n-1]) {
        e++;
    }
    
    cout<<e;
    return 0;
}