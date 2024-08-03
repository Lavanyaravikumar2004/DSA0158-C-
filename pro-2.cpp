#include <iostream>
using namespace std;

class Vehicle {
protected:
    string make, model;
    int year;
public:
    Vehicle(string mk, string mdl, int yr) : make(mk), model(mdl), year(yr) {}
    void show() { cout << "Make: " << make << ", Model: " << model << ", Year: " << year << endl; }
};

class Car : public Vehicle {
    int seatingCapacity;
    string fuelType;
public:
    Car(string mk, string mdl, int yr, int sc, string ft) : Vehicle(mk, mdl, yr), seatingCapacity(sc), fuelType(ft) {}
    void show() {
        Vehicle::show();
        cout << "Seating Capacity: " << seatingCapacity << ", Fuel Type: " << fuelType << endl;
    }
};

class Truck : public Vehicle {
    double payloadCapacity, towingCapacity;
public:
    Truck(string mk, string mdl, int yr, double pc, double tc) : Vehicle(mk, mdl, yr), payloadCapacity(pc), towingCapacity(tc) {}
    void show() {
        Vehicle::show();
        cout << "Payload Capacity: " << payloadCapacity << " tons, Towing Capacity: " << towingCapacity << " tons" << endl;
    }
};

int main() {
    Car car("Toyota", "Camry", 2020, 5, "Gasoline");
    Truck truck("Ford", "F-150", 2021, 3.5, 5.0);

    car.show();
    truck.show();

    return 0;
}
