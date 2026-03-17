#include <iostream>
using namespace std;

class Demo {
public:
int x;

// Operator overloading for +
Demo operator + (Demo d) {
    Demo temp;
    temp.x = x + d.x;
    return temp;
}

};

int main() {
Demo d1, d2, d3;

d1.x = 10;
d2.x = 20;

d3 = d1 + d2; // overloaded operator

cout << "Sum = " << d3.x;

return 0;

}
