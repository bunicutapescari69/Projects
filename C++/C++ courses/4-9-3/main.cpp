#include <iostream>
using namespace std;

struct Melodie {
    string nume;
    int durata;
};

void bubbleSortByDuration(Melodie arr[], int n) {
    bool swapped;
    for(int i = 0; i < n - 1; i++) {
        swapped = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(arr[j].durata > arr[j + 1].durata) {
                Melodie aux = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = aux;
                swapped = true;
            }
        }
        if(!swapped) {
            break;
        }
    }
}

void printMelodii(Melodie arr[], int n) {
    for(int i = 0; i < n; i++) {
        cout << "Nume: " << arr[i].nume << " , Durata: " << arr[i].durata << " secunde" << endl;
    }
}

int main() {
    Melodie playlist[] = {
        {"M1", 210},
        {"M2", 150},
        {"M3", 180},
        {"M4", 240},
        {"M5", 200}
    };

    int n = sizeof(playlist) / sizeof(playlist[0]);

    cout << "Lista inițială:" << endl;
    printMelodii(playlist, n);

    bubbleSortByDuration(playlist, n);

    cout << endl << "Lista sortată după durată:" << endl;
    printMelodii(playlist, n);

    return 0;
}