#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;

    int mang[n];
    
    for(int i=0; i<n; i++)
    {
        cout << "Nhap phan tu thu " << i << ": ";
        cin >> mang[i];
    }

    int tong = 0;
    for(int i=0; i<n; i++)
    {
        tong += mang[i];
    }

    cout << "Tong cua mang la: " << tong << endl;

    return 0;
}
