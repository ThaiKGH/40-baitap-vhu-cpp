#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int tongDuong = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            tongDuong += a[i];
        }
    }

    cout << "Tong cac so duong trong mang la: " << tongDuong << endl;

    return 0;
}
