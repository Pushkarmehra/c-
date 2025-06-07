#include <iostream>
#include <string>
using namespace std;

class student {
private:
    string name;
    int rollno;
    string DOB;

public:
    void input();
    void display() {
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "DOB: " << DOB << endl;
    }
};
void student:: input(){
     cout << "Enter name: ";
        cin >> name;
        cout << "Enter roll number: ";
        cin >> rollno;
        cout << "Enter DOB (DD-MM-YYYY): ";
        cin >> DOB;
}

int main() {
    student s1;
    s1.input();
    s1.display();
    return 0;
}
