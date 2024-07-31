#include <iostream>

using namespace std;

int main() {
    int a, b, c;
    cout << "Enter three integers: ";
    cin >> a >> b >> c;

    // Find the largest using the ternary conditional operator
    int largest = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);

    cout << "The largest number is: " << largest << endl;

    return 0;
}