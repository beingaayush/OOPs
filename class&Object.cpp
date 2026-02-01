#include <iostream>
#include <string>
using namespace std;
class Teacher {
    //Properties | Attributes
    string name;
    string dept;
    string subject;
    double salary;

    //methods | member functions | actions
    void changeDept(string newDept){
        dept = newDept;
    } 
};


int main(){
    //Objects
    Teacher t1;
    Teacher t2;
    return  0;
}