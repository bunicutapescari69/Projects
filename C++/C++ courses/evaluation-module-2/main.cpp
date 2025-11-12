#include <iostream>
using namespace std;

int osel; int aux1; int aux2;
int v[50]; int i; int n=0;

void showinitoptions() {
    cout<<"1. Adaugarea unei note in catalog"<<endl;
    cout<<"2. Afisarea notelor din catalog"<<endl;
    cout<<"3. Calcularea mediei notelor"<<endl;
    cout<<"4. Afisarea notei maxime si a notei minime"<<endl;
    cout<<"5. Sortarea crescatoare a notelor"<<endl;
    cout<<"6. Sortarea descrescatoare a notelor"<<endl;
    cout<<"7. Cautarea unei note in catalog"<<endl;
    cout<<"8. Numararea aparitiilor unei note"<<endl;
    cout<<"9. Stergerea unei note"<<endl;
    cout<<"10. Stergerea tuturor aparitiilor unei note"<<endl;
    cout<<"11. Resetare catalog"<<endl;
    cout<<"12. Iesire din program"<<endl;
}

void add() {
    for(i=n; i>=aux2; i--) {
        v[i+1]=v[i];
    }
    
    n++;
    v[aux2]=aux1;
}

void standout() {
    cout<<"//////////////////////////////////////////////";
}

void sortup() {
    for(i=0; i<n; i++) {
        for(i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(v[j]<v[i]) {
                    int aux=v[i];
                    v[i]=v[j];
                    v[j]=aux;
                }
            }
        }
    }
}

void sortdown() {
    for(i=0; i<n; i++) {
        for(i=0; i<n-1; i++) {
            for(int j=i+1; j<n; j++) {
                if(v[j]>v[i]) {
                    int aux=v[j];
                    v[j]=v[i];
                    v[i]=aux;
                }
            }
        }
    }
}

void subtract() {
    for(i=aux1; i<=n; i++) {
        v[i]=v[i+1];
    }
    
    n--;
}

int main()
{
    /*Realizati un proiect care sa simuleze un CATALOG DE NOTE, care sa aiba urmatoarele functionalitati:

1. Adaugarea unei note in catalog
2. Afisarea notelor din catalog
3. Calcularea mediei notelor
4. Afisarea notei maxime si a notei minime
5. Sortarea crescatoare a notelor
6. Sortarea descrescatoare a notelor
7. Cautarea unei note in catalog
8. Numararea aparitiilor unei note 
9. Stergerea unei note
10. Stergerea tuturor aparitiilor unei note (daca aceasta apare de mai multe ori)
11. Resetare catalog
12. Iesire din program*/
    
    while(true) {
        cout<<endl;
        aux1=0; aux2=0;
        showinitoptions(); 
        cout<<"Insereaza numarul optiunii: "; cin>>osel;
        switch(osel) {
            case 1: {
                cout<<"Insereaza nota de adaugat: "; cin>>aux1;
                cout<<"Insereaza locatia notei de adaugat: "; cin>>aux2;
                add();
                break;
            }
            case 2: {
                standout();
                cout<<"Notele din catalog sunt: ";
                for(i=0; i<n; i++) {
                    cout<<v[i]<<" ";
                }
                break;
            }
            case 3: {
                standout();
                cout<<"Media notelor este: ";
                for(i=0; i<n; i++) {
                    aux1+=v[i];
                }
                aux1/=n;
                cout<<aux1;
                break;
            }
            case 4: {
                for(i=0; i<n; i++) {
                    if(v[i]>aux1) {
                        aux1=v[i]; 
                    }
                } aux2=10;
                for(i=0; i<n; i++) {
                    if(v[i]<aux2) {
                        aux2=v[i]; 
                    }
                }
                standout();
                cout<<"Nota cea mai mare e: "<<aux1<<endl;
                standout();
                cout<<"Nota cea mai mica e: "<<aux2;
                break;
            }
            case 5: {
                sortup();
                standout();
                cout<<"Actiune executata.";
                break;
            }
            case 6: {
                sortdown();
                standout();
                cout<<"Actiune executata.";
                break;
            }
            case 7: {
                cout<<"Insereaza nota de cautat: "; cin>>aux1;
                int l=0; int r=n-1; int pos=-1; int m;
                while(l<=r && pos==-1) {
                    m=(l+r)/2;
                    
                    if(v[m]==aux1) {
                        pos=m;
                    }
                    else if(v[m]<aux1) {
                        l=m+1;
                    }
                    else if(v[m]>aux1) {
                        r=m-1;
                    }
                }
                standout();
                cout<<"!!!Ca sa functioneze cautarea, notele trebuie sortate crescator!!!"<<endl;
                standout();
                
                if(pos>=0) {
                    cout<<"Nota "<<aux1<<" e pe pozitia "<<pos;
                }
                else if(pos==-1) {
                    cout<<"Nota nu a putut fi gasita.";
                }
                break;
            }
            case 8: {
                cout<<"Insereaza nota de-i numarat aparitiile: "; cin>>aux1;
                for(i=0; i<n; i++) {
                    if(v[i]==aux1) {
                        aux2++;
                    }
                }
                standout();
                cout<<"Nota "<<aux1<<" apare de "<<aux2<<" ori";
                break;
            }
            case 9: {
                cout<<"Insereaza pozitia notei de sters: "; cin>>aux1;
                subtract();
                cout<<"Actiune executata.";
                break;
            }
            case 10: {
                cout<<"Insereaza nota carei aparitii sa-i fie sterse: "; cin>>aux2;
                for(aux1=0; aux1<n; aux1++) {
                    if(v[aux1]==aux2) {
                        subtract();
                    }
                }
            }
            case 11: {
                for(aux1=0; aux1<n; aux1++) {
                    subtract();
                }
            }
            case 12: {
                return 0;
                break;
            }
        }
    }
}

