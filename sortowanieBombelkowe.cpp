#include <iostream>
#include <algorithm>
 
using namespace std;
 
const int MAX_ROZMIAR = 6;
 
void wypelnijTab(int dane[], int rozmiar) {
    cout << "Podaj " << rozmiar << " liczb do tablicy:" << endl;
    for (int i = 0; i < rozmiar; ++i) {
        cout << "Liczba " << i + 1 << ": ";
        cin >> dane[i];
    }
}
 
void drukujTab(int dane[], int rozmiar) {
    for_each(dane, dane + rozmiar, [](int x){ cout << x << " "; });
    cout << endl;
}
 
void sortowanieBabelkowe(int dane[], int rozmiar) {
    for (int i = 0; i < rozmiar - 1; ++i) {
        for (int j = 0; j < rozmiar - i - 1; ++j) {
            if (dane[j] > dane[j + 1]) {
                swap(dane[j], dane[j + 1]);
                drukujTab(dane, rozmiar);
            }
        }
    }
}
 
int main() {
    int dane[MAX_ROZMIAR];
    int rozmiar = MAX_ROZMIAR;
 
    wypelnijTab(dane, rozmiar);
    cout << "Tablica przed sortowaniem bąbelkowym:" << endl;
    drukujTab(dane, rozmiar);
 
    sortowanieBabelkowe(dane, rozmiar);
 
    cout << "Tablica po sortowaniu bąbelkowym:" << endl;
    drukujTab(dane, rozmiar);
 
    return 0;
}