#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int minBancnote(int S, vector<int>& bancnote) {
    sort(bancnote.rbegin(), bancnote.rend()); 
    int numarBancnote = 0;

    for (int valoare : bancnote) {
        if (S >= valoare) {
            int folosire = S / valoare;
            numarBancnote += folosire;
            S -= folosire * valoare;
        }
    }

    return (S == 0) ? numarBancnote : -1; }

int main() {
    int S = 87;
    vector<int> bancnote = {1, 5, 10, 20, 50};

    int rezultat = minBancnote(S, bancnote);
    if (rezultat != -1) {
        cout << "Numărul minim de bancnote necesare: " << rezultat << endl;
    } else {
        cout << "Nu se poate forma suma exactă cu valorile date." << endl;
    }

    return 0;
}
