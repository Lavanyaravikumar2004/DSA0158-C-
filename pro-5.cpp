#include <iostream>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int main() {
    cout << "GCD: " << gcd(48, 18) << endl;
    return 0;
}
