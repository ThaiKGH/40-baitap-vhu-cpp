#include <iostream>

using namespace std;

float TinhDienTich(float a, float b) {
    return a * b;
}

float TinhChuVi(float a, float b) {
    return (a + b) * 2;
}

int main() {
    float a, b;
    cout << "Nhap canh a: ";
    cin >> a;
    cout << "Nhap canh b: ";
    cin >> b;
    float chuvi = TinhChuVi(a, b);
    float dientich = TinhDienTich(a, b);
    cout << "Chu vi hinh chu nhat la: " << chuvi << endl;
    cout << "Dien tich hinh chu nhat la: " << dientich << endl;

}