#include <iostream>
using namespace std;

class Demo {
public:
// Constructor
Demo() {
cout << "Constructor called" << endl;
}

// Destructor
~Demo() {
    cout << "Destructor called" << endl;
}

};

int main() {
Demo obj;  // object create

cout << "Inside main function" << endl;

return 0;  // object destroy → destructor call

}

