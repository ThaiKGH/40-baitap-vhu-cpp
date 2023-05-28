#include <iostream>

using namespace std;

int main() {
    int tu1, mau1, tu2, mau2;
    cout << "Nhap tu so thu nhat: ";
    cin >> tu1;
    cout << "Nhap mau so thu nhat: ";
    cin >> mau1;
    cout << "Nhap tu so thu hai: ";
    cin >> tu2;
    cout << "Nhap mau so thu hai: ";
    cin >> mau2;
    cout << "Tich hai phan so la: " << tu1 * tu2 << "/" << mau1 * mau2 << endl;
    return 0;
}