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

    // Calculate and print the average
    double average = static_cast<double>(sum) / n;
    cout << "Average: " << average << endl;

    return 0;
}
