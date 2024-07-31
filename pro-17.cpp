#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1;
    cout << "Enter terms: "; cin >> n;
    cout << a << " " << b << " ";
    for (int i = 3; i <= n; ++i) {
        cout << a + b << " ";
        b = a + b; a = b - a;
    }
    return 0;
}
