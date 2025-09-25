#include <cmath>
#include <iostream>
using namespace std;

int main() {
    double a;
    double b;
    double c;
    double d;
    double e;
    double f;
    cout << "Enter the numbers a, b, c in order, with ax^2+bx+c=0 format: ";
    cin >>a>>b>>c;
    if (a==0) {
        cout << "This is not a quadratic equation!, 'a' can not be 0";
    }
    else {
        d=(b*b)-(4*(a)*c);
        if(d<0) {
            cout<<"No solution"<<endl;
        }
        else {
            if (d==0) {
                e=(-b+sqrt(d))/(2*a);
                cout<<"x1="<<e<<endl;
            }
            else {
                e=(-b+sqrt(d))/(2*a);
                f=(-b-sqrt(d))/(2*a);
                cout<<"x1="<<e<<endl;
                cout<<"x2="<<f<<endl;
            }
        }
    }
    return 0;
}
