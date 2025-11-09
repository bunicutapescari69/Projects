#include <iostream>
using namespace std;

int main()
{
    /*make a program that prints a square with the
    side n and a symbol of the user's choice*/
    char s;
    int n;
    cout<<"Insert number:";
    cin>>n;
    cout<<"Insert symbol:";
    cin>>s;
    
    for(int i=0;i<n;i++) {
        cout<<endl;
        for(int i=0;i<n;i++) {
            cout<<" "<<s;
        }
    }

    return 0;
}