#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*Se citesc elementele unui tablou unidimensional
    cu n elemente numere intregi. Sa se determine valoarea minima di
    n vector si de cate ori apare aceasta.*/
    
    int v[10];
    int n; cout<<"Insert length:"; cin>>n;
    int e;
    
    for(int i=0; i<n; i++) {
        cin>>v[i];
    }
    
    int min=v[0];
    for(int i=1; i<n; i++) {
        if(v[i]<min) {
            min=v[i];
        }
    }
    
    for(int i=0; i<n; i++) {
        if(v[i]==min) {
            e++;
        }
    }
    
    cout<<"The smallest number is "<<min<<", found "<<e<<" times.";
    
    return 0;

    return 0;
}