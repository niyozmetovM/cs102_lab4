#include <iostream>
using namespace std;

int main() {
    int s;
    cout << "Enter the Speed: ";
    cin >> s;
    if (s<20) {
        cout << "too slow";
        cout << endl;
    }
    else {
        if (s>80) {
            cout << "too fast";
            cout << endl;
        }
        else {
            cout << "just right";
            cout << endl;
        }
    }


    return 0;
}
