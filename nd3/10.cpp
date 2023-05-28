#include <iostream>

using namespace std;

float NhapSoThuc() {
    float x;
    cin >> x;
    return x;
}

float TinhChuVi(float canh) {
    return canh * 4;
}

float TinhDienTich(float canh) {
    return 0.5 * canh * canh;
}

void Xuat(float chuVi, float dienTich) {
    cout << "Chu vi hinh thoi la: " << chuVi << endl;
    cout << "Dien tich hinh thoi la: " << dienTich << endl;
}

int main() {
    cout << "Nhap canh hinh thoi: ";
    float canh = NhapSoThuc();
    float chuVi = TinhChuVi(canh);
    float dienTich = TinhDienTich(canh);
    Xuat(chuVi, dienTich);
    return 0;
}