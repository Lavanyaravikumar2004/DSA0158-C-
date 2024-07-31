#include <iostream>

using namespace std;

int main() {
    int n = 5; // Number of rows for the upper half

    // Upper half of the diamond
    for (int i = 1; i <= n; ++i) {
        for (int j = n; j > i; --j) {
            cout << ' ';
        }
        for (int k = 0; k < 2 * i - 1; ++k) {
            cout << '*';
        }
        cout << endl;
    }

    // Lower half of the diamond
    for (int i = n - 1; i > 0; --i) {
        for (int j = n; j > i; --j) {
            cout << ' ';
        }
        for (int k = 0; k < 2 * i - 1; ++k) {
            cout << '*';
        }
        cout << endl;
    }

    return 0;
}
