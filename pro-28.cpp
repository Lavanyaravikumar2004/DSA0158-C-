#include <iostream>
using namespace std;

int main() {
    int n, sum = 0, square;
    cout << "Enter number: ";
    cin >> n;
    
    square = n * n;

    while (square) {
        sum += square % 10;
        square /= 10;
    }

    cout << (sum == n ? "Neon" : "Not Neon") << endl;

    return 0;
}
