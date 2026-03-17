#include <iostream>
using namespace std;

// Compile-time Polymorphism (Function Overloading)
class Add {
public:
int sum(int a, int b) {
return a + b;
}

int sum(int a, int b, int c) {
    return a + b + c;
}

};

// Run-time Polymorphism (Function Overriding)
class Base {
public:
virtual void show() {
cout << "This is Base class" << endl;
}
};

class Derived : public Base {
public:
void show() {
cout << "This is Derived class" << endl;
}
};

int main() {

// Compile-time Polymorphism
Add obj;
cout << "Sum of 2 numbers: " << obj.sum(2, 3) << endl;
cout << "Sum of 3 numbers: " << obj.sum(2, 3, 4) << endl;

// Run-time Polymorphism
Base* b;
Derived d;
b = &d;

b->show();

return 0;

}
