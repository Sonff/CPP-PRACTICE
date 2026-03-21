#include <iostream>
using namespace std;

// 1. No argument, No return value
void add1() {
int a, b;
cout << "Enter two numbers: ";
cin >> a >> b;
cout << "Sum = " << a + b << endl;
}

// 2. With argument, No return value
void add2(int a, int b) {
cout << "Sum = " << a + b << endl;
}

// 3. No argument, With return value
int add3() {
int a, b;
cout << "Enter two numbers: ";
cin >> a >> b;
return a + b;
}

// 4. With argument, With return value
int add4(int a, int b) {
return a + b;
}

int main() {

// 1. No argument, No return
add1();

// 2. With argument, No return
add2(10, 20);

// 3. No argument, With return
int result1 = add3();
cout << "Sum = " << result1 << endl;

// 4. With argument, With return
int result2 = add4(30, 40);
cout << "Sum = " << result2 << endl;

return 0;

}
