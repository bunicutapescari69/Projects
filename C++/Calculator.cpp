#include <iostream>
#include <cmath>
using namespace std;

void showinitoptions() {
    cout<<"1. Addition\n"<<"2. Subtraction\n"<<"3. Multiplication\n"<<"4. Division\n"<<"5. Division with Remainder (a and b will be truncated)\n"<<"6. Module (calculates it for both a and b)\n";
}

int main()
{
    float a;
    float b;
    int c;
    cout<<"a=";
    cin>>a;
    cout<<"b=";
    cin>>b;
    showinitoptions();
    cout<<"Operation: ";
    cin>>c;
    cout<<endl;

    //i modded the code a lil bit
    switch (c) {
    case 1: {
        cout<<a<<"+"<<b<<"="<<a+b;
        break;
    }
    case 2: {
        cout<<a<<"-"<<b<<"="<<a-b;
        break;
    }
    case 3: {
        cout<<a<<"*"<<b<<"="<<a*b;
        break;
    }
    case 4: {
        cout<<a<<"/"<<b<<"="<<a/b;
        break;
    }
    case 5: {
        int x=trunc(a);
        int y=trunc(b);
        int z=x/y;
        cout<<x<<"/"<<y<<"="<<z<<" r="<<x%y;
        break;
    }
    case 6: {
        float d=a;
        float e=b;
        if(a<0) {
            d=-1*a;
        }
        if(b<0) {
            e=-1*b;
        }
        cout<<"|"<<a<<"|="<<d<<endl;
        cout<<"|"<<b<<"|="<<e;
        break;
    }
    default: {
        cout<<"Invalid operation number! Please insert a valid operation number from the list above."<<endl;
        return 1;
        break;
    }
    cout<<endl;
    return 0;
}

}
