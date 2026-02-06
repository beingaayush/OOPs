#include <iostream>
using namespace std;

class Student {
public:
    int *marks;

    Student(int marks) {           //constructor
        this->marks = new int(marks);
    }

    Student(const Student &s) {   //deep copy
        this->marks = new int(*s.marks);
    }

    ~Student() {                 // destructor
        delete marks;
    }

    void display() {
        cout << *marks << endl;
    }
};

int main() {
    Student s1(90);
    Student s2 = s1;

    s1.display();
    s2.display();
}
