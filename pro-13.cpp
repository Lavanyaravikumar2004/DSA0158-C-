#include <iostream>
using namespace std;

int main() {
    float arr[] = {1.1f, 2.2f, 3.3f, 4.4f, 5.5f};
    float* ptr = arr;  // Pointer to the first element of the array

    cout << "Array elements: ";
    for (int i = 0; i < 5; ++i) {
        cout << *(ptr + i) << " ";
    }
    cout << endl;

    return 0;
}
