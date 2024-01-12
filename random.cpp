#include <iostream>
using namespace std;
 
void randomF(int wyl_liczby[], int n) {
    for (int i = 0; i < n; i++) {
        int random = rand() % 20 + 2;
        wyl_liczby[i] = random;
        cout << wyl_liczby[i] << " ";
    }
}
 
int main() {
    int n = 12;
    int wyl_liczby[n];
 
    randomF(wyl_liczby, n);
    cout   << endl;
 
    return 0;
}