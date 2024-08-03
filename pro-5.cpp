#include <iostream>
using namespace std;

class Person {
protected:
    string name;
    int age;
    char gender;
public:
    Person(string n, int a, char g) : name(n), age(a), gender(g) {}
    void show() { cout << "Name: " << name << ", Age: " << age << ", Gender: " << gender << endl; }
};

class Student : public Person {
    int rollNumber;
    string studentClass;
public:
    Student(string n, int a, char g, int r, string c) : Person(n, a, g), rollNumber(r), studentClass(c) {}
    void show() {
        Person::show();
        cout << "Roll Number: " << rollNumber << ", Class: " << studentClass << endl;
    }
};

class Teacher : public Person {
    string subject;
    double salary;
public:
    Teacher(string n, int a, char g, string s, double sal) : Person(n, a, g), subject(s), salary(sal) {}
    void show() {
        Person::show();
        cout << "Subject: " << subject << ", Salary: $" << salary << endl;
    }
};

int main() {
    Student student("John", 16, 'M', 101, "10th Grade");
    Teacher teacher("Ms. Smith", 35, 'F', "Mathematics", 50000);

    student.show();
    teacher.show();

    return 0;
}
