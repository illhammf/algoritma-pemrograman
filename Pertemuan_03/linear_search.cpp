#include <iostream>
using namespace std;

int main() {
    int num[] = {12, 9, 37, 86, 2, 17, 5};
    int x;
    int n = 7;
    int i;
    bool ditemukan = false;

    cout << "Isi array: ";

    for (i = 0; i < n; i++) {
        cout << num[i] << " ";
    }

    cout << "\nMasukkan angka yang ingin dicari: ";
    cin >> x;

    for (i = 0; i < n; i++) {
        if (num[i] == x) {
            cout << "Angka ditemukan pada index "
                 << i << endl;

            ditemukan = true;
            break;
        }
    }

    if (!ditemukan) {
        cout << "Angka tidak ditemukan." << endl;
    }

    return 0;
}