#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

int min(const vector<int> &arr) {
    int n=arr.size();
    int m=2048;
    
    for(int i=0; i<n; ++i) {
        if(arr[i]<m) {
            m=arr[i];
        }
    }
    return m;
}

void test() {
    assert(min({357, 6, 9, 4})==4);
    assert(min({8, -293, -9, 5})==-293); 
}

int main()
{
    test();

    return 0;
}