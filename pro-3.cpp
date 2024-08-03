#include <iostream>
using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle(int w, int h) : width(w), height(h) {
        cout << "Rectangle created with width: " << width << " and height: " << height << endl;
    }
    ~Rectangle() {
        cout << "Rectangle destroyed" << endl;
    }
};

int main() {
    Rectangle rect(10, 5);
    return 0;
}
