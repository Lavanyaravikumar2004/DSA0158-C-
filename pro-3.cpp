#include <iostream>
using namespace std;

string reverseString(const string& str) {
    return string(str.rbegin(), str.rend());
}

int main() {
    cout << "Reversed: " << reverseString("hello") << endl;
    return 0;
}
