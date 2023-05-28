#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int x1, y1, x2, y2;
    cout << "Nhap toa do diem thu nhat: ";
    cin >> x1 >> y1;
    cout << "Nhap toa do diem thu hai: ";
    cin >> x2 >> y2;
    float d = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
    cout << "Khoang cach giua 2 diem la: " << d << endl;
}
