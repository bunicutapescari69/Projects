#include <iostream>
using namespace std;

int main()
{
    /*Un client imprumuta o suma
    de bani de la banca, pe care
    trebuie sa-i ramburseze lunar.
    Suma aceasta de rambursat cuprinde
    dobanda anuala aplicata. Scrieti un
    program in C++ care calculeaza cate
    luni vor fi necesare pentru a rambursa
    împrumutul, tinand cont de suma
    rambursata lunar si de dobanda anuala.
    (dobanda anuala o cititi voi de la tastatura, 
    puteti sa o faceti ca numar intreg).*/

    double si; cout<<"Insert money sum:"; cin>>si;
    double r; cout<<"Rata dobanda anuala:"; cin>>r;
    double sr; cout<<"Insert monthly paid sum:"; cin>>sr;
    int m=0;
    r=r/100;
    
    while(si>0) {
        si=si+(si*r/12);
        si=si-sr;
        m++;
    }
    
    cout<<"You will pay the whole thing in "<<m<<" months";

    return 0;
}