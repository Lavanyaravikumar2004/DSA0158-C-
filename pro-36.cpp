#include <iostream>

using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5}; // Array with space for one more element
    int n = 5; // Current number of elements
    int pos = 2; // Position to insert (0-based index)
    int value = 99; // Value to insert

    // Insert the new element and shift elements to the right
    for (int i = n; i > pos; --i) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = value;
    n++; // Increase the number of elements

    // Print the updated array
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
