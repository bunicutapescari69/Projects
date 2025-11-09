#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    string v[]={"ciocolat", "pzazz", "merilii", "bsiscutisi"};
    
    int n=sizeof(v)/sizeof(v[0]);
    
    cout<<n<<endl;
    cout<<sizeof(v)<<endl;
    cout<<sizeof(v[0])<<endl;
    
    sort(v,v+n);
    
    for(int i=0; i<n; i++) {
        cout<<v[i]<<" ";
    }
    
    return 0;
}