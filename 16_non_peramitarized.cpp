#include <iostream>
using namespace std;

class Demo {
public:
// Non-parameterized constructor
Demo() {
cout << "Constructor is called!" << endl;
}

void display() {
    cout << "This is a simple function";
}

};

int main() {
Demo obj; // constructor automatically call hoga

obj.display();

return 0;

}
