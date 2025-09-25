#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int x;
    int y;
    int z;
    cout << "Enter the coordinates x and y: ";
    cin >> x >> y;
    z=(x*x)+(y*y);
    if (sqrt(z)>10) {
        cout<<"Point"<<"("<<x<<","<<y<<") is not in circle"<<endl;
    }
    else {
        cout<<"Point"<<"("<<x<<","<<y<<") is in circle"<<endl;
    }

    return 0;
}
