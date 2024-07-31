#include <iostream>

using namespace std;

int main() {
    float num1, num2;

    cout << "Enter two floating-point numbers: ";
    cin >> num1 >> num2;

    cout << "Addition: " << num1 + num2;
    cout << "Subtraction: " << num1 - num2;
    cout << "Multiplication: " << num1 * num2;
    cout << "Division: " << num1 / num2;

    return 0;
}