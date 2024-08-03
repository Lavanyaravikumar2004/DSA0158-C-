#include <iostream>
using namespace std;

class Person {
public:
    string name;
    int age;

    Person(string n, int a) : name(n), age(a) {}
    void show() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

int main() {
    Person person("Alice", 30);
    Person* ptr = &person;  // Pointer to the Person object

    ptr->show();  // Use the pointer to call the object's method

    return 0;
}
