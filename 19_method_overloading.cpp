#include <iostream>
using namespace std;

class Demo {
public:
// Method 1
int multiply(int a, int b) {
return a * b;
}

// Method 2 (overloaded)
int multiply(int a, int b, int c) {
    return a * b * c;
}

// Method 3 (overloaded with different data type)
float multiply(float a, float b) {
    return a * b;
}

};

int main() {
Demo obj;

cout << "Multiplication of 2 integers: " << obj.multiply(2, 3) << endl;
cout << "Multiplication of 3 integers: " << obj.multiply(2, 3, 4) << endl;
cout << "Multiplication of 2 floats: " << obj.multiply(2.5f, 3.0f) << endl;

return 0;

}
