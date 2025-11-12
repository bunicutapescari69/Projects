#include <iostream>
using namespace std;

int main()
{
    /*Se citesc elementele a doua tablouri unidimensionale 
    a si b cu m, respectiv n elemente numere intregi. Sa
    se determine cate dintre elementele tabloului a sunt
    strict mai mici decat toate elementele din tabloul b.*/

    int a[10]; int b[10]; int i; int na; int nb; int minb; int e=0;
    cout<<"Insert vector a length:"; cin>>na;
    cout<<"Insert vector b length:"; cin>>nb;
    
    for(i=0; i<na; i++) {
        cout<<"a{"<<i<<"}=";
        cin>>a[i];
    }
    
    for(i=0; i<nb; i++) {
        cout<<"b{"<<i<<"}=";
        cin>>b[i];
    }
    
    minb=b[0];
    for(i=1; i<nb; i++) {
        if(minb>b[i]) {
            minb=b[i];
        }
    }
    
    for(i=0; i<na; i++) {
        if(a[i]<minb) {
            e++;
        }
    }
    
    cout<<e<<" elements are smaller than the smallest number in vector b";
    
    return 0;
}