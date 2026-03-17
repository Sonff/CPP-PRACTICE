#include <iostream>
using namespace std;

class Demo {
public:
int x;


void setData(int a) {
    x = a;
}

// Object as argument
void add(Demo d1, Demo d2) {
    x = d1.x + d2.x;
}

void display() {
    cout << "Sum = " << x;
}


};

int main() {
Demo obj1, obj2, result;


obj1.setData(10);
obj2.setData(20);

result.add(obj1, obj2); // objects passed as arguments
result.display();

return 0;


}
