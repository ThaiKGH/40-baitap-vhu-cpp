#include <iostream>
using namespace std;

int main() {
    int length, width;

    cout << "Nhap chieu dai: ";
    cin >> length;
    cout << "Nhap chieu rong: ";
    cin >> width;
    int dienTich = length * width;
    int sogach = dienTich / 0.9;
    cout << "So gach can dung la: " << sogach << endl;
}