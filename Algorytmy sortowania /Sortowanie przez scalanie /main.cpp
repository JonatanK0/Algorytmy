#include <iostream>
#include "mergeSort.hpp"

int main() {
    const int size = 6;
    int arr[size] = {5, 2, 9, 1, 5, 6};

    std::cout << "Original array: ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    mergeSort(arr, size);

    std::cout << "Sorted array (merge sort): ";
    for (int i = 0; i < size; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
