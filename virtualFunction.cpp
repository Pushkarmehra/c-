#include <iostream>
using namespace std;

class A {
public:
    // Virtual function allows runtime (dynamic) binding
    virtual void f1() {
        cout << "A" << endl;
    }
};

class B : public A {
public:
    // Overriding base class virtual function
    void f1() override {
        cout << "B" << endl;
    }

    void f2() {
        cout << "B's f2()" << endl;
    }
};

int main() {
    A* p;   // Pointer of base class type
    A o1;   // Object of base class
    B o2;   // Object of derived class

    p = &o2;   // Base class pointer pointing to derived class object

    // Direct call using object
    o2.f1();   // Output: B -> because it's calling B's version directly

    // Call using base class pointer
    p->f1();   // Output: B -> because f1 is virtual, late (runtime) binding occurs

    // Demonstrating early binding
    o1.f1();   // Output: A -> calling base class object method

    return 0;
}
