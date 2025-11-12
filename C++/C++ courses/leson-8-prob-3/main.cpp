#include <iostream>
using namespace std;

int main()
{
    /*write a program that reads from the user a
    target, and a sum they save up per month.
    calculate how many months are required to 
    save up that sum of money.*/
    
    double s; cout<<"Insert target sum:"; cin>>s;
    double m; cout<<"Insert saving per month:"; cin>>m;
    int t;
    double sc=s;
    
    while(!(s<=0)) {
        s=s-m;
        t++;
    }
    
    cout<<"To save up "<<sc<<" by depositing "<<m<<" per month, it would take "<<t<<" months.";

    return 0;
}