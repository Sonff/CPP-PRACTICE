#include <iostream>
using namespace std;

class Demo {
private:
int x;

public:
// Parameterized constructor
Demo(int a) {
x = a;
}

// Copy constructor
Demo(const Demo &obj) {
    x = obj.x;
}

void display() {
    cout << "Value of x = " << x << endl;
}

};

int main() {
Demo d1(10);   // normal object
Demo d2 = d1;  // copy constructor call

d1.display();
d2.display();

return 0;

}
