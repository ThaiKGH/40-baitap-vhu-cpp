#include <iostream>
#include <cmath>

using namespace std;

void NhapSoThuc(float &x, float &y) {
    cout << "Nhap toa do (x,y): ";
    cin >> x >> y;
}

float TinhKhoangCach(float x1, float y1, float x2, float y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

void XuatKhoangCach(float x1, float y1, float x2, float y2, float khoangcach) {
    cout << "Khoang cach giua hai diem (" << x1 << "," << y1 << ") va (" << x2 << "," << y2 << ") la: " << khoangcach << endl;
}

int main() {
    float x1, y1, x2, y2;
    NhapSoThuc(x1, y1);
    NhapSoThuc(x2, y2);
    float khoangcach = TinhKhoangCach(x1, y1, x2, y2);
    XuatKhoangCach(x1, y1, x2, y2, khoangcach);
    return 0;
}
