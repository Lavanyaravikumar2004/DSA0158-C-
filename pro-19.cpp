#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    int l = 0, r = str.length() - 1;
    while (l < r && str[l] == str[r]) ++l, --r;

    cout << (l >= r ? "Palindrome" : "Not a palindrome") << endl;
    return 0;
}
