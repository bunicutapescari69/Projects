#include <iostream>
#include <cassert>
using namespace std;

int suma(int a, int b) {
    return a+b;
}

void testSuma() {
    assert(suma(2,3)==5);
    
    //limite speciale
    assert(suma(-2147483648, -1==2147483647));
}

int main()
{
    testSuma();
    
    return 0;
}