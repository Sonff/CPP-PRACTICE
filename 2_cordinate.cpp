#include <iostream>
using namespace std;

class Point {
private:
int x, y;

public:
void setPoint(int a, int b) {
x = a;
y = b;
}
void getPoint() {
    cout << "Coordinates are: (" << x << ", " << y << ")";
}
};

int main() {
Point p;
int x, y;

cout << "Enter x: ";
cin >> x;

cout << "Enter y: ";
cin >> y;

p.setPoint(x, y);
p.getPoint();

return 0;

}
