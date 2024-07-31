#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter number: ";
    cin >> n;
    for (int temp = n; temp; temp /= 10)
        sum += temp % 10;

    cout << (n % sum == 0 ? "Harshad" : "Not Harshad") << endl;
    return 0;
}
