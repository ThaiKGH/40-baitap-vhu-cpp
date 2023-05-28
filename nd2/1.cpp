#include <iostream>

using namespace std;

int main() {
    int tich = 1;
    for (int i = 1; i <= 50; i++) {
        tich *= i;
    }
    cout << "Tich: " << tich << endl;
    return 0;
}