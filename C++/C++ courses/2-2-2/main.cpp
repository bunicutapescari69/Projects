#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /* calculate the media of the elements from a vector*/
    
    int v[10];
    int n; cout<<"Insert length:"; cin>>n;
    int s=0; float m;
    
    for(int i=0; i<n; i++) {
        cout<<"Element "<<i<<"=";
        cin>>v[i];
    }
    
    for(int i=0; i<n; i++) {
        s=s+v[i];
    }
    
    m=(float)s/n;
    
    cout<<"Media aritmetica e "<<m;
    
    return 0;
}