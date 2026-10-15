#include <iostream>
using namespace std;

int main() {
    int angka[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int target;

    cout << "Masukkan angka yang dicari: ";
    cin >> target;

    int kiri = 0;
    int kanan = n - 1;
    int posisi = -1;

    while (kiri <= kanan &&
           target >= angka[kiri] &&
           target <= angka[kanan]) {

        if (angka[kiri] == angka[kanan]) {
            if (angka[kiri] == target) {
                posisi = kiri;
            }
            break;
        }

        int perkiraan = kiri +
            (static_cast<long long>(target - angka[kiri])
            * (kanan - kiri))
            / (angka[kanan] - angka[kiri]);

        if (angka[perkiraan] == target) {
            posisi = perkiraan;
            break;
        } else if (angka[perkiraan] < target) {
            kiri = perkiraan + 1;
        } else {
            kanan = perkiraan - 1;
        }
    }

    if (posisi != -1) {
        cout << "Data ditemukan pada index "
             << posisi << endl;
    } else {
        cout << "Data tidak ditemukan." << endl;
    }

    return 0;
}