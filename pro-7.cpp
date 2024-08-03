#include <iostream>
using namespace std;

double celsiusToFahrenheit(double c) { return c * 9 / 5 + 32; }
double fahrenheitToCelsius(double f) { return (f - 32) * 5 / 9; }

int main() {
    cout << "25C = " << celsiusToFahrenheit(25) << "F\n";
    cout << "77F = " << fahrenheitToCelsius(77) << "C\n";
    return 0;
}
