#include <iostream>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Nhap so phan tu cua mang (>=4): ";
    cin >> n;

    int a[n];
    cout << "Nhap cac phan tu cua mang:" << endl;
    for(int i = 0; i < n; i++)
    {
        cout << "a[" << i << "] = ";
        cin >> a[i];
    }

    cout << "Cac so am trong mang la: ";
    for(int i = 0; i < n; i++)
    {
        if(a[i] < 0)
        {
            cout << a[i] << " ";
            count++;
        }
    }

    cout << "\nTong so luong cac so am trong mang la: " << count << endl;
}
