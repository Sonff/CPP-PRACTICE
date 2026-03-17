#include <iostream>
#include <sstream>
using namespace std;

int main() {
string name, word;
string result = "";

cout << "Enter full name: ";
getline(cin, name);

stringstream ss(name);

string lastWord;
int count = 0;

// Count total words
while (ss >> word) {
    count++;
    lastWord = word;
}

// Reset stream
stringstream ss2(name);

int i = 0;
while (ss2 >> word) {
    i++;

    if (i < count) {
        result += word[0];
        result += ".";
    } else {
        result += word; // last name full
    }
}

cout << "Abbreviated name: " << result;

return 0;

}
