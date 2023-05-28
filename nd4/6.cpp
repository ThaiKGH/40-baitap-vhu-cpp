#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang (n >= 4): ";
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> a[i];
    }

    int dem_le = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] % 2 == 1) {
            dem_le++;
        }
    }

    cout << "So luong phan tu le trong mang la: " << dem_le << endl;

    return 0;
}
