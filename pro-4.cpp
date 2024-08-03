#include <iostream>
using namespace std;

class Book {
    string title;
public:
    Book(string book_title) : title(book_title) {
        cout << "Book created: " << title << endl;
    }
    ~Book() {
        cout << "Book destroyed: " << title << endl;
    }
};

int main() {
    Book myBook("C++ Programming");
    return 0;
}
