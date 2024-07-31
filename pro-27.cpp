#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << ((n % 7 == 0 || n % 10 == 7) ? "Buzz" : "Not Buzz") << endl;

    return 0;
}
