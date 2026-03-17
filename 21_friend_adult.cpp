#include <iostream>
using namespace std;

class Person {
private:
int age;

public:
void setAge(int a) {
age = a;
}

// Friend function declaration
friend void checkAdult(Person p);

};

// Friend function definition
void checkAdult(Person p) {
if (p.age >= 18) {
cout << "Person is Adult";
} else {
cout << "Person is Not Adult";
}
}

int main() {
Person p;
int age;

cout << "Enter age: ";
cin >> age;

p.setAge(age);

checkAdult(p); // friend function call

return 0;

}
