#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter today's number: ";
    cin >> a;
    int b;
    cout << "Enter the duration: ";
    cin >> b;
    int c;
    string today;
    string futureday;
    switch (a) {
        case 1:
            today="Monday";
            break;
        case 2:
            today="Tuesday";
            break;
        case 3:
            today="Wednesday";
            break;
        case 4:
            today="Thursday";
            break;
        case 5:
            today="Friday";
            break;
        case 6:
            today="Saturday";
            break;
        case 0:
            today="Sunday";
            break;
        default:
            cout << "There is no such weekday" << endl;
            return 0;
    }
    c=(a+b)%7;
    switch (c) {
        case 1:
            futureday="Monday";
            break;
        case 2:
            futureday="Tuesday";
            break;
        case 3:
            futureday="Wednesday";
            break;
        case 4:
            futureday="Thursday";
            break;
        case 5:
            futureday="Friday";
            break;
        case 6:
            futureday="Saturday";
            break;
        case 0:
            futureday="Sunday";
            break;
    }
    cout << "Today is " << today << " and the future day is " << futureday << endl;
    return 0;
}
