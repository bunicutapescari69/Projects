#include <iostream>
#include <vector>
using namespace std;

int main()
{
    /*vecor*/
    vector<int> i(10,0);// this declares a vector with 10 elemnts all being 0.
    // elements can also be declared one by one like i={a,b,etc.};
    int nv; int n;
    while(true) {
        cout<<"Insert index (1-10):"; cin>>nv;
        cout<<"Insert number:"; cin>>n;
        i[(nv-1)]=n;// this is how to select a vector and replace its value
        //btw index starts off at 0
        for(int j=0; j<10; j++) { //this iterates ans shows all elements
            cout<<i[j]<<", ";
        }
        cout<<endl;
    }
    return 0;
}