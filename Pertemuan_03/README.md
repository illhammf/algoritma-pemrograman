# Pertemuan 3 — Algoritma Pencarian (Search Algorithm)

Selamat datang di materi tambahan Algoritma dan Pemrograman!

Pada pertemuan ini, kita akan mempelajari **algoritma pencarian (*search algorithm*)**, yaitu cara menemukan data tertentu di antara sekumpulan data.

Bayangkan kamu memiliki daftar nilai mahasiswa dan ingin mencari nilai milik salah satu mahasiswa. Bagaimana cara menemukan data tersebut? Apakah kita harus memeriksa semua data satu per satu, atau ada cara yang lebih cepat?

Nah, itulah salah satu hal yang akan kita pelajari pada pertemuan ini.

Materi disusun berdasarkan PPT perkuliahan, dilengkapi penjelasan sederhana, simulasi pencarian, dan contoh kode C++ untuk Linear Search.

## 📚 Daftar Isi

1. [Apa Itu Algoritma Pencarian?](#1-apa-itu-algoritma-pencarian)
2. [Bagaimana Algoritma Pencarian Bekerja?](#2-bagaimana-algoritma-pencarian-bekerja)
3. [Mengenal Array](#3-mengenal-array)
4. [Jenis-Jenis Algoritma Pencarian](#4-jenis-jenis-algoritma-pencarian)
5. [Mengenal Linear Search](#5-mengenal-linear-search)
6. [Contoh Kode C++ Linear Search](#6-contoh-kode-c-linear-search)
7. [Memahami Kode Program](#7-memahami-kode-program)
8. [Simulasi Linear Search](#8-simulasi-linear-search)
9. [Kesimpulan](#9-kesimpulan)
10. [Latihan Pemahaman](#10-latihan-pemahaman)

---

## 1. Apa Itu Algoritma Pencarian?

**Algoritma pencarian adalah serangkaian langkah sistematis untuk menemukan elemen tertentu dalam suatu kumpulan data.**

Kumpulan data tersebut bisa berupa daftar angka, daftar nama, data mahasiswa, atau data lain yang tersimpan dalam struktur data.

Contohnya, kita memiliki daftar angka berikut:

`12, 9, 37, 86, 2, 17, 5`

Kita ingin mencari angka `17`.

Algoritma pencarian akan memeriksa data berdasarkan metode tertentu untuk menentukan apakah angka tersebut tersedia dan di posisi mana angka itu ditemukan.

Hasil pencarian memiliki dua kemungkinan:

- **Successful search:** data yang dicari berhasil ditemukan.
- **Unsuccessful search:** data yang dicari tidak ditemukan.

Contoh:

- Mencari angka `17` → ditemukan.
- Mencari angka `100` → tidak ditemukan.

Algoritma pencarian penting karena data yang perlu dicari bisa berjumlah sedikit maupun sangat banyak. Pemilihan metode pencarian dapat memengaruhi efisiensi proses tersebut.

---

## 2. Bagaimana Algoritma Pencarian Bekerja?

Secara umum, algoritma pencarian memiliki tiga tahapan utama.

### 2.1. Menerima Kunci Pencarian

Algoritma menerima nilai yang ingin ditemukan. Nilai ini sering disebut *search key* atau kunci pencarian.

Misalnya, kita ingin mencari angka `17`. Maka, angka `17` menjadi kunci pencarian.

### 2.2. Membandingkan Data

Algoritma membandingkan data yang tersedia dengan kunci pencarian berdasarkan metode yang digunakan.

Pada Linear Search, misalnya, data diperiksa satu per satu dari awal.

### 2.3. Menentukan Hasil Pencarian

Setelah proses pencarian dilakukan, algoritma menentukan apakah data berhasil ditemukan.

Jika ditemukan, algoritma dapat memberikan posisi data tersebut. Jika tidak, algoritma memberikan informasi bahwa data tidak tersedia.

Secara sederhana, alurnya adalah:

**Masukkan data yang dicari → Periksa data → Tentukan hasil pencarian**

---

## 3. Mengenal Array

Sebelum mempelajari kode Linear Search, kita perlu mengenal salah satu struktur data yang digunakan pada contoh di PPT, yaitu **array atau larik**.

Array adalah struktur data yang dapat menyimpan sejumlah elemen dengan tipe data yang sama dalam satu nama variabel.

Misalnya:

```cpp
int angka[5] = {10, 20, 30, 40, 50};
```

Kode tersebut membuat array bernama `angka` yang menyimpan lima bilangan bulat.

### 3.1. Apa Itu Elemen dan Index?

Setiap nilai yang tersimpan dalam array disebut **elemen**. Untuk mengakses elemen tersebut, kita menggunakan **index**, yaitu nomor posisi elemen dalam array.

Dalam C++, index array dimulai dari `0`, bukan `1`.

Perhatikan tabel berikut.

| Index | Nilai |
|---:|---:|
| 0 | 10 |
| 1 | 20 |
| 2 | 30 |
| 3 | 40 |
| 4 | 50 |

Artinya:

- `angka[0]` menghasilkan `10`.
- `angka[2]` menghasilkan `30`.
- `angka[4]` menghasilkan `50`.

Jika sebuah array memiliki 5 elemen, index-nya dimulai dari `0` dan berakhir pada `4`.

**Rumus penting:**

Index terakhir = jumlah elemen − 1.

Konsep index ini sangat penting karena algoritma pencarian harus mengetahui posisi setiap elemen yang diperiksa.

---

## 4. Jenis-Jenis Algoritma Pencarian

Dalam PPT pertemuan ini, terdapat beberapa metode pencarian yang perlu dikenal.

### 4.1. Linear Search (Sequential Search)

Linear Search adalah metode pencarian yang memeriksa elemen satu per satu secara berurutan, mulai dari elemen pertama.

Pencarian berhenti jika data ditemukan atau seluruh elemen sudah diperiksa.

Contoh:

Data: `12, 9, 37, 86, 2, 17, 5`

Target: `17`

Pemeriksaan dilakukan sebagai berikut:

1. Periksa `12` → bukan target.
2. Periksa `9` → bukan target.
3. Periksa `37` → bukan target.
4. Periksa `86` → bukan target.
5. Periksa `2` → bukan target.
6. Periksa `17` → target ditemukan.

Linear Search mudah dipahami dan dapat digunakan pada data yang belum terurut maupun yang sudah terurut.

Metode ini cocok untuk data berukuran kecil atau ketika kita memerlukan metode pencarian yang sederhana.

### 4.2. Binary Search

Binary Search adalah metode pencarian yang mempersempit ruang pencarian dengan membaginya menjadi dua bagian pada setiap langkah.

Metode ini memeriksa elemen tengah, lalu menentukan apakah pencarian dilanjutkan ke bagian kiri atau kanan.

**Syarat penting:** data harus sudah terurut berdasarkan aturan yang digunakan.

Contoh:

Data terurut: `10, 20, 30, 40, 50, 60, 70`

Target: `60`

1. Periksa nilai tengah, yaitu `40`.
2. Karena `60` lebih besar dari `40`, lanjutkan ke bagian kanan.
3. Periksa nilai tengah pada bagian yang tersisa.
4. Pencarian dilanjutkan sampai `60` ditemukan.

Binary Search umumnya lebih efisien daripada Linear Search untuk data besar yang sudah terurut.

### 4.3. Interpolation Search

Interpolation Search merupakan metode pencarian yang memperkirakan posisi data berdasarkan nilai target dan rentang nilai data.

Berbeda dengan Binary Search yang memilih posisi tengah, Interpolation Search memperkirakan posisi yang kemungkinan lebih dekat dengan target.

Metode ini paling cocok untuk data yang sudah terurut dan memiliki distribusi nilai yang relatif merata.

Contoh sederhananya adalah mencari angka `70` pada daftar angka yang terurut dan tersebar cukup merata. Algoritma memperkirakan lokasi angka tersebut berdasarkan rentang nilai yang tersedia.

Efisiensinya bergantung pada karakteristik data. Jika distribusi data tidak sesuai, metode ini belum tentu lebih cepat daripada Binary Search.

### 4.4. Pencarian pada Pohon

Struktur data pohon (*tree*) terdiri atas simpul atau *node* yang saling terhubung.

Algoritma pencarian pohon digunakan untuk menemukan simpul tertentu dalam struktur tersebut.

Contohnya, kita ingin menemukan suatu nilai dalam pohon pencarian atau mencari simpul berdasarkan informasi yang disimpan.

### 4.5. Breadth-First Search (BFS)

BFS adalah algoritma penelusuran yang mengunjungi simpul secara melebar, yaitu memeriksa simpul pada tingkat yang sama sebelum melanjutkan ke tingkat berikutnya.

BFS sering digunakan dalam penelusuran graf dan pohon, misalnya untuk mencari jalur berdasarkan jumlah langkah pada graf yang tidak berbobot.

### 4.6. Depth-First Search (DFS)

DFS adalah algoritma penelusuran yang bergerak sedalam mungkin pada satu jalur sebelum kembali ke simpul sebelumnya untuk mencoba jalur lain.

DFS digunakan dalam penelusuran graf dan pohon, termasuk pada berbagai persoalan pencarian dalam kecerdasan artifisial dan permainan.

BFS dan DFS memiliki pola penelusuran yang berbeda. Pilihan metode bergantung pada bentuk masalah dan hasil yang ingin diperoleh.

### Ringkasan Perbandingan

| Metode | Cara kerja | Karakteristik utama |
|---|---|---|
| Linear Search | Memeriksa elemen satu per satu | Dapat digunakan pada data yang belum terurut |
| Binary Search | Mempersempit pencarian melalui pembagian dua | Memerlukan data terurut |
| Interpolation Search | Memperkirakan posisi berdasarkan nilai | Cocok untuk data terurut dengan distribusi relatif merata |
| Tree Search | Menelusuri simpul pada struktur pohon | Mengikuti hubungan antarsimpul |
| BFS | Menelusuri per tingkat | Melebar terlebih dahulu |
| DFS | Menelusuri satu jalur sedalam mungkin | Kembali ke simpul sebelumnya ketika perlu |

---

## 5. Mengenal Linear Search

Pada bagian ini, kita akan mempelajari Linear Search lebih mendalam karena PPT memberikan langkah algoritma dan contoh implementasinya dalam C++.

### 5.1. Cara Kerja Linear Search

Misalkan kita memiliki array:

`[12, 9, 37, 86, 2, 17, 5]`

Kita ingin mencari angka `17`.

Linear Search memulai pencarian dari index `0`, kemudian memeriksa elemen berikutnya sampai target ditemukan atau seluruh elemen habis diperiksa.

Jika target ditemukan, proses dapat langsung dihentikan.

Jika target tidak ditemukan sampai akhir array, algoritma menyatakan bahwa data tidak ditemukan.

### 5.2. Langkah-Langkah Algoritma

Berikut urutan langkah Linear Search dengan penomoran index yang sesuai dengan array C++:

1. Mulai dari index `0`.
2. Periksa apakah index sudah mencapai jumlah elemen.
3. Jika sudah mencapai akhir array, nyatakan bahwa data tidak ditemukan.
4. Jika elemen pada index saat ini sama dengan target, nyatakan bahwa data ditemukan.
5. Jika belum sama, lanjutkan ke index berikutnya.
6. Ulangi pemeriksaan sampai target ditemukan atau seluruh elemen selesai diperiksa.
7. Selesai.

Perlu diperhatikan bahwa sebagian pseudocode menggunakan posisi yang dimulai dari `1`, sedangkan index array C++ dimulai dari `0`. Pada contoh kode berikut, kita menggunakan index C++ agar sesuai dengan cara kerja bahasa tersebut.

---

## 6. Contoh Kode C++ Linear Search

Berikut implementasi Linear Search yang mengacu pada contoh program dalam PPT. Kode dibuat sedikit lebih sederhana agar mudah dipelajari oleh pemula.

Simpan kode ini dengan nama file `linear_search.cpp`.

```cpp
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
```

### Contoh Output 1 — Data Ditemukan

Jika kita memasukkan angka `17`, hasilnya:

```text
Isi array: 12 9 37 86 2 17 5
Masukkan angka yang ingin dicari: 17
Angka ditemukan pada index 5
```

Mengapa index-nya `5`?

Karena array C++ dimulai dari index `0`, sehingga angka `17` berada pada index `5`.

### Contoh Output 2 — Data Tidak Ditemukan

Jika kita memasukkan angka `100`, hasilnya:

```text
Isi array: 12 9 37 86 2 17 5
Masukkan angka yang ingin dicari: 100
Angka tidak ditemukan.
```

Angka `100` tidak terdapat dalam array, sehingga program menyelesaikan pemeriksaan tanpa menemukan target.

---

## 7. Memahami Kode Program

Mari kita bahas bagian penting kode tadi satu per satu.

### 7.1. Membuat Array

```cpp
int num[] = {12, 9, 37, 86, 2, 17, 5};
```

Baris ini membuat array bernama `num` yang menyimpan tujuh bilangan bulat.

### 7.2. Menentukan Variabel

```cpp
int x;
int n = 7;
int i;
bool ditemukan = false;
```

Penjelasannya:

- `x` menyimpan angka yang ingin dicari.
- `n` menyimpan jumlah elemen array.
- `i` digunakan untuk mengakses index array.
- `ditemukan` menandai apakah target sudah ditemukan.

Nilai awal `ditemukan` adalah `false`, karena pencarian belum berhasil menemukan target.

### 7.3. Menampilkan Isi Array

```cpp
for (i = 0; i < n; i++) {
    cout << num[i] << " ";
}
```

Perulangan `for` digunakan untuk menampilkan setiap elemen array dari index `0` hingga `n - 1`.

### 7.4. Menerima Input

```cpp
cin >> x;
```

Baris ini menerima angka yang dimasukkan pengguna dan menyimpannya dalam variabel `x`.

### 7.5. Melakukan Pencarian

```cpp
for (i = 0; i < n; i++) {
    if (num[i] == x) {
        cout << "Angka ditemukan pada index "
             << i << endl;

        ditemukan = true;
        break;
    }
}
```

Inilah bagian utama Linear Search.

- `for` memeriksa elemen satu per satu.
- `num[i] == x` membandingkan elemen array dengan angka yang dicari.
- Jika sama, program menampilkan index elemen tersebut.
- `ditemukan = true` menandai bahwa target berhasil ditemukan.
- `break` menghentikan perulangan karena target sudah ditemukan.

### 7.6. Memeriksa Hasil Pencarian

```cpp
if (!ditemukan) {
    cout << "Angka tidak ditemukan." << endl;
}
```

Tanda `!` berarti negasi atau kebalikan logika.

Jadi, `!ditemukan` berarti kondisi ketika variabel `ditemukan` bernilai `false`.

Jika pencarian selesai dan target belum ditemukan, program menampilkan pesan bahwa angka tidak tersedia.

### 7.7. Mengakhiri Program

```cpp
return 0;
```

Baris ini menandakan bahwa fungsi `main()` selesai dengan status keberhasilan.

---

## 8. Simulasi Linear Search

Agar lebih mudah memahami cara kerja algoritma, mari kita telusuri pencarian angka `17` pada array berikut:

`[12, 9, 37, 86, 2, 17, 5]`

| Langkah | Index | Nilai | Hasil pemeriksaan |
|---:|---:|---:|---|
| 1 | 0 | 12 | Tidak cocok |
| 2 | 1 | 9 | Tidak cocok |
| 3 | 2 | 37 | Tidak cocok |
| 4 | 3 | 86 | Tidak cocok |
| 5 | 4 | 2 | Tidak cocok |
| 6 | 5 | 17 | Cocok, pencarian berhenti |

Dari simulasi tersebut, kita mengetahui bahwa Linear Search memeriksa enam elemen sebelum menemukan target.

Jika target berada pada elemen pertama, pencarian dapat berhenti setelah satu pemeriksaan. Jika target tidak ada, seluruh elemen harus diperiksa.

### Kelebihan Linear Search

- Mudah dipahami dan diterapkan.
- Tidak memerlukan data yang sudah terurut.
- Cocok untuk data kecil dan pencarian sederhana.

### Kekurangan Linear Search

- Bisa memerlukan banyak pemeriksaan ketika data berjumlah besar.
- Jika target berada di akhir array atau tidak ditemukan, seluruh elemen dapat diperiksa.

Karena itu, pemilihan algoritma pencarian perlu disesuaikan dengan ukuran dan karakteristik data.

---

## 9. Kesimpulan

Dari materi pertemuan ketiga, terdapat beberapa hal penting yang perlu diingat:

1. Algoritma pencarian digunakan untuk menemukan elemen tertentu dalam kumpulan data.
2. Hasil pencarian dapat berupa data ditemukan atau data tidak ditemukan.
3. Array menyimpan sejumlah elemen dengan tipe data sejenis, dan index array C++ dimulai dari `0`.
4. Linear Search memeriksa elemen satu per satu dan dapat digunakan pada data yang belum terurut.
5. Binary Search mempersempit pencarian dengan membagi ruang pencarian menjadi dua bagian dan memerlukan data terurut.
6. Interpolation Search memperkirakan posisi target berdasarkan nilai data.
7. BFS dan DFS merupakan metode penelusuran pada struktur pohon atau graf dengan pola yang berbeda.
8. Dalam implementasi Linear Search, perulangan digunakan untuk memeriksa elemen dan kondisi digunakan untuk menentukan apakah target ditemukan.

**Inti materi:** setiap algoritma pencarian memiliki cara kerja dan karakteristik masing-masing. Memahami cara kerja Linear Search merupakan langkah awal untuk mempelajari metode pencarian lainnya.

---

## 10. Latihan Pemahaman

Coba kerjakan latihan berikut untuk menguji pemahamanmu.

### A. Pertanyaan Konsep

1. Apa yang dimaksud dengan algoritma pencarian?
2. Apa perbedaan hasil *successful search* dan *unsuccessful search*?
3. Mengapa index array pada C++ dimulai dari `0`?
4. Apa perbedaan Linear Search dan Binary Search?
5. Mengapa Binary Search memerlukan data yang terurut?
6. Apa perbedaan cara kerja BFS dan DFS?

### B. Latihan Menelusuri Array

Diketahui array berikut:

`[4, 8, 15, 16, 23, 42]`

Jawablah pertanyaan berikut:

1. Pada index berapa angka `16` ditemukan?
2. Berapa elemen yang perlu diperiksa Linear Search untuk menemukan angka `4`?
3. Jika mencari angka `100`, apa yang akan terjadi?
4. Tuliskan urutan elemen yang diperiksa ketika mencari angka `23`.

### C. Latihan Praktik C++

1. Jalankan program Linear Search di atas.
2. Coba cari angka `37`, kemudian amati hasilnya.
3. Coba cari angka `10`, kemudian amati hasilnya.
4. Ubah isi array menjadi lima angka pilihanmu.
5. Ubah program agar menampilkan pesan `"Data ditemukan"` atau `"Data tidak ditemukan"`.

**Tantangan tambahan:** modifikasi program agar dapat menampilkan semua index yang berisi nilai target jika angka yang sama muncul lebih dari satu kali. Untuk tantangan ini, perhatikan bahwa penggunaan `break` harus disesuaikan agar pencarian tidak langsung berhenti pada kecocokan pertama.

Selamat belajar dan bereksperimen dengan kode! 🚀
