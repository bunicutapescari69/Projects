#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Sarcina {
    int timpExecutie;
};

// Comparator pentru sortarea sarcinilor după timp de execuție
bool comparator(Sarcina a, Sarcina b) {
    return a.timpExecutie < b.timpExecutie;
}

int minimizarePenalizare(vector<Sarcina>& sarcini) {
    // Sortăm sarcinile după timpul de execuție (ordine crescătoare)
    sort(sarcini.begin(), sarcini.end(), comparator);

    int penalizareTotala = 0, timpCurent = 0;

    // Calculăm penalizarea acumulată
    for (const auto& sarcina : sarcini) {
        penalizareTotala += timpCurent;
        timpCurent += sarcina.timpExecutie;
    }

    return penalizareTotala;
}

int main() {
    vector<Sarcina> sarcini = {{3}, {1}, {4}, {1}, {2}};

    cout << "Penalizarea minimă este: " << minimizarePenalizare(sarcini) << endl;

    return 0;
}
