#include <iostream>

using namespace std;

int main() {
    char c;
    cout << "Enter a character: ";
    cin >> c;

    // Convert to lowercase to simplify checks
    c = tolower(c);

    if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
        cout << c << " is a vowel." << endl;
    else if ((c >= 'a' && c <= 'z'))
        cout << c << " is a consonant." << endl;
    else
        cout << c << " is not a letter." << endl;

    return 0;
}