#include <iostream>
using namespace std;

class Demo {
private:
int x, y;

public:
// Parameterized Constructor
Demo(int a, int b) {
x = a;
y = b;
}

void display() {
    cout << "x = " << x << ", y = " << y;
}

};

int main() {
Demo obj(10, 20); // values pass ki gayi constructor me

obj.display();

return 0;

}
