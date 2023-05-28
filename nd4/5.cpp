#include <iostream>

using namespace std;

int main()
{
    int n;
    cout << "Nhap so phan tu cua mang: ";
    cin >> n;
    
    int arr[n];
    for(int i = 0; i < n; i++) {
        cout << "Nhap phan tu thu " << i+1 << ": ";
        cin >> arr[i];
    }
    
    int count = 0;
    for(int i = 0; i < n; i++) {
        if(arr[i] % 2 == 0) {
            count++;
        }
    }
    
    cout << "So luong phan tu chan trong mang la: " << count << endl;
    
    return 0;
}
