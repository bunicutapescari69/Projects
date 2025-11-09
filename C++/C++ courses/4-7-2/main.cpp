#include <iostream>
#include <vector>
using namespace std;

vector<double> maxsetsum(const vector<double> &a) {
        vector<double> b;
        double s=0;
        
        for(double n : a) {
            if(n>0) {
                b.push_back(n);
                s+=n;
            }
        }
    
    
        cout<<"Subvector b with max sum: "<<endl;
        for(double num : b) {
            cout<<num<<" ";
        }
        cout<<endl;
        cout<<"Max sum: "<<s<<endl;
        return b;
    }

int main()
{
    vector<double> a={-1.5, 3, -4.2, 2.5, -7.3, 1.9, 6.1};
    maxsetsum(a);
    
    return 0;
}