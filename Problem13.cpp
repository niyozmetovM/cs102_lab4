#include <cmath>
#include <iostream>
using namespace std;

int main() {
    string a;
    cout << "Enter a Traffic Light condition: ";
    cin >> a;
    switch (a[0]) {
        case 'g':
            cout << "Go!";
            break;
        case 'y':
            cout << "Get ready!";
            break;
        case 'r':
            cout << "Stop!";
    }
    return 0;
}
