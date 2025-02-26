#include <iostream>
#include <cstring> // For handling string operations
using namespace std;

class Employee {
public:
    char name[10];
    int rollNo;

    // Default Constructor
    Employee() {
        cout << "Welcome! This is your first Employee object." << endl;
    }

    // Destructor
    ~Employee() {
        cout << "Goodbye! Destructor called for an Employee object." << endl;
    }

    // Parameterized Constructor
    Employee(int id) {
        rollNo = id;
        cout << "Employee ID assigned: " << rollNo << endl;
    }

    // Member function to print a simple message
    void introduce() {
        cout << "Hello! I'm an Employee object." << endl;
    }

    // Member function declared inside class, but defined outside
    void showDetails();
};

// Definition of the showDetails() function outside the class
void Employee::showDetails() {
    cout << "This function is defined outside the class." << endl;
}

int main() {
    // Creating an object using the default constructor
    Employee emp1;

    // Taking input for employee's name
    cout << "Enter Employee Name: ";
    cin >> emp1.name;

    // Displaying the entered name
    cout << "Employee Name: " << emp1.name << endl;

    // Calling member functions
    emp1.introduce();
    emp1.showDetails();

    // Creating another object using the parameterized constructor
    Employee emp2(21);

    return 0; // Destructor will be automatically called when the program ends
}
