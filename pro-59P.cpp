#include <iostream>
using namespace std;

int main() {
    int rows = 4, cols = 7; // Dimensions of the rectangle

    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < cols; j++) {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}
