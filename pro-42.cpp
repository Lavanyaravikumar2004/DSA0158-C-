#include <iostream>

using namespace std;

int main() {
    int arr1[] = {1, 2, 3}; // First array
    int arr2[] = {4, 5, 6}; // Second array
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int merged[n1 + n2]; // Array to hold merged result

    // Copy elements from arr1 to merged
    for (int i = 0; i < n1; ++i) {
        merged[i] = arr1[i];
    }

    // Copy elements from arr2 to merged
    for (int i = 0; i < n2; ++i) {
        merged[n1 + i] = arr2[i];
    }

    // Print merged array
    for (int i = 0; i < n1 + n2; ++i) {
        cout << merged[i] << ' ';
    }
    cout << endl;

    return 0;
}
