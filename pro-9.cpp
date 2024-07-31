#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float number;
    cout << "Enter a floating-point number: ";
    cin >> number;

    // Round down to the nearest integer
    int roundedDown = floor(number);

    // Round up to the nearest integer
    int roundedUp = ceil(number);

    // Determine the nearest integer
    int nearestInteger = (number - roundedDown < roundedUp - number) ? roundedDown : roundedUp;

    cout << "Rounded down: " << roundedDown << endl;
    cout << "Rounded up: " << roundedUp << endl;
    cout << "Nearest integer: " << nearestInteger << endl;

    return 0;
}