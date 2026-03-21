#include <iostream>
using namespace std;

// Base class
class Animal {
public:
void eat() {
cout << "Animal eats" << endl;
}
};

// Derived class
class Dog : public Animal {
public:
void bark() {
cout << "Dog barks" << endl;
}
};

int main() {
Dog d;

d.eat();   // inherited from Animal
d.bark();  // own function

return 0;

}
