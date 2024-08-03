#include <iostream>
using namespace std;

// Function to be called
void greet() {
    cout << "Hello, World!" << endl;
}

int main() {
    // Pointer to the function
    void (*funcPtr)() = greet;

    // Call the function using the pointer
    funcPtr();

    return 0;
}
