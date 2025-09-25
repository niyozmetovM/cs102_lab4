#include <iostream>
using namespace std;
int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;
    if (a>=0) {
        cout << "Positive";
        cout << endl;
    }
    else {
        cout << "Negative";
    }
    return 0;
}
