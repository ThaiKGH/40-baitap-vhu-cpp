#include <iostream>
using namespace std;

int main() {
    float a, b;
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    float chuvi = 2 * (a + b);
    float dientich = 1 / 2 * a * b;
    cout << "Chu vi hinh thoi la: " << chuvi << endl;
    cout << "Dien tich hinh thoi la: " << dientich << endl;
}

