#include <iostream>
using namespace std;

class Animal {
protected:
    string name, species;
    int age;
public:
    Animal(string n, string sp, int a) : name(n), species(sp), age(a) {}
    void show() { cout << "Name: " << name << ", Species: " << species << ", Age: " << age << endl; }
};

class Cat : public Animal {
    string color, breed;
public:
    Cat(string n, string sp, int a, string c, string b) : Animal(n, sp, a), color(c), breed(b) {}
    void show() {
        Animal::show();
        cout << "Color: " << color << ", Breed: " << breed << endl;
    }
};

class Dog : public Animal {
    double weight;
    string breed;
public:
    Dog(string n, string sp, int a, double w, string b) : Animal(n, sp, a), weight(w), breed(b) {}
    void show() {
        Animal::show();
        cout << "Weight: " << weight << " kg, Breed: " << breed << endl;
    }
};

int main() {
    Cat cat("Whiskers", "Feline", 3, "Black", "Siamese");
    Dog dog("Rex", "Canine", 5, 25.5, "Labrador");

    cat.show();
    dog.show();

    return 0;
}
