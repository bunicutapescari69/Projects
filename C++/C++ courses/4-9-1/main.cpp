#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Activitate {
    int start, end;
};

// Comparator pentru sortarea activităților după timpul de sfârșit
bool comparator(Activitate a, Activitate b) {
    return a.end < b.end;
}

void selecteazaActivitati(vector<Activitate>& activitati) {
    // Sortăm activitățile după timpul de sfârșit
    sort(activitati.begin(), activitati.end(), comparator);

    cout << "Activitățile selectate sunt:\n";
    
    // Alegem prima activitate
    int ultimaSfarsit = activitati[0].end;
    cout << "[" << activitati[0].start << ", " << activitati[0].end << "]\n";
    
    // Parcurgem restul activităților și selectăm cele compatibile
    for (int i = 1; i < activitati.size(); i++) {
        if (activitati[i].start >= ultimaSfarsit) {
            cout << "[" << activitati[i].start << ", " << activitati[i].end << "]\n";
            ultimaSfarsit = activitati[i].end;
        }
    }
}

int main() {
    vector<Activitate> activitati = {
        {1, 3}, {2, 5}, {4, 7}, {1, 8}, {5, 9}, {8, 10}
    };

    selecteazaActivitati(activitati);

    return 0;
}
