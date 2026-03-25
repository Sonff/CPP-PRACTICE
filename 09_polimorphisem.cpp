#include <iostream>
using namespace std;

// Compile-time Polymorphism (Function Overloading)
class Demo {
public:
int add(int a, int b) {
return a + b;
}
// daily update
int add(int a, int b, int c) {
    return a + b + c;
}// daily update

};

// Run-time Polymorphism (Function Overriding)
class Base {
public:
virtual void show() {
cout << "Base class function" << endl;
}
};

class Derived : public Base {
public:
void show() {
cout << "Derived class function" << endl;
}
};

int main() {
Demo d;
// daily update
// Compile-time
cout << "Sum = " << d.add(2, 3) << endl;
cout << "Sum = " << d.add(2, 3, 4) << endl;

// Run-time
Base* b;
Derived obj;
b = &obj;

b->show();

return 0;// daily update

}
