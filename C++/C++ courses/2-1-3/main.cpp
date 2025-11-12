#include <iostream>
using namespace std;

int main()
{
    /* Pentru n numere intregi citite de la tastatura, sa se determine:
    a) valoarea minima citita
    b) valoarea maxima citita si de cate ori apare aceasta valoare in sirul de numere
    c) cel mai mare numar par 
    d) valoarea x cu cea mai mare suma a cifrelor 
    Daca sunt mai multe astfel de numere (cu aceeasi suma a cifrelor), se va afisa cel cu valoarea cea mai mica.*/
    
    int n; cout<<"Insert length:"; cin>>n;
    int a; cout<<"a="; cin>>a;
    int max=a; int min=a; int maxp=a; int en=1; int maxs=0;
    int sa1; int a1=a; int el;
    
    while(a1!=0) {
        sa1=sa1+a1%10;
        a1=a1/10;
    }
    
    maxs=sa1;
    el=a;
    
    for(int i=1; i<n; i++) {
        cout<<"a=";
        cin>>a;
        if(a<min) {min=a;}
        if(a>max) {
            max=a;
            en=1;
        } else if(a==max) {en++;}
        
        if((a%2==0) && a>maxp) {
            maxp=a;
        }
        
        a1=a;
        
        while(a1!=0) {
            sa1=sa1+a1%10;
            a1=a1/10;
        }
        
        if(sa1>maxs) {
            maxs=sa1;
            el=a;
        }
    }
    
    cout<<min<<"  "<<max<<" "<<en<<"  "<<maxp<<"  "<<el;
    
    return 0;
}