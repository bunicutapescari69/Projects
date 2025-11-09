#include <iostream>
#include <vector>

using namespace std;

// Funcție pentru interclasarea a doi vectori ordonați
vector<int> interclasare(const vector<int>& v1, const vector<int>& v2) {
    vector<int> rezultat;
    size_t i = 0, j = 0;

    while (i < v1.size() && j < v2.size()) {
        if (v1[i] < v2[j]) {
            rezultat.push_back(v1[i]);
            i++;
        } else {
            rezultat.push_back(v2[j]);
            j++;
        }
    }

    // Adăugăm elementele rămase
    while (i < v1.size()) {
        rezultat.push_back(v1[i]);
        i++;
    }
    while (j < v2.size()) {
        rezultat.push_back(v2[j]);
        j++;
    }

    return rezultat;
}

int main() {
    vector<int> v1 = {1, 3, 5, 7};  // Vector ordonat
    vector<int> v2 = {2, 4, 6, 8};  // Vector ordonat

    vector<int> rezultat = interclasare(v1, v2);

    // Afișăm elementele vectorului rezultat pentru verificare
    cout << "Vectorul rezultat interclasat: ";
    for (int el : rezultat) {
        cout << el << " ";
    }
    
    return 0;
}
