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

    int count = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > 0) {
            count++;
        }
    }

    cout << "So nguyen duong trong mang: " << count << endl;

    return 0;
}
