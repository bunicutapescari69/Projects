#include <iostream>
#include <vector>
using namespace std;

int v[10]={2,3,5,7,11,13,17,19,23};

bool p(int n) {
    for(int i=0; i<8; i++) {
        if(n==v[i]) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cout<<"insert n: "; cin>>n;
    return p(n);
}