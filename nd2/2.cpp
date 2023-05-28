#include <iostream>

using namespace std;

int main() {
    cout << "Cac so le tu 5 den 96 la: ";
    for (int i = 5; i <= 96; i++) {
        if (i % 2 == 1) {
            cout << i << " ";
        }
    }
    return 0;
}