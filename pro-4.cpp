#include <iostream>
using namespace std;

void findMinMax(const int arr[], int size, int &min, int &max) {
    min = max = arr[0];
    for (int i = 1; i < size; ++i) {
        if (arr[i] < min) min = arr[i];
        if (arr[i] > max) max = arr[i];
    }
}

int main() {
    int arr[] = {3, 1, 4, 1, 5, 9};
    int min, max;
    findMinMax(arr, 6, min, max);
    cout << "Min: " << min << ",Max: " << max << endl;
    return 0;
}
