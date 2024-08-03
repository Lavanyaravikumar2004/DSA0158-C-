#include <iostream>
using namespace std;

class Car {
    string model;
public:
    Car(string car_model) : model(car_model) {
        cout << "Car created: " << model << endl;
    }
    ~Car() {
        cout << "Car destroyed: " << model << endl;
    }
};

int main() {
    Car myCar("Toyota");
    return 0;
}
