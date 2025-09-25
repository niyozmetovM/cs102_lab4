#include <iostream>
using namespace std;

int main() {
    int a;
    int b;
    int c;
    cout << "Enter the first angle: ";
    cin >> a;
    cout << "Enter the second angle: ";
    cin >> b;
    cout << "Enter the third angle: ";
    cin >> c;

    if (a+b+c==180) {
        cout << "The triangle is valid" << endl;
            }
        else {
            cout << "The triangle is invalid" << endl;
        }

    return 0;
}
