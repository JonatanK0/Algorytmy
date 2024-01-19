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
 
void sortowaniePrzezScalanie(int dane[], int poczatek, int koniec) {
    if (poczatek < koniec) {
        int srodek = poczatek + (koniec - poczatek) / 2;
        sortowaniePrzezScalanie(dane, poczatek, srodek);
        sortowaniePrzezScalanie(dane, srodek + 1, koniec);
    }
}
 
int main() {
    int dane[MAX_ROZMIAR];
    int rozmiar = MAX_ROZMIAR;
 
    wypelnijTab(dane, rozmiar);
    cout << "Tablica przed sortowaniem przez scalanie:" << endl;
    drukujTab(dane, rozmiar);
 
    sortowaniePrzezScalanie(dane, 0, rozmiar - 1);
 
    cout << "Tablica po sortowaniu przez scalanie:" << endl;
    drukujTab(dane, rozmiar);
 
    return 0;
}