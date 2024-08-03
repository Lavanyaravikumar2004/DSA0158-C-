#include <iostream>
using namespace std;

int main() {
    int n = 5; // Number of rows
    int num = 1; // Starting number

    // Print Floyd's Triangle
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            cout << num << " ";
            num++;
        }
        cout << endl;
    }

    return 0;
}
