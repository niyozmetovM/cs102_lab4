#include <iostream>
using namespace std;

int main() {
    int a, b, c, larger;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;
    cout << "Enter the third number: ";
    cin >> c;

    if (a > b) {
        larger = a;
    } else {
        larger = b;
    }

    if (larger > c) {
        cout << larger << " is the largest";
    } else {
        cout << c << " is the largest";
    }

    cout << endl;
    return 0;
}
