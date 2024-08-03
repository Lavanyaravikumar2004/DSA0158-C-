#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows for the half-diamond

    // Top half of the half-diamond
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    // Bottom half of the half-diamond
    for (int i = n - 1; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
