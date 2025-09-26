#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter your mark: ";
    cin >> a;
    if (a<=100 and a>=0) {
        switch (a/10) {
            case 10:
            case 9:
                cout << "A" << endl;
                break;
            case 8:
                cout << "B" << endl;
                break;
            case 7:
                cout << "C" << endl;
                break;
            case 6:
                cout << "D" << endl;
                break;
            default:
                cout << "F" << endl;
                break;
        }
    }
    else {
        cout << "Invalid Mark" << endl;
    }

    return 0;
}
