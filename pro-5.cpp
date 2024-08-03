#include <iostream>
using namespace std;

class Student {
    string name;
public:
    Student(string student_name) : name(student_name) {
        cout << "Student created: " << name << endl;
    }
    ~Student() {
        cout << "Student destroyed: " << name << endl;
    }
};

int main() {
    Student student("John Doe");
    return 0;
}
