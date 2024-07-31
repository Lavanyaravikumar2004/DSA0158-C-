#include <iostream>

using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]); // Number of elements
    int sum = 0;

    // Calculate the sum
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }

    // Print the sum
    cout << "Sum of all elements: " << sum << endl;

    return 0;
}
