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
    int tu3 = tu1 * mau2 + tu2 * mau1;
    int mau3 = mau1 * mau2;
    cout << "Tong 2 phan so la: " << tu3 << "/" << mau3 << endl;
    return 0;
}