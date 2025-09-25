#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a;
    double b;
    int c;
    double d;
    cout << "Enter the weight and price for Package 1: ";
    cin >> a >> b;
    cout << "Enter the weight and price for Package 2: ";
    cin >> c >> d;
    if (a>0 and b>0 and c>0 and d>0) {
        if ((a/b)>(c/d)) {
            cout<<"Package 1 has a better price!"<<endl;
        }
        else {
            if ((a/b)<(c/d)) {
                cout<<"Package 2 has a better price!"<<endl;
            }
            else {
                cout<<"Two packages have the same price"<<endl;
            }
        }
    }
    else {
        cout<<"Enter a valid number!"<<endl;
    }

    return 0;
}
