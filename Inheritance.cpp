#include <iostream>
using namespace std;

class A {
private:
    int a;
protected:
    void setValue(int k) {
        a = k;
    }
};

class B : public A { // Public inheritance
public:
    void setdata(int x) {
        setValue(x); // Allowed: setValue remains protected
    }
};

class C : private A { // Private inheritance
public:
    void setdata(int x) {
        setValue(x); // Allowed: setValue becomes private in C, still accessible within C
    }
};

class D : protected A { // Protected inheritance
public:
    void setdata(int x) {
        setValue(x); // Allowed: setValue becomes protected in D, accessible within D
    }
};

int main() {
    B objB;
    objB.setdata(10);     // Works - setdata is public

    C objC;
    objC.setdata(20);     //  Works - setdata is public in C

    D objD;
    objD.setdata(30);     //  Works - setdata is public in D

    //  objB.setValue(4); // Error: protected in A, not accessible from outside
    //  objC.setValue(4); // Error: private in C due to private inheritance
    //  objD.setValue(4); // Error: protected in D due to protected inheritance

    //  objC.a = 5;       // Error: 'a' is private in A
    //  objD.setValue(5); // Error: still protected in D

    return 0;
}
