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

    int tich = 1;
    for(int i=0; i<n; i++)
    {
        tich *= mang[i];
    }

    cout << "Tich cua mang la: " << tich << endl;

    return 0;
}
