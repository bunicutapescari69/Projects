#include <iostream>
using namespace std;

int main()
{
    /*Sa se determine cifra maxima
    a unui numar intreg x citit de
    la tastatura si de cate ori apare 
    aceasta cifra in scrierea numarului x.*/
    int x; cout<<"Insert number:"; cin>>x;
    int max=0; int xc=x; int e=0; int n=0;
    
    while(x>0) {
        n=x%10;
        if(n>max) {
            max=n;
        }
        x=x/10;
    }
    
    x=xc;
    
    while(x>0) {
        n=x%10;
        if(n==max) {
            e++;
        }
        x=x/10;
    }
    
    cout<<max<<" was encountered "<<e<<" times in "<<xc;

    return 0;
}