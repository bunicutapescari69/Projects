#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool compL(const string &a, const string &b) {
    return a.length() < b.length();
}

int main()
{
    vector <string> v={"ciocolat", "pzazz", "mer", "bsiscutisi"};
    
    sort(v.begin(), v.end(), compL);
    
    for(const string &s: v) {
        cout<<s<<" ";
    }
    
    return 0;
}