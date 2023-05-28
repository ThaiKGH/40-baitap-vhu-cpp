#include <iostream>
using namespace std;

float NhapSoThuc() {
    float x;
    cout << "Nhap so thuc: ";
    cin >> x;
    return x;
}

float TinhChuVi(float dai, float rong) {
    return (dai + rong) * 2;
}

void Xuat(float chuVi) {
    cout << "Chu vi hinh chu nhat la: " << chuVi << endl;
}

int main() {
    float dai = NhapSoThuc();
    float rong = NhapSoThuc();
    float chuVi = TinhChuVi(dai, rong);
    Xuat(chuVi);
    return 0;
}
