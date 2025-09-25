#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a>=0) {
        if (a%2==0) {
            cout << "The number is positive and even";
            cout << endl;
        }
        else {
            cout << "The number is positive and odd";
        }

    }
    else {
        if (a%2==0) {
            cout << "The number is negative and even";
            cout << endl;
        }
        else {
            cout << "The number is negative and odd";
        }

    }
    return 0;
}
