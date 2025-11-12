#include <iostream>
using namespace std;

int main()
{
    /*int m[lines][columns] */
    int i; int j; int c; int l;
    cout<<"Insert l: "; cin>>l;
    cout<<"Insert c: "; cin>>c;
    
    int m[l][c];
    
    for(i=0; i<l; i++) {
        for(j=0; j<c; j++) {
            cout<<"m["<<i<<"]["<<j<<"]= "; cin>>m[i][j];
        }
    }
    
    for(i=0; i<l; i++) {
        for(j=0; j<c; j++) {
            cout<<m[i][j]<<" ";
        }
        cout<<endl;
    }
    
    int s_max_l=-1;
    int l_max=-1;
    
    for(i=0; i<c; ++i) {
        int s=0;
        
        for(j=0; j<l; ++j) {
            s=s+m[j][i];
        }
        if(s>s_max_l) {
            s_max_l=s;
            l_max=i;
        }
    }
    
    cout<<"coloanaa "<<l_max+1<<" are suma maxima "<<s_max_l<<endl;
    return 0;
}