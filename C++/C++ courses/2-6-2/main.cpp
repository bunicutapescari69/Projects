#include <iostream>
using namespace std;

int main()
{
    /*
Un restaurant de Craciun ofera un meniu special
cu preparate festive. Fiecare preparat are un nume si un pret. 
Scrieti un program in C++ care sa efectueze urmatoarele prelucrari:  
1.  Adaugarea unui nou preparat in meniu   
2. Eliminarea unui preparat din meniu    
3. Afisarea meniului complet   
4. Calcularea pretului total al meniului (suma preturilor tuturor preparatelor)   
5. Iesire din program*/

    string a[10]; int p[10];
    int opt;
    int i; int n=0;
    
    while(true) {
        cout<<"1-Adauga aliment\n"; 
        cout<<"2-Elimina aliment\n";
        cout<<"3-Afiseaza meniu\n"; 
        cout<<"4-Suma meniului\n"; 
        cout<<"5-Iesire\n"; 
        cout<<"Alege:"; cin>>opt;
        
        if(opt==1) {
            string an; int pn;
            cout<<"Introduceti alimentul nou:"; cin>>an;
            cout<<"introduceti pretul:"; cin>>pn;
            a[n]=an;
            p[n]=pn;
            n++;
        }
        else if(opt==2) {
            string ae;
            cout<<"Introduceti alimentul de eliminat:"; cin>>ae;
            bool g=false;
            for(i=0;i<n;i++) {
                if(a[i]==ae) {
                    for(int j=i;j<n-1;j++) {
                        a[i]=a[j+1];
                        p[i]=p[j+1];
                    }
                    n--;
                    g=true;
                    break;
                }
            }
            
            if(!g){
                cout<<"Alimentul nu a fost gasit\n";
            }
        }
        else if(opt==3) {
            cout<<"Meniul e:\n";
            for(i=0;i<n;i++) {
                cout<<a[i]<<" "<<p[i]<<"lei\n";
            }
        }
        else if(opt==4) {
            int s=0;
            for(i=0; i<n; i++) {
                s=s+p[i];
            }
            cout<<"Suma totala a meniului e "<<s<<" lei\n";
        }
        else if(opt==5) {
            return 0;
        }
        else {
            cout<<"Optiunea introdusa e invalida\n";
        }
    }
}
