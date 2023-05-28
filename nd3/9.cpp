#include <iostream>

using namespace std;

int NhapSoNguyen() {
    int n;
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    return n;
}

int Xuat(int k, int n, int cnk) {
    cout << "To hop chap " << k << " cua " << n << " la: " << cnk << endl;
}

int GiaiThua(int n) {
    int gt = 1;
    for (int i = 1; i <= n; i++) {
        gt *= i;
    }
    return gt;
}

int main() {
    int n = NhapSoNguyen();
    int k = NhapSoNguyen();
    int cnk = GiaiThua(n) / (GiaiThua(k) * GiaiThua(n - k));
    Xuat(k, n, cnk);
    return 0;
}