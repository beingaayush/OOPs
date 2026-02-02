#include <iostream>
#include <string>
using namespace std;
class Teacher {
public:
    //Properties | Attributes
    string name;
    string dept;
    string subject;
    double salary;
 
    //methods | member functions | actions
    void changeDept(string newDept){
        dept = newDept;
    }
    void display(){
        cout << "Name = "<< name << endl << "Department = "<< dept << endl << "Subject = "<< subject <<endl << "salary" << salary;
    }
};


int main(){
    //Objects
    Teacher t1;
    Teacher t2;

    //assigning values & actions
    t1.name = "Prashant Sharma";
    t1.dept = "CSE";
    t1.subject = "DSA";
    t1.salary = 80000;
    t1.changeDept("BCA");

    cout << endl;

    t2.name = "Gendal Lal";
    t2.dept = "CSE";
    t2.subject = "CSO";
    t2.salary = 80000;
    t2.display();
    
    return  0;
}