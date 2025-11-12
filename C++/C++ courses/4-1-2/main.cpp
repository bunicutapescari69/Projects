#include <iostream>
using namespace std;

struct product {
    string name;
    int price;
};

int main()
{
    int p; string n;
    
    cout<<"Insert product name: "; cin>>n;
    cout<<"Insert product price: "; cin>>p;
    
    for(int i=0; i<15; i++){
        cout<<endl;
    }
    
    product j={n,p};
    
    cout<<j.name<<" costs "<<j.price;
    
    return 0;
}