#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Enter two integers: ";
    cin >> a >> b;

    // Check equality using the ternary conditional operator
    string result = (a == b) ? "The numbers are equal." : "The numbers are not equal.";

    cout << result << endl;

    return 0;
}