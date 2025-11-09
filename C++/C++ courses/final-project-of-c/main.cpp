#include <iostream>
#include <vector>
#include <algorithm>
#include <iomanip>

using namespace std;

struct Car {
    string numberPlate;
    int kilometers;
    int kilometersSinceLastService;
};

void addCar(vector<Car>& fleet) {
    Car newCar;
    cout << "Introduceți numărul de înmatriculare al noii mașini: ";
    cin >> newCar.numberPlate;
    cout << "Introduceți numărul de kilometri: ";
    cin >> newCar.kilometers;
    cout << "Introduceți numărul de kilometri de la ultima revizie: ";
    cin >> newCar.kilometersSinceLastService;
    fleet.push_back(newCar);
}

void displayCars(const vector<Car>& fleet) {
    if (fleet.empty()) {
        cout << "Nu există mașini în flotă.\n";
    } else {
        for (const auto& car : fleet) {
            cout << "Număr de înmatriculare: " << car.numberPlate
                 << ", Kilometri: " << car.kilometers
                 << ", Kilometri de la ultima revizie: " << car.kilometersSinceLastService << "\n";
        }
    }
}

void displayCarsNeedingService(const vector<Car>& fleet) {
    bool found = false;
    for (const auto& car : fleet) {
        if (car.kilometersSinceLastService > 15000) {
            cout << "Număr de înmatriculare: " << car.numberPlate
                 << ", Kilometri: " << car.kilometers
                 << ", Kilometri de la ultima revizie: " << car.kilometersSinceLastService << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Nu există mașini care necesită revizie.\n";
    }
}

void filterCarsByKilometers(const vector<Car>& fleet, int minKm, int maxKm) {
    bool found = false;
    for (const auto& car : fleet) {
        if (car.kilometers >= minKm && car.kilometers <= maxKm) {
            cout << "Număr de înmatriculare: " << car.numberPlate
                 << ", Kilometri: " << car.kilometers
                 << ", Kilometri de la ultima revizie: " << car.kilometersSinceLastService << "\n";
            found = true;
        }
    }
    if (!found) {
        cout << "Nu există mașini în acest interval de kilometraj.\n";
    }
}

void updateCarKilometers(vector<Car>& fleet, const string& numberPlate) {
    for (auto& car : fleet) {
        if (car.numberPlate == numberPlate) {
            cout << "Introduceți noul număr de kilometri: ";
            cin >> car.kilometers;
            cout << "Introduceți noul număr de kilometri de la ultima revizie: ";
            cin >> car.kilometersSinceLastService;
            return;
        }
    }
    cout << "Mașina nu a fost găsită.\n";
}

void removeCar(vector<Car>& fleet, const string& numberPlate) {
    auto it = remove_if(fleet.begin(), fleet.end(), [&](const Car& car) {
        return car.numberPlate == numberPlate;
    });
    if (it != fleet.end()) {
        fleet.erase(it, fleet.end());
        cout << "Mașina a fost ștearsă cu succes.\n";
    } else {
        cout << "Mașina nu a fost găsită.\n";
    }
}

void sortCarsByKilometers(vector<Car>& fleet) {
    sort(fleet.begin(), fleet.end(), [](const Car& a, const Car& b) {
        return a.kilometers < b.kilometers;
    });
    cout << "Mașinile au fost sortate după kilometraj.\n";
}

void displayCarsWithExtremeKilometers(const vector<Car>& fleet) {
    if (fleet.empty()) {
        cout << "Nu există mașini în flotă.\n";
        return;
    }
    
    auto maxCar = *max_element(fleet.begin(), fleet.end(), [](const Car& a, const Car& b) {
        return a.kilometers < b.kilometers;
    });

    auto minCar = *min_element(fleet.begin(), fleet.end(), [](const Car& a, const Car& b) {
        return a.kilometers < b.kilometers;
    });

    cout << "Mașina cu cei mai mulți kilometri:\n"
         << "Număr de înmatriculare: " << maxCar.numberPlate
         << ", Kilometri: " << maxCar.kilometers
         << ", Kilometri de la ultima revizie: " << maxCar.kilometersSinceLastService << "\n";
    
    cout << "Mașina cu cei mai puțini kilometri:\n"
         << "Număr de înmatriculare: " << minCar.numberPlate
         << ", Kilometri: " << minCar.kilometers
         << ", Kilometri de la ultima revizie: " << minCar.kilometersSinceLastService << "\n";
}

void calculateAverageKilometers(const vector<Car>& fleet) {
    if (fleet.empty()) {
        cout << "Nu există mașini în flotă.\n";
        return;
    }

    int totalKilometers = 0;
    for (const auto& car : fleet) {
        totalKilometers += car.kilometers;
    }

    double averageKilometers = static_cast<double>(totalKilometers) / fleet.size();
    cout << "Numărul mediu de kilometri: " << fixed << setprecision(2) << averageKilometers << "\n";
}

int main() {
    vector<Car> fleet;
    int choice;
    string numberPlate;

    do {
        cout << "\nMeniu de Gestionare a Flotei:\n";
        cout << "1) Adăugarea unei noi mașini\n";
        cout << "2) Afișarea tuturor mașinilor\n";
        cout << "3) Afișarea mașinilor care necesită revizie\n";
        cout << "4) Filtrarea mașinilor după kilometraj\n";
        cout << "5) Actualizarea kilometrajului mașinii\n";
        cout << "6) Ștergerea unei mașini\n";
        cout << "7) Sortarea mașinilor după kilometraj\n";
        cout << "8) Ieșire din program\n";
        cout << "9) Afișarea mașinii (mașinilor) cu cel mai mare număr de kilometri și cu cel mai mic număr de kilometri\n";
        cout << "10) Calcularea numărului mediu de kilometri al tuturor mașinilor\n";
        cout << "Introduceți opțiunea dvs.: ";
        cin >> choice;
        switch (choice) {
            case 1:
                addCar(fleet);
                break;
            case 2:
                displayCars(fleet);
                break;
            case 3:
                displayCarsNeedingService(fleet);
                break;
            case 4:
                int minKm, maxKm;
                cout << "Introduceți kilometrajul minim: ";
                cin >> minKm;
                cout << "Introduceți kilometrajul maxim: ";
                cin >> maxKm;
                filterCarsByKilometers(fleet, minKm, maxKm);
                break;
            case 5:
                cout << "Introduceți numărul de înmatriculare al mașinii de actualizat: ";
                cin >> numberPlate;
                updateCarKilometers(fleet, numberPlate);
                break;
            case 6:
                cout << "Introduceți numărul de înmatriculare al mașinii de șters: ";
                cin >> numberPlate;
                removeCar(fleet, numberPlate);
                break;
            case 7:
                sortCarsByKilometers(fleet);
                break;
            case 8:
                cout << "Ieșire din program.\n";
                break;
            case 9:
                displayCarsWithExtremeKilometers(fleet);
                break;
            case 10:
                calculateAverageKilometers(fleet);
                break;
            default:
                cout << "Opțiune invalidă. Vă rugăm să încercați din nou.\n";
        }
    } while (choice != 8);

    return 0;
}
