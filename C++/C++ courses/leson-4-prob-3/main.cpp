#include <iostream>
using namespace std;

int main()
{
    //> operator
    int a,b;
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"is a greater than b?"<<endl;
    
    if(a>b){
        cout<<"yea"<<endl;
    }
    else {
        cout<<"nuh uh"<<endl;
    }
    
    //< operator
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"is a smaller than b?"<<endl;
    
    if(a<b){
        cout<<"yea"<<endl;
    }
    else {
        cout<<"nuh uh"<<endl;
    }
    
    //== operator
    //!!!! ALWAYS USE TWO EQUAL SIGNS !!!!
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"is a equal to b?"<<endl;
    
    if(a==b){
        cout<<"yea"<<endl;
    }
    else {
        cout<<"nuh uh"<<endl;
    }
    
    //!= operator
    cout<<"a="; cin>>a;
    cout<<"b="; cin>>b;
    cout<<"is a not equal to b?"<<endl;
    
    if(a!=b){
        cout<<"yea"<<endl;
    }
    else {
        cout<<"nuh uh"<<endl;
    }
    
    //logic operators
    //and (&&)
    //or(||)
    //no(!(insert logic stuff))
    
    //assignmert operators
    //a+=b is the same as a=a+b
    //a-=b
    //a*=b
    //a/=b
    
    //conditional operator
    //int a=(b>c)?b(if true):c(if false)
    
    return 0;
}