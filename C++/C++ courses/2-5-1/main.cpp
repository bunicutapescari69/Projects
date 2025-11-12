#include <iostream>
using namespace std;

int main()
{
    /*how to replace an element in a vector

    int v[10]; int i; int n; int r;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    cout<<"Which element do you want to replace (index) : "; cin>>i;
    cout<<"Replace with : "; cin>>i;
    
    v[i]=n;
    
    cout<<"{";
    for(i=0;i<n;i++) {
        cout<<v[i];
        if(i!=n-1) {
            cout<<","; 
        }
    }
    cout<<"}"
    
    return 0;*/
    
    /*how to add an element ------------------------------------------------------------------------------------*/

    /*int v[10]; int i; int n; int a; int p;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    cout<<"Which element do you want to add (index): "; cin>>p;
    cout<<"What element: "; cin>>a;
    
    for(i=n; i>=p; i--) {
        v[i+1]=v[i];
    }
    
    n++;
    v[p]=a;
    
    cout<<"{";
    for(i=0;i<n;i++) {
        cout<<v[i];
        if(i!=n-1) {
            cout<<","; 
        }
    }
    cout<<"}";*/
    
    /*how to take out an element ------------------------------------------------------------------------------------*/

    int v[10]; int i; int n;  int p;
    cout<<"Insert length:"; cin>>n;
    
    for(i=0; i<n; i++) {
        cout<<"v{"<<i<<"}=";
        cin>>v[i];
    }
    
    cout<<"Which element do you want to eliminate (index): "; cin>>p;
    
    for(i=p; i<=n; i++) {
        v[i]=v[i+1];
    }
    
    n--;
    
    cout<<"{";
    for(i=0;i<n;i++) {
        cout<<v[i];
        if(i!=n-1) {
            cout<<","; 
        }
    }
    cout<<"}";
    
    return 0;
}