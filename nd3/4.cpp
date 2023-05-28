#include <iostream>
#include <string>
using namespace std;

int NhapSoNguyen() {
    int n;
    while ( true ) {
        cout << "Nhap so luong: ";
        cin >> n;
        if (n > 0) {
            break;
        }
        cout << "So luong phai > 0. Xin nhap lai." << endl;
    }
    return n;
}

float NhapSoThuc() {
    float f;
    cout << "Nhap don gia: ";
    cin >> f;
    while ( true ) {
        if (f > 0) {
            break;
        }
        cout << "Don gia phai > 0. Xin nhap lai." << endl;
        cout << "Nhap don gia: ";
        cin >> f;
    }
    return f;
}

float TinhThanhTien(int soluong, float dongia) {
    if (soluong > 50) {
        return soluong * dongia * 0.85;
    } else {
        return soluong * dongia;
    }
}

void XuatKetQua(string tenkhachhang, float thanhtien) {
    cout << "Ten khach hang: " << tenkhachhang << endl;
    cout << "Thanh tien: " << thanhtien << endl;
}

int main() {
    string tenkhachhang;
    int soluong;
    float dongia, thanhtien;

    cout << "Nhap ten khach hang: ";
    getline(cin, tenkhachhang);

    soluong = NhapSoNguyen();
    dongia = NhapSoThuc();

    thanhtien = TinhThanhTien(soluong, dongia);

    XuatKetQua(tenkhachhang, thanhtien);

    return 0;
}