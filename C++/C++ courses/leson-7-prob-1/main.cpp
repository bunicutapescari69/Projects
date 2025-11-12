#include <iostream>
using namespace std;

int main()
{
    /* show a triangle that is made with 
    a symbol of the user's choice*/
    /*n 
      nn 
      nnn 
      nnnn 
      */
      
    int n; cout<<"Insert triangle length:"; cin>>n;
    char s; cout<<"Insert symbol:"; cin>>s;
    
    for(int i=0; i<=n; i++) { //i is for columns
        cout<<endl;
        for(int j=0; j<i; j++) {// j is for rows
            cout<<s;
        }
    }

    return 0;
}