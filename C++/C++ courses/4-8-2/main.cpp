#include <iostream>
using namespace std;

void s(int w[], int v[], double r[], int n) {
    for(int i=0; i<n-1; i++) {
        for(int j=i+1; j<n; j++) {
            if (r[i]<r[j]) {
                swap(g[i], g[j]);
                swap(v[i], v[j]);
                swap(r[i], r[j]);)
            }
        }
    }
}

double g(int w[], int v[], double sc, int n ) {
    double tv=0.0;
    double cw=0.0;
    
    double r[n];
    
    for(int i=0; i<n; i++) {
        r[i]=v[i]/w[i];
    }
    
    s(w,v,r,n);
    
    for(int i=0; i<n; i++) {
        if(cw+w[i]<=sc) {
            cw+=w[i];
            tv+=v[i];
        } else{
            double frac=(sc-cw) / w[i];
            tv+=v[i]*frac;
            break;
        }
    }
    return tv
}

int main()
{
    int w[]={2,3,5,4};
    double v[]={48.0, 50.0, 100.0, 68.0};
    int n=sizeof(w)/sizeof(w[0]);
    double c=7;
    
    double mv=g(w, v, n, sc);
    cout<<"val max e"<<mv;
    
    return 0;
}