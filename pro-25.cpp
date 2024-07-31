#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n, sum, digit;
    unordered_set<int> seen;
    cout << "Enter number: ";
	cin >> n;
    
    while (n != 1 && seen.insert(n).second) {
        sum = 0;
        while (n) {
            digit = n % 10;
            sum += digit * digit;
            n /= 10;
        }
        n = sum;
    }

    cout << (n == 1 ? "Happy" : "Not Happy") << endl;

    return 0;
}
