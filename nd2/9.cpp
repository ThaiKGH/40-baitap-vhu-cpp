#include <iostream>
using namespace std;

int main() {
    int SoGioLam;
    float DonGia, Luong;

    cout << "Nhap so gio lam: ";
    cin >> SoGioLam;

    if (SoGioLam <= 8) {
        DonGia = 200000;
    } else {
        DonGia = 250000;
    }

    Luong = SoGioLam * DonGia;

    cout << "Luong nhan vien la: " << Luong << endl;

    return 0;
}
