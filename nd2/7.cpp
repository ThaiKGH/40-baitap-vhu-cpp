#include <iostream>
using namespace std;

int main() {
    float soKm, tienTaxi;
    
    cout << "Nhap so km da di duoc: ";
    cin >> soKm;
    
    if (soKm <= 1) {
        tienTaxi = soKm * 5000.0;
    }
    else if (soKm > 1 && soKm <= 5) {
        tienTaxi = 1 * 5000.0 + (soKm - 1) * 4500.0;
    }
    else {
        tienTaxi = 1 * 5000.0 + 4 * 4500.0 + (soKm - 5) * 3500.0;
    }
    
    cout << "Tien taxi: " << tienTaxi << " VND" << endl;
    
    return 0;
}
