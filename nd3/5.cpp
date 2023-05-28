#include <iostream>
using namespace std;

double NhapCanh() {
    double canh;
    cout << "Nhap do dai canh: ";
    cin >> canh;
    return canh;
}

double TinhChuVi(double dayLon, double dayNho, double canhBen) {
    return dayLon + dayNho + canhBen * 2;
}

double TinhDienTich(double dayLon, double dayNho, double cao) {
    return (dayLon + dayNho) / 2 * cao;
}

void Xuat(double chuVi, double dienTich) {
    cout << "Chu vi: " << chuVi << endl;
    cout << "Dien tich: " << dienTich << endl;
}

int main() {
    double dayLon, dayNho, canhBen, cao;
    cout << "Nhap do dai day lon: ";
    dayLon = NhapCanh();
    cout << "Nhap do dai day nho: ";
    dayNho = NhapCanh();
    cout << "Nhap do dai canh ben: ";
    canhBen = NhapCanh();
    cout << "Nhap do dai chieu cao: ";
    cin >> cao;

    double chuVi = TinhChuVi(dayLon, dayNho, canhBen);
    double dienTich = TinhDienTich(dayLon, dayNho, cao);

    Xuat(chuVi, dienTich);

    return 0;
}
