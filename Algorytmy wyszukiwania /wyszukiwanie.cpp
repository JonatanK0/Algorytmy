#include "deklaracje.hpp"
#include <algorithm>
#include <cmath>
using namespace std;
int wyszukiwanie_linowe(const int *t, int size, int key) {
    for (int i = 0; i < size; i++) {
        if (t[i] == key) {
            return i;
        }
    }
    return -1;
}

int wyszukiwanie_linoweZWartownikiem(const int *t, int size, int key) {
    int i = 0;
    while (t[i] != key) {
        i++;
        if (i == size) {
            return -1;
        }
    }
    return i;
}

int wyszukiwanie_skokowe(const int *t, int size, int key) {
    int step = sqrt(size);
    int prev = 0;
    while (t[min(step, size) - 1] < key) {
        prev = step;
        step += sqrt(size);
        if (prev >= size) {
            return -1;
        }
    }
    while (t[prev] < key) {
        prev++;
        if (prev == min(step, size)) {
            return -1;
        }
    }
    if (t[prev] == key) {
        return prev;
    }
    return -1;
}

int wyszukiwanie_binarne(const int *t, int size, int key) {
    int left = 0;
    int right = size - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (t[mid] == key) {
            return mid;
        }
        if (t[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

int wyszukiwanie_interpolacyjne(const int *t, int size, int key) {
    int low = 0;
    int high = size - 1;
    while (low <= high && key >= t[low] && key <= t[high]) {
        if (low == high) {
            if (t[low] == key) {
                return low;
            }
            return -1;
        }
        int pos = low + (((double)(high - low) / (t[high] - t[low])) * (key - t[low]));
        if (t[pos] == key) {
            return pos;
        }
        if (t[pos] < key) {
            low = pos + 1;
        } else {
            high = pos - 1;
        }
    }
    return -1;
}
