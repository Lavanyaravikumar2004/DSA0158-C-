#include <iostream>
using namespace std;

double areaOfCircle(double radius) {
    return 3.14159 * radius * radius;
}

int main() {
    cout << "Area: " << areaOfCircle(5.0) << endl;
    return 0;
}
