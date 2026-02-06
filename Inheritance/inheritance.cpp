#include <iostream>
#include <string>
using namespace std;

class Person{
public:
    string name;
    int age;
};

//student class should also have name,age so don't need to write again, just inherit Person class.
class Student : public Person{
public:
    int rollno;

    Student(string name, int age, int rollno){ //constructor
        this->name = name;
        this->age = age;
        this->rollno = rollno;
    }
    void display(){
        cout << "name = " << name << endl;
        cout << "age = " << age << endl;
        cout << "rollno = " << rollno << endl;
    }
};

int main(){
    Student s1("Aayush", 21, 190);
    s1.display();
}