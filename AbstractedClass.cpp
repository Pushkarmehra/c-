#include <iostream>
using namespace std;

// Abstract class
class Person {
public:
    // Pure virtual function: must be overridden in derived class
    virtual void fun() = 0;

    // Concrete (regular) function
    void f1() {
        cout << "This is a regular function in abstract class Person." << endl;
    }
};

// Derived class that implements the abstract method
class Student : public Person {
public:
    void fun() override {
        cout << "Student implementation of fun()." << endl;
    }

    void f2() {
        cout << "Student-specific method." << endl;
    }
};

int main() {
    // Person p; // ❌ Error: Cannot instantiate an abstract class

    // Using abstract class pointer to point to derived class object
    Person* ptr = new Student();

    ptr->fun();  // Calls Student's version of fun()
    ptr->f1();   // Calls base class (Person's) f1()

    delete ptr;
    return 0;
}
