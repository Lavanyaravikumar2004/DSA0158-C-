#include <iostream>
using namespace std;

int main() {
    int n, sum = 0;
    cout << "Enter number: ";
    cin >> n;
    for (int temp = n; temp; temp /= 10)
        sum += (temp % 10) * (temp % 10) * (temp % 10);

    if (sum == n)
        cout << "Armstrong" << endl;
    else
        cout << "Not Armstrong" << endl;

    return 0;
}
