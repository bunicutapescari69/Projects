#include <iostream>
using namespace std;

int main()
{
    /* Sa se afiseze elementele pare ordonate crescator si elementele impare ordonate descrescator*/

    int v[10]; int i; int n;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    for(i=0; i<n-1; i++) {
        for(int j=0; j<n-i-1; j++) {
            if((v[j]>v[j+1])&&(v[j]%2==0)&&(v[j+1]%2==0)) {
                int aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
            if((v[j]<v[j+1])&&(v[j]%2==1)&&(v[j+1]%2==1)) {
                int aux=v[j+1];
                v[j+1]=v[j];
                v[j]=aux;
            }
            if((v[j]>v[j+1])&&(v[j]%2==1)&&(v[j+1]%2==0)) {
                int aux=v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }
        }
    }
    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}