#include <iostream>
using namespace std;

int main() {
    int a, b;

    cout << "Enter two numbers: ";
    cin >> a >> b;

    cout << "add = " << a + b << endl;
    cout << "sub = " << a - b << endl;
    cout << "mul = " << a * b << endl;
    cout << "div = " << (float)a / b << endl;

    return 0;
}