#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 2, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);
    int value = 2; // Value to find occurrences of
    int count = 0;

    // Count occurrences of 'value'
    for (int i = 0; i < n; ++i) {
        if (arr[i] == value) {
            ++count;
        }
    }

    // Print the count
    cout << "Occurrences of " << value << ": " << count << endl;

    return 0;
}
