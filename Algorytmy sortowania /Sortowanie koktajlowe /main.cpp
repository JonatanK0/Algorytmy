#include <iostream>
#include "coktailsort.hpp"

int main() {
    const int size = 6;
    int arr[size] = {5, 2, 9, 1, 5, 6};

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    cocktailSort(arr, size);

    std::cout << "Sorted array (coktail sort): ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
