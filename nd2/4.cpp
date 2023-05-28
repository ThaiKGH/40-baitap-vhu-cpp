#include <iostream>
using namespace std;

int main() {
    int month;
    
    cout << "Nhap thang (1-12): " << endl;
    cin >> month;
    
    if(month < 1 || month > 12) {
        cout << "Thang khong hop le" << endl;
        return 0;
    }

    if (month >= 3 && month <= 5) {
        cout << "mua xuan" << endl;
    }
    else if (month >= 6 && month <= 8) {
        cout << "mua he" << endl;
    }
    else if (month >= 9 && month <= 11) {
        cout << "mua thu" << endl;
    }
    else {
        cout << "mua dong" << endl;
    }
    
    return 0;
}