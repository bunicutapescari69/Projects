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
    
    //the main diagonal is pretty much j=i so jist use i instead of j 
    
    cout<<"Main Diagonal: ";
    
    for(i=0; i<l; i++) {
        cout<<m[i][i]<<" ";
    }
    
    cout<<endl;
    
    /* 
    {1;2;3
    4;5;6
    7;8;9} secondart diagonal is 3 5 7
    now to do it j=l-1-i */
    
    cout<<"Secondary Diagonal: ";
    
    for(i=0; i<l; i++) {
        cout<<m[i][l-1-i]<<" ";
    }
    
    cout<<endl;
    
    //elements over main diagonal
    
    cout<<"Over M.D.: ";
    
    for(i=0; i<l; i++) {
        for(j=0; j<c; j++) {
            if(i<j) {
                cout<<m[i][j]<<" ";
            }
        }
    }
    
    cout<<endl;
    
    //elements under main diagonal
    
    cout<<"Under M.D.: ";
    
    for(i=0; i<l; i++) {
        for(j=0; j<c; j++) {
            if(i>j) {
                cout<<m[i][j]<<" ";
            }
        }
    }
    
    cout<<endl;
    
    //elements over s diagonal
    
    cout<<"Over S.D.: ";
    
    for(i=0; i<l; i++) {
        for(j=0; j<c; j++) {
            if(i+j<l-1) {
                cout<<m[i][j]<<" ";
            }
        }
    }
    
    cout<<endl;
    
    //elements under s diagonal
    
    cout<<"Under S.D.: ";
    
    for(i=0; i<l; i++) {
        for(j=0; j<c; j++) {
            if(i+j>l-1) {
                cout<<m[i][j]<<" ";
            }
        }
    }
    
    cout<<endl;
    
     /*
    
    cout<<"Sum of line 0 is ";
    
    int s=0;
    
    for(int j=0; j<c; j++) {
        s+=m[0][j];
    }
    
    cout<<s;
    s=0;
    cout<<endl;
    
    cout<<"Sum of S.D. is ";
    
    for(i=0; i<l; i++) {
        s+=m[i][l-1-i];
    }
    
    cout<<s;
    cout<<endl;
     */ 
    return 0;
}