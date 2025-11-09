#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bubbleSort(vector<int> &arr) {
    int n = arr.size();
    
    bool swapped = false;
    for(int i = 0; i < n - 1; i++) {
        swapped = false;
        
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        
        if(!swapped) {
            break;
        }
    }
}

void testSorting() {
    //date tipice
    vector<int> test1={4,2,7,1,9};
    bubbleSort(test1);
    cout<<"Sortarea test1: "<<endl;
    for(int num:test1) {
        cout<<num<<" ";
    }
    cout<<endl;
    
    //date limita
    vector<int> test2 = {1,1,1,1,1};
    bubbleSort(test2);
    cout<<"Sortarea test2: "<<endl;
    for(int num:test2) {
        cout<<num<<" ";
    }
    cout<<endl;
    
    //date speciale
    vector<int> test3= {9, -3, 0, 5, 2};
    bubbleSort(test3);
    cout<<"Sortarea test3: "<<endl;
    for(int num:test3) {
        cout<<num<<" ";
    }
    cout<<endl;
    
    //date aleatorii
    vector<int> test4= {1,2,5,8};
    bubbleSort(test4);
    cout<<"Sortarea test4: "<<endl;
    for(int num:test4) {
        cout<<num<<" ";
    }
    cout<<endl;
}

int main()
{
    /*
    exista:
    testare functionala
    testare de performanta
    testarea de limite
    testeade regresie
    
    
    tipuri de date:
    tipice
    limita
    aleatorii
    speciale
    */
    
    testSorting();

    return 0;
}