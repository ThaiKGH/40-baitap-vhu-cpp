#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int a[n];
    cout << "Nhap cac phan tu cua mang: ";
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int min = a[0];
    for(int i = 1; i < n; i++) {
        if(a[i] < min) {
            min = a[i];
        }
    }

    cout << "So nho nhat trong mang la: " << min << endl;

    return 0;
}
