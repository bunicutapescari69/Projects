#include <iostream>
using namespace std;

struct student { //our own variable types
    int nota;
    char init;
};

int main()
{
    /*int m[lines][columns] */
    int i; int j;
    int matrix[3][3] {
        {1,2,3},
        {4,5,6},
        {7,8,9},
    };
    
    for(i=0; i<3; i++) {
        for(j=0; j<3; j++) {
            cout<<matrix[i][j]<<" ";
        }
    }
    
    student s={10,'s'};
    cout<<endl<<s.nota;
    
    return 0;
}