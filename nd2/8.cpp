#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Nhap mot so nguyen: ";
    cin >> n;
    
    if (n > 0) {
        cout << n << " la so duong" << endl;
    }
    else if (n < 0) {
        cout << n << " la so am" << endl;
    }
    else {
        cout << n << " khong la so am cung khong la so duong" << endl;
    }
    
    if (n % 2 == 0) {
        cout << n << " la so chan" << endl;
    }
    else {
        cout << n << " la so le" << endl;
    }
    
    return 0;
}