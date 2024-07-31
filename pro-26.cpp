#include <iostream>
using namespace std;

int factorial(int num) {
    int fact = 1;
    while (num > 1)
        fact *= num--;
    return fact;
}

int main() {
    int n, sum = 0, temp;
    cout << "Enter number: ";
    cin >> n;
    for (temp = n; temp; temp /= 10)
        sum += factorial(temp % 10);

    cout << (sum == n ? "Strong" : "Not Strong") << endl;

    return 0;
}
