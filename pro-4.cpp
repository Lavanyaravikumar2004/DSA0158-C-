#include <iostream>
using namespace std;

class Employee {
protected:
    string name;
    int id;
    double salary;
public:
    Employee(string n, int i, double s) : name(n), id(i), salary(s) {}
    void show() { cout << "Name: " << name << ", ID: " << id << ", Salary: $" << salary << endl; }
};

class Manager : public Employee {
    string department;
    double bonus;
public:
    Manager(string n, int i, double s, string d, double b) : Employee(n, i, s), department(d), bonus(b) {}
    void show() {
        Employee::show();
        cout << "Department: " << department << ", Bonus: $" << bonus << endl;
    }
};

class Engineer : public Employee {
    string specialty;
    int hours;
public:
    Engineer(string n, int i, double s, string sp, int h) : Employee(n, i, s), specialty(sp), hours(h) {}
    void show() {
        Employee::show();
        cout << "Specialty: " << specialty << ", Hours: " << hours << endl;
    }
};

int main() {
    Manager mgr("Alice", 101, 75000, "HR", 5000);
    Engineer eng("Bob", 102, 70000, "Software", 40);

    mgr.show();
    eng.show();

    return 0;
}
