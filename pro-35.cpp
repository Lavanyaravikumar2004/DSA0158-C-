#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    // Reversing the array
    for (int i = 0; i < n / 2; ++i) {
        swap(arr[i], arr[n - 1 - i]);
    }

    // Printing the reversed array
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
