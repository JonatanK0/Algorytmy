#include <iostream>
#include "deklaracje.hpp"
#include <algorithm>

int main() {
    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(t) / sizeof(t[0]);
    int key;
    int choice;

    std::cout << "Podaj klucz do wyszukania: ";
    std::cin >> key;

    std::cout << "Wybierz algorytm wyszukiwania:\n";
    std::cout << "1. Liniowe\n";
    std::cout << "2. Liniowe z wartownikiem\n";
    std::cout << "3. Skokowe\n";
    std::cout << "4. Binarne\n";
    std::cout << "5. Interpolacyjne\n";
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Index klucza: " << wyszukiwanie_linowe(t, size, key) << "\n";
            break;
        case 2:
            std::cout << "Index klucza: " << wyszukiwanie_linoweZWartownikiem(t, size, key) << "\n";
            break;
        case 3:
            std::cout << "Index klucza: " << wyszukiwanie_skokowe(t, size, key) << "\n";
            break;
        case 4:
            std::cout << "Index klucza: " << wyszukiwanie_binarne(t, size, key) << "\n";
            break;
        case 5:
            std::cout << "Index klucza: " << wyszukiwanie_interpolacyjne(t, size, key) << "\n";
            break;
        default:
            std::cout << "Nieprawidłowy wybór.\n";
    }

    return 0;
}
