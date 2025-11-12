#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

unsigned long long factorial(unsigned long long n) {
    unsigned long long r=n;
    for(int i=n-1; i>=1; i--) {
        r*=i;
    }
    return r;
}

int main()
{
	/*  Mos Craciun are o lista cu cadouri pentru copii, iar
	el poate adauga sau elimina cadouri din aceasta lista.
	La inceput, lista contine cadouri pentru cativa copii.
	Scrieti un program in C++ care permite:
	1. Adaugarea unui nou cadou in lista
	2. Eliminarea unui cadou din lista
	3. Afisarea listei de cadouri
	4. Cautarea unui cadou specific si afisarea pozitiei acestuia in lista */

	string p[10];
	int opt;
	int i;
	int n=0;

	while(true) {
		cout<<"1-Adauga participant\n";
		cout<<"2-Elimina participant\n";
		cout<<"3-Afiseaza lista de participanti\n"
		cout<<"4-Genereaza perechi\n";
		cout<<"5-Afiseaza perechi\n";
		cout<<"6-Iesire\n";
		cout<<"Alege:";
		cin>>opt;

		if(opt==1) {
			string cn;
			cout<<"Introduceti participant nou:";
			cin>>cn;
			c[n]=cn;
			n++;
		}
		else if(opt==2) {
			string ce;
			cout<<"Introduceti participant de eliminat:";
			cin>>ce;
			bool g=false;
			for(i=0; i<n; i++) {
				if(c[i]==ce) {
					for(int j=i; j<n-1; j++) {
						c[i]=c[j+1];
					}
					n--;
					g=true;
					break;
				}
			}

			if(!g) {
				cout<<"Participantul nu a fost gasit\n";
			}
		}
		else if(opt==3) {
			cout<<"Participantii sunt:\n";
			for(i=0; i<n; i++) {
				cout<<c[i]<<"\n";
			}
		}
		else if(opt==4) {
			string cc;
			cout<<"Introduceti cadoul de cautat:";
			cin>>cc;
			bool g=false;
			for(i=0; i<n; i++) {
				if(c[i]==cc) {
					cout<<"Cadoul cautat e pe pozitia "<<i<<"\n";
					g=true;
					break;
				}
			}
			if(!g) {
				cout<<"Cadoul nu a fost gasit\n";
			}
		}
		else if(opt==5) {
			return 0;
		}
		else if(opt==6) {
		    return 0;
		}
		else {
			cout<<"Optiunea introdusa e invalida\n";
		}
	}
}