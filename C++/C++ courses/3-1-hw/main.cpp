#include <iostream>
using namespace std;
int i, osel; int n=0; float v[20], aux1, aux2;

/*Realizati un proiect de tipul statie meteo care inregistreaza temperaturile maxime zilnice pentru N zile.
Functionalitati:
1. Introducerea temperaturilor pentru fiecare zi in parte. Daca datele au fost introduse, ne afiseaza un mesaj care sa indice acest lucru.
2. Afisarea temperaturilor introduse. Daca datele nu au fost introduse, ne afiseaza un mesaj de eroare.
3. Calculul mediei temperaturilor introduse. Daca datele nu sunt disponibile, se afiseaza o eroare.
4. Gasirea temperaturii maxime. Daca exista mai multe zile cu temperatura maxima, afisam doar prima aparitie.
5. Sortarea temperaturilor in ordine crescatoare
6. Cautarea unei temperaturi folosind cautarea binara
7. Afisarea zilelor cu temperaturi peste o valoare introdusa de noi de la tastatura
8. Numararea zilelor cu temperaturi sub o valoare introdusa de noi de la tastatura*/

void showinitoptions() {
    cout<<"1. Introducerea temperaturilor"<<endl;
    cout<<"2. Afisarea temperaturilor introduse"<<endl;
    cout<<"3. Calculul mediei temperaturilor introduse"<<endl;
    cout<<"4. Gasirea temperaturii maxime"<<endl;
    cout<<"5. Sortarea temperaturilor in ordine crescatoare"<<endl;
    cout<<"6. Cautarea unei temperaturi"<<endl;
    cout<<"7. Afisarea zilelor cu temperaturi peste o valoare introdusa"<<endl;
    cout<<"8. Numararea zilelor cu temperaturi sub o valoare introdusa"<<endl;
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
    while(true) {
        cout<<endl;
        aux1=0; aux2=0;
        showinitoptions(); 
        cout<<"Insereaza numarul optiunii: "; cin>>osel;
        switch(osel) {
            case 1: {
                cout<<"Insereaza temperatura de adaugat: "; cin>>aux1;
                cout<<"Insereaza ziua: "; cin>>aux2;
                aux2--;
                add();
                standout();
                cout<<"Actiune executata.";
                break;
            }
            case 2: {
                standout();
                cout<<"Temperaturile sunt: ";
                for(i=0; i<n; i++) {
                    cout<<v[i]<<" ";
                }
                break;
            }
            case 3: {
                standout();
                cout<<"Media temperaturilor este: ";
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
                }
                standout();
                cout<<"Temperatura cea mai mare e: "<<aux1;
                break;
            }
            case 5: {
                cout<<"Ordinea pe zile va fi pierduta. Sunteti sigur? (0/1): "; cin>>aux1;
                if(aux1==1) {
                    sortup();
                    standout();
                    cout<<"Actiune executata.";
                    break;
                } else {
                    standout();
                    cout<<"Actiune abortata.";
                    break;
                }
            }
            case 7: {
                cout<<"Insereaza temperatura pentru comparat: "; cin>>aux1;
                standout();
                cout<<"Temperaturile peste "<<aux1<<" sunt: ";
                for(i=0; i<n; i++){
                    if(v[i]>aux1) {
                        cout<<v[i]<<" ";
                    }
                }
                break;
            }
            case 6: {
                cout<<"Insereaza temperatura de cautat: "; cin>>aux1;
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
                cout<<"!!!Ca sa functioneze cautarea, temperaturile trebuie sortate crescator!!!"<<endl;
                standout();
                
                if(pos>=0) {
                    cout<<"Temperatura "<<aux1<<" e in ziua "<<pos+1;
                }
                else if(pos==-1) {
                    cout<<"Temperatura nu a putut fi gasita.";
                }
                break;
            }
            case 8: {
                cout<<"Insereaza temperatura pentru comparat: "; cin>>aux1;
                standout();
                cout<<"Temperaturile sub "<<aux1<<" sunt: ";
                for(i=0; i<n; i++){
                    if(v[i]<aux1) {
                        cout<<v[i]<<" ";
                    }
                }
                cout<<endl;
                showinitoptions();
                break;
            }
        }
    }
}