#include <iostream>

using namespace std;

int main() {
    int diemgiuaky, diemcuoiky, diemtrungbinh;

    cout << "Nhap diem giua ky: ";
    cin >> diemgiuaky;
    cout << "Nhap diem cuoi ky: ";
    cin >> diemcuoiky;
    diemtrungbinh = ((diemgiuaky * 4 ) + (diemcuoiky * 6)) / 10;
    cout << "Diem trung binh: " << diemtrungbinh << endl;
}