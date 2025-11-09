#include <iostream>
#include <vector>
#include <cassert>
using namespace std;

bool pal(const vector<int> &arr) {
    int n=arr.size();
    
    for(int i=0; i<n/2; ++i) {
        if(arr[i] != arr[n-i-1]) {
            return false;
        }
    }
    return true;
}

void test() {
    assert(pal({1,2,3,2,1})==true);
    assert(pal({1,2,3,3,1})==false);
    
}

int main()
{
    /* return true if a vector is palindrome*/

    return 0;
}