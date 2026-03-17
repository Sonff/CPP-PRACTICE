#include <iostream>
using namespace std;

int main() {
    char ch[10];
    int n;

    cout << "Enter number of characters: ";
    cin >> n;

    cout << "Enter characters:\n";
    for(int i = 0; i < n; i++) {
        cin >> ch[i];
    }

    // 1 character combinations
    for(int i = 0; i < n; i++) {
        cout << ch[i] << endl;
    }

    // 2 character combinations (no repetition)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i != j) {
                cout << ch[i] << ch[j] << endl;
            }
        }
    }

    // 3 character combinations (no repetition)
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            for(int k = 0; k < n; k++) {
                if(i != j && j != k && i != k) {
                    cout << ch[i] << ch[j] << ch[k] << endl;
                }
            }
        }
    }

    return 0;
}