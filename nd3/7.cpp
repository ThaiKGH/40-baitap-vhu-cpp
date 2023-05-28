#include <iostream>
using namespace std;

int NhapSoNguyen(string msg) {
    int num;
    cout << msg;
    cin >> num;
    return num;
}

void TinhTich(int tu1, int mau1, int tu2, int mau2) {
    int tuTich = tu1 * tu2;
    int mauTich = mau1 * mau2;
    cout << "Tich hai phan so la: " << tuTich << "/" << mauTich << endl;
}

int main() {
    int tu1, mau1, tu2, mau2;
    tu1 = NhapSoNguyen("Nhap tu so thu nhat: ");
    mau1 = NhapSoNguyen("Nhap mau so thu nhat: ");
    tu2 = NhapSoNguyen("Nhap tu so thu hai: ");
    mau2 = NhapSoNguyen("Nhap mau so thu hai: ");
    TinhTich(tu1, mau1, tu2, mau2);
    return 0;
}
