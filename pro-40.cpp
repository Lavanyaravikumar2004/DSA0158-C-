#include <iostream>
#include <climits>

using namespace std;

int main() {
    int arr[] = {10, 20, 4, 45, 99}; // Example array
    int n = sizeof(arr) / sizeof(arr[0]);

    int largest = INT_MIN, secondLargest = INT_MIN;

    for (int i = 0; i < n; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    cout << (secondLargest == INT_MIN ? "No second largest element." : "Second largest element: " + to_string(secondLargest)) << endl;

    return 0;
}
