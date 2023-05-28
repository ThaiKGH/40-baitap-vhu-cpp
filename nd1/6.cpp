#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b, c, p, s;
    cout << "Nhap canh a, b, c: ";
    cin >> a >> b >> c;
    p = a + b + c;
    s = sqrt(p * (p - a) * (p - b) * (p - c));
    cout << "Chu vi: " << p << endl;
    cout << "Dien tich: " << s << endl;
    return 0;
}