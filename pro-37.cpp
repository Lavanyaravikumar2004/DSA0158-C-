#include <iostream>

using namespace std;

int main() {
    int arr[6] = {1, 2, 3, 4, 5}; // Original array
    int n = 5; // Current number of elements
    int pos = 2; // Position of the element to delete (0-based index)

    // Shift elements to the left to delete the element at 'pos'
    for (int i = pos; i < n - 1; ++i) {
        arr[i] = arr[i + 1];
    }
    n--; // Decrease the number of elements

    // Print the updated array
    for (int i = 0; i < n; ++i) {
        cout << arr[i] << ' ';
    }
    cout << endl;

    return 0;
}
