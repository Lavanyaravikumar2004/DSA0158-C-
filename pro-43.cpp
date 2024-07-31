#include <iostream>

using namespace std;

int main() {
    int n = 5; // Size of the array
    int* arr = new int[n]; // Create a dynamic array

    // Initialize the array
    for (int i = 0; i < n; ++i) {
        arr[i] = i + 1; // Example values
    }

    // Display the array values
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    delete[] arr; // Free the allocated memory

    return 0;
}
