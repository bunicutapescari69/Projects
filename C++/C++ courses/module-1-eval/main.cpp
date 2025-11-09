#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    /*1. Sa se determine pentru un numar intreg x citit de la tastatura:
      a) suma cifrelor impare
      b) produsul cifrelor pare
      c) numarul cifrelor sale
    2. Sa se determine cifra maxima a unui numar intreg x citit de la tastatura si de cate ori apare aceasta in scrierea numarului.
    3. Sa se numere divizorii unui numar intreg x citit de la tastatura. Pe baza rezultatului, sa se determine daca numarul x este numar prim.
    4. Sa se determine cel mai mare divizor comun a doua numere x si y citite de la tastatura.
    5. Sa se determine daca un numar intreg x citit de la tastatura este palindrom.
    6. Să se înlocuiască cifra a cu cifra b în scrierea numărului x unde a, b şi x se citesc de la tastatură.
    Exemplu. pentru x=45808, a=8, b=1 se obţine x=45101.
    7. Fie un număr natural x cu cel mult 9 cifre. Să se mute zerourile la sfârşitul lui x.
    Exemplu. pentru x=5607002 se obţine 5672000*/
    int p; cout<<"Insert problem number:"; cin>>p;
    
    switch(p) {
        case 1: {
            int x; cout<<"Insert number:"; cin>>x;
            int sci=0; int pcp=1; int c=0; int xc=x; int d=0;
            while(x>0) {
                x=x/10;
                c++;
            }
            x=xc;
            
            while(x>0) {
                d=x%10;
                if(d%2==1){
                    sci=sci+d;
                }
                x=x/10;
            }
            x=xc;
            d=0;
            
            while(x>0) {
                d=x%10;
                if(d%2==0) {
                    pcp=pcp*d;
                }
                x=x/10;
            }
            cout<<"There's "<<c<<" digits, the sum of the uneven ones is "<<sci<<", and the product of the even ones is "<<pcp;
        } break;
        case 2: {
            int x; cout<<"Insert number:"; cin>>x;
            int c=0; int e=0; int xc=x; int d=0;
            
            while(x>0) {
                d=x%10;
                if(d>c) {
                    c=d;
                }
                x=x/10;
            }
            x=xc;
            
            while(x>0) {
                d=x%10;
                if(d==c) {
                    e++;
                }
                x=x/10;
            }
            cout<<"The biggest digit in "<<xc<<" is "<<c<<", encountered "<<e<<" times.";
        } break;
        case 3: {
            int x; cout<<"Insert number:"; cin>>x;
            int d=0;
            for(int i=2; i<=x/2; i++) {
                if(x%i==0) {
                    d++;
                }
            }
            d=d+2;
            cout<<x<<" has "<<d<<" dividers."<<endl;
            if(d==2) {
                cout<<x<<" is a prime number.";
            }
        } break;
        case 4: {
            int x; cout<<"Insert bigger number:"; cin>>x;
            int y; cout<<"Insert smaller number:"; cin>>y;
            int cmmdc=1;
            for(int d=1; d<=x/2; d++) {
                if(x%d==0 && y%d==0 && d>cmmdc) {
                    cmmdc=d;
                }
            }
            cout<<"The biggest common divider for "<<x<<" and "<<y<<" is "<<cmmdc;
        } break;
        case 5: {
            int x; cout<<"Insert number:"; cin>>x;
            int xc=x; int p=0;
            while(x>0) {
                p=(p*10)+(x%10);
                x=x/10;
            }
            if(xc==p) {
                cout<<xc<<" is palindrome";
            } else if(xc!=p) {
                cout<<xc<<" is not palindrome";
            } else {
                cout<<"ERR2:Something went wrong...";
            }
        } break;
        case 6: {
        double  x; cout<<"Insert number:"; cin>>x;
        int a; cout<<"Insert digit to replace:"; cin>>a;
        int b; cout<<"Insert digit for replacement:"; cin>>b;
        double xc=x; int xd=0;
        while(x>0) {
            xd++;
            x=x/10;
        }
        x=xc;
        
        for(int i=1; i>xd; i++) {
            if(((x%pow(10,i))-(x%pow(10,i-1)))/pow(10,i-1)==a) {
                x=x-(a*pow(10,i))+(b*pow(10,i));
            }
        }
        cout<<x;
        } break;
        case 7: {} break;
        default: {
            cout<<"ERR1:Invalid problem number.";
        }
    }
    
    return 0;
}