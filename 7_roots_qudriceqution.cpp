#include <iostream>
#include <cmath>
using namespace std;

int main() {
float a, b, c, D, root1, root2;

cout << "Enter values of a, b, c: ";
cin >> a >> b >> c;

D = b*b - 4*a*c;

if (D > 0) {
    root1 = (-b + sqrt(D)) / (2*a);
    root2 = (-b - sqrt(D)) / (2*a);
    cout << "Roots are real and different:\n";
    cout << "Root1 = " << root1 << endl;
    cout << "Root2 = " << root2 << endl;
}
else if (D == 0) {
    root1 = -b / (2*a);
    cout << "Roots are real and equal:\n";
    cout << "Root = " << root1 << endl;
}
else {
    cout << "Roots are complex (imaginary)";
}

return 0;

}
