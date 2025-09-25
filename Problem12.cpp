#include <cmath>
#include <iostream>
using namespace std;

int main() {
    int a;
    string s;
    char b;
    char c;
    cout << "Enter a number: ";
    cin >> a;
    s=to_string(a);
    if (s.length()==3) {
        b=s[0];
        c=s[s.size()-1];
        if (b==c) {
            cout<<a<<" is a palindrome"<<endl;
        }
        else {
            cout<<a<<" is not a palindrome"<<endl;
        }
    }
    else {
        cout<<"Please enter a 3 digit number"<<endl;
    }
    return 0;
}
