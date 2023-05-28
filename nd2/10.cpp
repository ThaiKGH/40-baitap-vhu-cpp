#include <iostream>
using namespace std;

int main() {
    float DiemGK, DiemCK, DiemTB;

    cout << "Nhap diem giua ky: ";
    cin >> DiemGK;

    cout << "Nhap diem cuoi ky: ";
    cin >> DiemCK;

    DiemTB = (DiemGK * 4 + DiemCK * 6) / 10;

    cout << "Diem trung binh la: " << DiemTB << endl;

    if (DiemTB >= 4) {
        cout << "Sinh vien dau mon hoc!" << endl;
    } else {
        cout << "Sinh vien rot mon hoc!" << endl;
    }

    return 0;
}
