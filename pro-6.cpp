#include <iostream>
using namespace std;

// Function to count characters in a string
int countChars(const string& str) {
    return str.length();
}

int main() {
    string str = "hello";
    cout << "Number of characters: " << countChars(str) << endl;
    return 0;
}
