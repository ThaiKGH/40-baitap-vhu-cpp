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

    int max = mang[0];
    for(int i=1; i<n; i++)
    {
        if(mang[i] > max)
        {
            max = mang[i];
        }
    }

    cout << "So lon nhat trong mang la: " << max << endl;

    return 0;
}
