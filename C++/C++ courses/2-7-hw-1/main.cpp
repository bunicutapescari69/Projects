#include <iostream>
using namespace std;

int main()
{
    /*sort in crescendo order the first half of the vector and in decrescendo order the second half*/

    int v[10]; int i; int n;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    //in case its even
    if(n%2==0){
        for(i=0; i<(n/2)-1; i++) {
            for(int j=i+1; j<n/2; j++){
                if((v[i]>v[j])) {//crescator in stanga
                    int aux=v[i]; //i e stanga j e dreapta
                    v[i]=v[j];
                    v[j]=aux;
                }
            }
        }
        for(i=n/2; i<n; i++) {
            for(int j=i+1; j<n; j++){
                if((v[i]<v[j])) {//descrescator in stanga
                    int aux=v[j]; //i e stanga j e dreapta
                    v[j]=v[i];
                    v[i]=aux;
                }
            }
        }
    }
    
    //in case its uneven
    if(n%2==1){//n/2-1 hint ig?
        for(i=0; i<(n/2)-1; i++) {
            for(int j=i+1; j<n/2; j++){
                if((v[i]>v[j])) {//crescator in stanga
                    int aux=v[i]; //i e stanga j e dreapta
                    v[i]=v[j];
                    v[j]=aux;
                }
            }
        }
        for(i=n/2; i<n; i++) {
            for(int j=i+1; j<n; j++){
                if((v[i]<v[j])) {//descrescator in stanga
                    int aux=v[j]; //i e stanga j e dreapta
                    v[j]=v[i];
                    v[i]=aux;
                }
            }
        } 
    }
    
    for(i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
        
    return 0;
}