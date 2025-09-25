#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter the first number: ";
    cin >> a;
    cout << "Enter the second number: ";
    cin >> b;

    if (a%b==0) {
        cout << a << " is divisible by " << b;
        cout << endl;
    }
    else {
        cout << a << " is not divisible by " << b;
        cout << endl;
    }


    return 0;
}
