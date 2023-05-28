#include <iostream>

using namespace std;

#include <iostream>
using namespace std;

void NhapSoNguyen(int &a, int &b) {
    cout << "Nhap tu so: ";
    cin >> a;
    cout << "Nhap mau so: ";
    cin >> b;
}

void TinhTong(int a1, int b1, int a2, int b2, int &t, int &m) {
    t = a1 * b2 + a2 * b1;
    m = b1 * b2;
}

void TinhTich(int a1, int b1, int a2, int b2, int &t, int &m) {
    t = a1 * a2;
    m = b1 * b2;
}

void Xuat(int t, int m) {
    cout << "Tong hai phan so la: " << t << "/" << m << endl;
}

int main() {
    int a1, b1, a2, b2, tong_tu, tong_mau, tich_tu, tich_mau;
    cout << "Nhap phan so thu nhat: " << endl;
    NhapSoNguyen(a1, b1);
    cout << "Nhap phan so thu hai: " << endl;
    NhapSoNguyen(a2, b2);
    TinhTong(a1, b1, a2, b2, tong_tu, tong_mau);
    TinhTich(a1, b1, a2, b2, tich_tu, tich_mau);
    Xuat(tong_tu, tong_mau);
    return 0;
}
