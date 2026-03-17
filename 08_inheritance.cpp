#include <iostream>
using namespace std;

// Base class
class A {
public:
void showA() {
cout << "This is Class A" << endl;
}
};

// Derived class from A
class B : public A {
public:
void showB() {
cout << "This is Class B" << endl;
}
};

// Derived class from B
class C : public B {
public:
void showC() {
cout << "This is Class C" << endl;
}
};

int main() {
C obj;

obj.showA(); // from class A
obj.showB(); // from class B
obj.showC(); // from class C

return 0;

}
