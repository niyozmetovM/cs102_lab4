#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;
    if (ch >= 'a' && ch <= 'z') {
        cout << "Lowercase alphabet";
        cout << endl;
    }
    else {
        if (ch >= 'A' && ch <= 'Z') {
            cout << "Uppercase alphabet";
            cout << endl;
        }
        else {
            cout << "It is not an alphabet";
            cout << endl;
        }
    }


    return 0;
}
