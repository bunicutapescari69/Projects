#include <iostream>
using namespace std;

int main()
{
    /*Se citesc elementele unui tablou unidimensional cu n componente numere intregi. Sa
    se determine daca oricare doua elemente alaturate din tablou
    au paritati diferite. Se va afisa Da sau Nu. De exemplu, pentru 
     * n = 5 si v = [3, 6, 1, 18, 13], se afiseaza Da. (adica avem un element 
     * par, unul impar etc)*/

    int v[10]; int i; int n; bool p=true; int aux=0;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    aux=v[0];
    
    for(i=1; i<n; i++) {
        if(!(!(v[i]%2==0)==(aux%2==0))) {
            p=false;
        }
    }
    
    return p;
}