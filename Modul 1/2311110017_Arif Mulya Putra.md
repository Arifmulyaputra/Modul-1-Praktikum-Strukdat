# <h1 align="center">Laporan Praktikum Modul Tipe Data</h1>
<p align="center">Arif Mulya Putra</p>

## Dasar Teori

Tipe data merupakan cara untuk mengelompokkan dan mengklasifikasikan data dalam pemrograman. Ada tiga jenis tipe data utama yang umumnya digunakan:

## tipe data primitif:
Tipe data primitif adalah jenis data yang sudah ditentukan oleh sistem dan disediakan oleh banyak bahasa pemrograman. Contohnya:

- **Int**: Digunakan untuk menyimpan bilangan bulat seperti 12, 1, atau 4.
- **Float**: Menggunakan bilangan desimal seperti 1.5, 2.1, atau 3.14.
- **Char**: Berfungsi untuk menyimpan huruf atau simbol seperti A, B, C.
- **Boolean**: Digunakan untuk menyimpan nilai boolean, yaitu true atau false.

Karakteristik:

- Ukuran memori tetap.
- Dapat dioperasikan dengan operator aritmatika dan logika.
- Memiliki nilai default[1].

### 2. Tipe Data Abstrak:

Tipe data abstrak, atau Abstrak Data Type (ADT), dibentuk oleh programer dan bisa berisi berbagai jenis data. Fitur class dalam Object Oriented Programming (OOP) mirip dengan struktur data struct pada bahasa C++, dengan perbedaan akses default (public untuk struct, private untuk class).

Karakteristik:

- Fleksibilitas dalam membentuk jenis data sesuai kebutuhan.
- Struktur data statis.
- Akses default berbeda (public untuk struct, private untuk class)[1].

### 3. Tipe Data Koleksi:

Tipe data koleksi digunakan untuk mengelompokkan dan menyimpan beberapa nilai atau objek secara bersamaan. Beberapa contoh tipe data koleksi meliputi:

- **Array**: Struktur data statis dengan elemen-elemen tipe data yang sama dan ukuran tetap.
- **Vector**: Mirip dengan array, tetapi dinamis dengan alokasi memorinya otomatis.
- **Map**: Mirip dengan array, tetapi indeksnya bisa berupa tipe data selain integer, disebut "key", dan menggunakan struktur pohon self-balancing seperti Red-Black Tree pada std::map.

Karakteristik:

- Pengelolaan dan akses data yang terstruktur.
- Ukuran statis (array) atau dinamis (vector, map).
- Struktur data dinamis (vector, map) menggunakan Red-Black Tree[1].

Tipe data koleksi memungkinkan pengelolaan dan akses data yang lebih terstruktur, sementara tipe data abstrak memberikan fleksibilitas dalam membentuk jenis data sesuai kebutuhan programer. Tipe data primitif, di sisi lain, sudah ditentukan oleh sistem dengan perbedaan tergantung pada bahasa pemrograman dan sistem operasional yang digunakan.

### Perbandingan Tipe Data:

| Tipe Data |           Definisi           |                         Karakteristik                         |         Contoh         |
| :-------: | :--------------------------: | :-----------------------------------------------------------: | :--------------------: |
| Primitif  | Dasar, disediakan bahasa C++ | Ukuran memori tetap, operasi aritmatika/logika, nilai default | int, float, char, bool |
|  Abstrak  | Dibuat programer, fleksibel  |          Struktur data statis, akses default berbeda          |     struct, class      |
|  Koleksi  |  Mengelompokkan nilai/objek  |         Pengelolaan/akses terstruktur, statis/dinamis         |   array, vector, map   |

## [Guided](#guided)
### 1. Tipe Data Primitif


```cpp
    #include <iostream>

    int tambah(int a, int b) {
        return a + b;
    }

    int kali(int a, int b) {
        return a * b;
    }

    int main() {
        int angka1, angka2;
        std::cout << "Masukkan dua angka bulat: ";
        std::cin >> angka1 >> angka2;

        std::cout << "Hasil penjumlahan: " << tambah(angka1, angka2) << std::endl;
        std::cout << "Hasil perkalian: " << kali(angka1, angka2) << std::endl;

        return 0;
    }
```
penjelasan kodingan:
Kodingan di atas adalah contoh program sederhana dalam C++ yang melakukan operasi penjumlahan dan perkalian dua angka bulat yang dimasukkan oleh pengguna. Berikut adalah penjelasannya:

1. #include <iostream>: Meng-include library <iostream> yang digunakan untuk input dan output dalam program C++.

2. int tambah(int a, int b) { ... }: Mendefinisikan fungsi tambah yang menerima dua parameter a dan b bertipe int dan mengembalikan hasil penjumlahan dari kedua parameter tersebut.

3. int kali(int a, int b) { ... }: Mendefinisikan fungsi kali yang menerima dua parameter a dan b bertipe int dan mengembalikan hasil perkalian dari kedua parameter tersebut.

4. int main() { ... }: Fungsi utama dari program C++. Semua kode program dieksekusi di dalam fungsi main.

5. int angka1, angka2;: Mendeklarasikan dua variabel angka1 dan angka2 bertipe int untuk menyimpan angka yang dimasukkan oleh pengguna.

6. std::cout << "Masukkan dua angka bulat: ";: Menggunakan std::cout (console output) untuk menampilkan pesan "Masukkan dua angka bulat: " ke layar.

7. std::cin >> angka1 >> angka2;: Menggunakan std::cin (console input) untuk mengambil dua angka yang dimasukkan oleh pengguna dan menyimpannya ke dalam variabel angka1 dan angka2.

8. std::cout << "Hasil penjumlahan: " << tambah(angka1, angka2) << std::endl;: Menampilkan hasil penjumlahan dari angka1 dan angka2 dengan memanggil fungsi tambah dan menggunakan std::cout untuk menampilkan hasilnya.

9. std::cout << "Hasil perkalian: " << kali(angka1, angka2) << std::endl;: Menampilkan hasil perkalian dari angka1 dan angka2 dengan memanggil fungsi kali dan menggunakan std::cout untuk menampilkan hasilnya.

10. return 0;: Mengembalikan nilai 0 sebagai tanda bahwa program telah berakhir dengan sukses.

Program ini memiliki dua fungsi integer: tambah untuk menjumlahkan dua bilangan bulat, dan kali untuk mengalikan dua bilangan bulat. Program ini meminta pengguna memasukkan dua angka bulat, lalu menampilkan hasil penjumlahan dan perkalian dari kedua angka tersebut.

Kesimpulan dari materi tipe data primitif:
- Tipe data primitif seperti int digunakan untuk menyimpan nilai numerik.
- Fungsi integer dapat mengembalikan nilai hasil operasi matematika tertentu.
- Program-program dengan tipe data primitif cenderung lebih efisien dalam penggunaan memori dan eksekusi dibandingkan dengan program yang menggunakan tipe data kompleks.

## Soal 2
Jelaskan fungsi dari class dan struct  secara detail dan berikan contoh programnya

## Jawaban

### 1. [Soal]

```C++
#include <iostream>
using namespace std;

int main() {
    cout << "ini adalah file code unguided praktikan" << endl;
    return 0;
}
```
#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Full code Screenshot:
![240309_10h21m35s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/41e9641c-ad4e-4e50-9ca4-a0215e336b04)


## Kesimpulan
Ringkasan dan interpretasi pandangan kalia dari hasil praktikum dan pembelajaran yang didapat[1].

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.