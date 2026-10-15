# Pertemuan 1 — Konsep Algoritma

Selamat datang di materi tambahan mata kuliah **Algoritma dan Pemrograman**!

Pada pertemuan ini, kita akan mempelajari konsep dasar algoritma, karakteristik algoritma, penerapannya dalam kehidupan sehari-hari, serta pengenalan gerbang logika.

Materi ini dibuat sebagai pendamping perkuliahan. Jadi, jika ada bagian yang masih terasa membingungkan saat dijelaskan di kelas, kamu bisa mempelajarinya kembali melalui penjelasan dan contoh di bawah ini.

## 📚 Daftar Isi

1. [Apa Itu Algoritma?](#1-apa-itu-algoritma)
2. [Karakteristik Algoritma](#2-karakteristik-algoritma)
3. [Fungsi dan Penggunaan Algoritma](#3-fungsi-dan-penggunaan-algoritma)
4. [Perintah Dasar Algoritma](#4-perintah-dasar-algoritma)
5. [Jenis Algoritma dalam Pemrograman](#5-jenis-algoritma-dalam-pemrograman)
6. [Contoh Algoritma dalam Kehidupan Sehari-hari](#6-contoh-algoritma-dalam-kehidupan-sehari-hari)
7. [Pengenalan Gerbang Logika](#7-pengenalan-gerbang-logika)
8. [Jenis-Jenis Gerbang Logika](#8-jenis-jenis-gerbang-logika)
9. [Penerapan Gerbang Logika](#9-penerapan-gerbang-logika)
10. [Kesimpulan](#10-kesimpulan)
11. [Latihan Pemahaman](#11-latihan-pemahaman)

---

## 1. Apa Itu Algoritma?

**Algoritma adalah serangkaian langkah atau instruksi yang disusun secara jelas dan logis untuk menyelesaikan suatu masalah dan menghasilkan keluaran yang diinginkan.**

Sederhananya, algoritma adalah urutan langkah yang kita lakukan untuk mencapai suatu tujuan.

Contohnya, ketika ingin membuat mi instan, kita tidak bisa langsung menikmati mi tanpa melakukan proses apa pun. Ada beberapa langkah yang perlu dilakukan, mulai dari menyiapkan alat dan bahan, merebus air, memasak mi, hingga menyajikannya.

Urutan langkah tersebut merupakan contoh sederhana algoritma.

### Hubungan algoritma dengan pemrograman

Dalam pemrograman, algoritma digunakan sebagai dasar untuk merancang solusi sebelum solusi tersebut ditulis menjadi kode program.

Secara sederhana, prosesnya seperti ini:

**Masalah → Algoritma → Program → Hasil**

- **Masalah:** Menentukan apakah seorang mahasiswa lulus atau tidak berdasarkan nilai yang diperoleh.
- **Algoritma:** Menentukan nilai, membandingkannya dengan batas kelulusan, lalu menetapkan hasil.
- **Program:** Menerjemahkan langkah-langkah tersebut ke dalam bahasa pemrograman, seperti C++ atau Python.
- **Hasil:** Program menampilkan status lulus atau tidak lulus.

Perlu diingat bahwa algoritma dan program bukanlah hal yang sama. Algoritma merupakan langkah penyelesaian masalah, sedangkan program adalah implementasi langkah tersebut menggunakan bahasa pemrograman.

---

## 2. Karakteristik Algoritma

Tidak semua urutan instruksi dapat disebut algoritma yang baik. Algoritma harus memiliki beberapa karakteristik berikut.

### 2.1. Jelas (Definite)

Setiap langkah harus memiliki arti yang jelas dan tidak menimbulkan banyak penafsiran.

Contoh:

- Kurang jelas: "Tambahkan sedikit gula."
- Lebih jelas: "Tambahkan satu sendok teh gula."

Instruksi yang jelas membantu memastikan bahwa langkah dapat dilakukan sesuai tujuan.

### 2.2. Logis

Langkah-langkah yang dibuat harus masuk akal dan sesuai dengan masalah yang ingin diselesaikan.

Contohnya, saat membuat teh, kita perlu menyiapkan cangkir dan teh sebelum menuangkan air panas ke dalamnya.

### 2.3. Sistematis dan Berurutan

Langkah-langkah harus disusun secara teratur sehingga proses dapat dilakukan dengan benar.

Misalnya, untuk mencari nilai rata-rata, kita perlu menjumlahkan nilai terlebih dahulu, kemudian membaginya dengan jumlah data.

### 2.4. Memiliki Tujuan

Algoritma dibuat untuk menyelesaikan masalah atau mencapai hasil tertentu.

Contohnya, algoritma pencarian bertujuan menemukan data yang dibutuhkan dalam sekumpulan data.

### 2.5. Terbatas

Algoritma harus memiliki akhir. Artinya, proses penyelesaian tidak boleh berjalan tanpa henti.

Misalnya, jika kita membuat algoritma untuk menghitung rata-rata dari lima nilai, proses tersebut seharusnya selesai setelah semua nilai diproses dan hasilnya diperoleh.

### 2.6. Menghasilkan Keluaran (Output)

Algoritma dirancang untuk menghasilkan keluaran atau solusi sesuai kebutuhan.

Keluaran dapat berupa angka, teks, status, atau informasi lainnya.

Contohnya, algoritma menghitung rata-rata menghasilkan angka rata-rata sebagai output.

**Intinya:** algoritma yang baik harus jelas, logis, teratur, memiliki tujuan, berakhir, dan menghasilkan keluaran yang diharapkan.

---

## 3. Fungsi dan Penggunaan Algoritma

Algoritma memiliki peran penting, baik dalam pemrograman komputer maupun dalam kehidupan sehari-hari.

### 3.1. Pemrograman Komputer

Algoritma menjadi dasar dalam merancang program. Sebelum menulis kode, programmer perlu menentukan langkah-langkah yang akan dilakukan program untuk menyelesaikan masalah.

### 3.2. Penyelesaian Masalah

Algoritma membantu kita menyelesaikan masalah secara terstruktur, bukan hanya berdasarkan perkiraan.

Misalnya, ketika ingin menghitung total belanja, kita dapat menyusun langkah untuk memasukkan harga barang, menjumlahkan seluruh harga, kemudian menampilkan totalnya.

### 3.3. Personalisasi Layanan Digital

Banyak aplikasi menggunakan algoritma untuk mengolah data dan memberikan layanan yang sesuai dengan kebutuhan pengguna.

Contohnya:

- Mesin pencari mengurutkan hasil berdasarkan relevansi dengan kata kunci.
- Platform video memberikan rekomendasi berdasarkan berbagai informasi, termasuk riwayat tontonan.
- Aplikasi peta menentukan rute menuju lokasi tujuan.

---

## 4. Perintah Dasar Algoritma

Dalam materi perkuliahan, terdapat beberapa perintah dasar algoritma yang perlu dikenal.

| Perintah | Penjelasan sederhana |
|---|---|
| Penulisan | Menuliskan atau menampilkan informasi. |
| Pembacaan | Membaca atau menerima data yang diperlukan. |
| Pemuatan | Istilah yang dicantumkan dalam PPT; penjelasan khususnya perlu disesuaikan dengan definisi dosen. |
| Pengulangan | Menjalankan langkah yang sama berulang kali sesuai kondisi atau jumlah tertentu. |
| Pengkondisian | Menentukan langkah yang dilakukan berdasarkan suatu kondisi. |

Dua konsep yang sangat penting untuk dipahami sejak awal adalah pengulangan dan pengkondisian.

- **Pengulangan:** digunakan ketika suatu pekerjaan perlu dilakukan berkali-kali.
- **Pengkondisian:** digunakan ketika hasil atau tindakan bergantung pada kondisi tertentu.

Contohnya, jika nilai mahasiswa memenuhi batas kelulusan, tampilkan "Lulus". Jika tidak, tampilkan "Belum lulus". Ini merupakan gambaran sederhana pengkondisian.

Pada pertemuan berikutnya, konsep-konsep tersebut dapat dipelajari lebih lanjut melalui bentuk algoritma dan kode program.

---

## 5. Jenis Algoritma dalam Pemrograman

Ada banyak jenis algoritma. Pada materi ini, kita diperkenalkan pada tiga jenis berikut.

### 5.1. Algoritma Pengurutan (Sorting)

Sorting adalah algoritma untuk mengurutkan sekumpulan data berdasarkan aturan tertentu.

Contoh:

Data sebelum diurutkan:

`8, 3, 5, 1, 9`

Setelah diurutkan dari yang terkecil ke terbesar:

`1, 3, 5, 8, 9`

Sorting dapat digunakan untuk mengurutkan nilai mahasiswa, harga barang, atau daftar nama.

### 5.2. Algoritma Pencarian (Searching)

Searching adalah algoritma untuk menemukan data tertentu dalam sekumpulan data.

Contoh:

Terdapat daftar angka:

`10, 25, 30, 45, 50`

Kita ingin mencari angka `30`. Algoritma pencarian akan membantu menentukan apakah angka tersebut tersedia dan, jika ditemukan, di posisi mana angka tersebut berada.

### 5.3. Algoritma Rekursif (Recursive Algorithm)

Rekursi adalah pendekatan penyelesaian masalah ketika suatu fungsi atau proses memanggil dirinya sendiri untuk menangani bagian masalah yang lebih kecil.

Contoh sederhananya adalah menghitung faktorial suatu bilangan.

Misalnya:

- \(3! = 3 \times 2 \times 1 = 6\)
- \(4! = 4 \times 3 \times 2 \times 1 = 24\)

Dalam rekursi, perlu ada kondisi berhenti agar proses tidak berjalan terus-menerus.

Ketiga jenis algoritma ini akan dibahas lebih lanjut pada materi pencarian, pengurutan, dan rekursi.

---

## 6. Contoh Algoritma dalam Kehidupan Sehari-hari

Agar konsep algoritma lebih mudah dipahami, perhatikan beberapa contoh berikut.

### 6.1. Membuat Secangkir Teh

Tujuan: membuat secangkir teh siap minum.

Urutan langkah:

1. Siapkan cangkir, teh, air, dan gula jika diperlukan.
2. Rebus air hingga panas.
3. Masukkan teh ke dalam cangkir.
4. Tuangkan air panas.
5. Tambahkan gula sesuai kebutuhan.
6. Aduk hingga tercampur.
7. Teh siap diminum.

Mengapa ini disebut algoritma?

Karena terdapat langkah-langkah yang jelas, tersusun secara berurutan, memiliki tujuan, dan berakhir ketika teh selesai dibuat.

### 6.2. Mencari Alamat Menggunakan Aplikasi Peta

Tujuan: menemukan rute menuju suatu lokasi.

Urutan langkah:

1. Buka aplikasi peta.
2. Masukkan alamat tujuan.
3. Pilih rute yang tersedia.
4. Ikuti petunjuk perjalanan.
5. Berhenti ketika sudah sampai di tujuan.

Aplikasi peta menggunakan algoritma untuk membantu memproses lokasi dan menentukan rute berdasarkan informasi yang tersedia.

### 6.3. Mencari Video di Platform Digital

Tujuan: menemukan video yang sesuai dengan kebutuhan.

Urutan sederhana:

1. Masukkan kata kunci pencarian.
2. Sistem memproses kata kunci tersebut.
3. Sistem menampilkan video yang dianggap relevan.
4. Pengguna memilih video yang diinginkan.

Sistem pencarian menggunakan algoritma untuk memproses informasi dan menentukan hasil yang ditampilkan.

Dari contoh-contoh tersebut, kita dapat melihat bahwa algoritma tidak hanya digunakan dalam pemrograman, tetapi juga dalam aktivitas sehari-hari.

---

## 7. Pengenalan Gerbang Logika

Selain konsep algoritma, PPT pertemuan ini juga membahas gerbang logika (*logic gates*).

**Gerbang logika adalah komponen dasar dalam rangkaian digital yang memproses masukan biner dan menghasilkan keluaran berdasarkan aturan logika tertentu.**

Sistem biner hanya menggunakan dua nilai:

- `0` = salah (*False*)
- `1` = benar (*True*)

Dalam rangkaian digital, nilai tersebut merepresentasikan dua keadaan logika.

Gerbang logika dapat menerima satu atau lebih input dan menghasilkan output. Hasilnya bergantung pada jenis gerbang dan nilai input yang diberikan.

Sebagai contoh, gerbang AND akan menghasilkan output `1` hanya ketika semua input bernilai `1`.

Untuk memahami aturan setiap gerbang, kita menggunakan **tabel kebenaran (*truth table*)**.

Tabel kebenaran menunjukkan seluruh kemungkinan kombinasi input beserta output yang dihasilkan.

---

## 8. Jenis-Jenis Gerbang Logika

Pada materi ini, terdapat tujuh gerbang logika yang perlu dikenal: AND, OR, NOT, NAND, NOR, XOR, dan XNOR.

Untuk gerbang yang memiliki dua input, kita gunakan simbol `A` dan `B`, sedangkan `Y` merupakan output.

### 8.1. Gerbang AND

Gerbang AND menghasilkan output `1` jika **semua input bernilai `1`**.

Jika terdapat setidaknya satu input bernilai `0`, output-nya adalah `0`.

| A | B | Y |
|---|---|---|
| 0 | 0 | 0 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

Contoh sederhana: dua syarat harus terpenuhi sekaligus agar suatu tindakan dapat dilakukan.

### 8.2. Gerbang OR

Gerbang OR menghasilkan output `1` jika **minimal satu input bernilai `1`**.

Output hanya bernilai `0` jika semua input bernilai `0`.

| A | B | Y |
|---|---|---|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 1 |

Contoh sederhana: suatu pilihan dapat diterima jika setidaknya salah satu syarat terpenuhi.

### 8.3. Gerbang NOT

Gerbang NOT membalik nilai input. Karena hanya memiliki satu input, output-nya selalu merupakan kebalikan dari input tersebut.

| A | Y |
|---|---|
| 0 | 1 |
| 1 | 0 |

Jika input bernilai `1`, output menjadi `0`. Sebaliknya, jika input bernilai `0`, output menjadi `1`.

Gerbang ini juga dikenal sebagai *inverter*.

### 8.4. Gerbang NAND

Gerbang NAND merupakan kombinasi AND dan NOT. Output-nya adalah kebalikan dari hasil gerbang AND.

Dengan demikian, output NAND bernilai `0` hanya ketika semua input bernilai `1`.

| A | B | Y |
|---|---|---|
| 0 | 0 | 1 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

Cara mudah mengingatnya: hitung hasil AND terlebih dahulu, kemudian balik hasilnya.

### 8.5. Gerbang NOR

Gerbang NOR merupakan kombinasi OR dan NOT. Output-nya merupakan kebalikan dari hasil gerbang OR.

Output NOR bernilai `1` hanya jika semua input bernilai `0`.

| A | B | Y |
|---|---|---|
| 0 | 0 | 1 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 0 |

Cara mudah mengingatnya: hitung hasil OR terlebih dahulu, kemudian balik hasilnya.

### 8.6. Gerbang XOR (Exclusive OR)

Gerbang XOR menghasilkan output `1` jika **kedua input memiliki nilai yang berbeda**.

Jika kedua input sama, output-nya adalah `0`.

| A | B | Y |
|---|---|---|
| 0 | 0 | 0 |
| 0 | 1 | 1 |
| 1 | 0 | 1 |
| 1 | 1 | 0 |

Kunci mengingat XOR adalah: berbeda menghasilkan `1`, sama menghasilkan `0`.

### 8.7. Gerbang XNOR (Exclusive NOR)

Gerbang XNOR merupakan kebalikan dari XOR. Output-nya bernilai `1` jika **kedua input memiliki nilai yang sama**.

| A | B | Y |
|---|---|---|
| 0 | 0 | 1 |
| 0 | 1 | 0 |
| 1 | 0 | 0 |
| 1 | 1 | 1 |

Kunci mengingat XNOR adalah: sama menghasilkan `1`, berbeda menghasilkan `0`.

### Ringkasan Gerbang Logika

| Gerbang | Kondisi output `1` |
|---|---|
| AND | Semua input `1` |
| OR | Minimal satu input `1` |
| NOT | Input `0` |
| NAND | Tidak semua input `1` |
| NOR | Semua input `0` |
| XOR | Kedua input berbeda |
| XNOR | Kedua input sama |

**Tips belajar:** pahami aturan setiap gerbang terlebih dahulu, kemudian coba isi tabel kebenaran tanpa melihat jawabannya. Dengan cara ini, kamu akan lebih mudah mengingatnya.

---

## 9. Penerapan Gerbang Logika

Gerbang logika menjadi bagian penting dalam berbagai perangkat dan sistem digital.

### 9.1. Komputer dan Perangkat Keras

Gerbang logika merupakan salah satu dasar pembentukan rangkaian digital yang digunakan dalam prosesor dan perangkat elektronik.

### 9.2. Sistem Kontrol Industri

Gerbang logika dapat digunakan dalam sistem otomasi untuk menentukan tindakan berdasarkan kombinasi kondisi masukan.

### 9.3. Sistem Keamanan

Rangkaian logika dapat digunakan dalam sistem alarm atau kontrol akses yang merespons kondisi tertentu.

Misalnya, suatu sistem dapat dirancang agar alarm aktif ketika kondisi yang ditentukan terpenuhi.

Contoh tersebut merupakan gambaran penerapan logika digital. Implementasi sebenarnya bergantung pada rancangan sistem yang digunakan.

---

## 10. Kesimpulan

Dari materi pertemuan pertama ini, terdapat beberapa hal penting yang perlu dipahami:

1. Algoritma adalah serangkaian langkah yang jelas dan logis untuk menyelesaikan masalah.
2. Algoritma yang baik harus memiliki langkah yang jelas, teratur, bertujuan, terbatas, dan menghasilkan keluaran.
3. Algoritma digunakan dalam pemrograman komputer maupun kehidupan sehari-hari.
4. Sorting, searching, dan rekursi merupakan contoh jenis algoritma yang akan dipelajari lebih lanjut.
5. Gerbang logika memproses input biner `0` dan `1` berdasarkan aturan tertentu.
6. Setiap gerbang logika memiliki aturan output yang berbeda dan dapat dipahami melalui tabel kebenaran.

Memahami konsep-konsep ini akan membantu kita mempelajari materi berikutnya, terutama ketika mulai menyusun algoritma dalam bentuk yang lebih terstruktur dan menerapkannya ke dalam kode program.

---

## 11. Latihan Pemahaman

Coba jawab beberapa pertanyaan berikut untuk menguji pemahamanmu.

1. Jelaskan pengertian algoritma menggunakan bahasamu sendiri.
2. Mengapa urutan langkah yang jelas dan teratur penting dalam sebuah algoritma?
3. Buatlah algoritma sederhana untuk kegiatan sehari-hari selain membuat teh.
4. Apa perbedaan antara algoritma sorting dan searching?
5. Apa yang dimaksud dengan input dan output pada gerbang logika?
6. Jika `A = 1` dan `B = 0`, berapakah output gerbang AND, OR, XOR, dan XNOR?
7. Apa perbedaan aturan output gerbang NAND dan NOR?

**Tantangan tambahan:** buatlah tabel kebenaran gerbang AND dan XOR dari awal tanpa melihat materi di atas.

Jika kamu bisa menjelaskan alasan di balik setiap jawaban, berarti kamu tidak sekadar menghafal, tetapi mulai memahami konsepnya.

---

**Materi selanjutnya:** Flowchart dan Pseudocode.

Pada pertemuan berikutnya, kita akan mempelajari cara menggambarkan dan menuliskan langkah-langkah algoritma agar lebih mudah dipahami sebelum diterjemahkan menjadi program.

Selamat belajar! 🚀
