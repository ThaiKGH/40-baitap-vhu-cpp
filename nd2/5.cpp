#include <iostream>
using namespace std;

int main() {
    char loaiPhong;
    int soNgayThue;
    float tienThuePhong;
    
    cout << "Nhap so ngay thue: ";
    cin >> soNgayThue;
    cout << "Nhap loai phong (A, B, C): ";
    cin >> loaiPhong;
    
    if (loaiPhong == 'A') {
        tienThuePhong = soNgayThue * 250000.0;
    }
    else if (loaiPhong == 'B') {
        tienThuePhong = soNgayThue * 200000.0;
    }
    else if (loaiPhong == 'C') {
        tienThuePhong = soNgayThue * 150000.0;
    }
    else {
        cout << "Loai phong khong hop le!" << endl;
        return 0;
    }
    
    cout << "Tien thue phong: " << tienThuePhong << " VND" << endl;
    
    return 0;
}