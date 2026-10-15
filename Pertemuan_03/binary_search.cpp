#include <iostream>
using namespace std;

int main() {
    int angka[] = {10, 20, 30, 40, 50, 60, 70};
    int n = 7;
    int target;

    cout << "Masukkan angka yang dicari: ";
    cin >> target;

    int kiri = 0; //ini adalah batas awal pencarian
    int kanan = n - 1; // ini adalah batas akhir pencarian
    int posisi = -1; // menunjukkan index elemen yang dicari, jika tidak ditemukan maka tetap -1

    while (kiri <= kanan) {
        int tengah = kiri + (kanan - kiri) / 2;

        if (angka[tengah] == target) {
            posisi = tengah;
            break;
        } else if (angka[tengah] < target) {
            kiri = tengah + 1;
        } else {
            kanan = tengah - 1;
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