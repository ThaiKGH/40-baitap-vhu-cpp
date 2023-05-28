#include <iostream>

using namespace std;

int main() {
    int Diemgiuaky, Diemcuoiky, Diemtrungbinh;

    cout << "Nhap diem giua ky: ";
    cin >> Diemgiuaky;
    cout << "Nhap diem cuoi ky: ";

    Diemtrungbinh = ((Diemgiuaky * 4 ) + (Diemcuoiky * 6)) / 10;

    cout << "Diem trung binh: " << Diemtrungbinh << endl;

    cout << "Xep loai: ";
    
    if(Diemtrungbinh >= 9) {
        cout << "Gioi";
    } 
    else if(Diemtrungbinh < 9 && Diemtrungbinh >= 7) {
        cout << "Kha";
    }
    else if (Diemtrungbinh < 7 && Diemtrungbinh >= 5) {
        cout << "Trung binh";
    }
    else {
        cout << "Yeu";
    }

}