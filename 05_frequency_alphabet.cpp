#include <iostream>
using namespace std;

int main() {
char ch;

cout << "Enter an alphabet: ";
cin >> ch;

// Convert uppercase to lowercase
if (ch >= 'A' && ch <= 'Z') {
    ch = ch + 32;
}

if (ch >= 'a' && ch <= 'z') {
    int position = ch - 'a' + 1;
    cout << "Position = " << position;
} else {
    cout << "Invalid input!";
}

return 0;

}
