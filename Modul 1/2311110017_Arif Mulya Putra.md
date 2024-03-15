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

## [Guided]
### 1. Tipe Data Primitif

```cpp
    #include <iostream>
    using namespace std;
    // Main program
    main()
    {
        char op;
        float num1, num2;
        // It allows user to enter operator i.e. +, -, *, /
        cin >> op;
        // It allow user to enter the operands
        cin >> num1 >> num2;
        // Switch statement begins
        switch (op)
        {
        // If user enter +
        case '+':
            cout << num1 + num2;
            break;
        // If user enter -
        case '-':
            cout << num1 - num2;
            break;
        // If user enter *
        case '*':
            cout << num1 * num2;
            break;
        // If user enter /
        case '/':
            cout << num1 / num2;
            break;
        // If the operator is other than +, -, * or /,
        // error massage will display
        default:
            cout << "Error! operator is not correct";
        } // Switch statement ends
        return 0;
    }
```
### Output:

   
penjelasan kodingan:
Kode di atas adalah program yang meminta pengguna untuk memasukkan operator matematika (+, -, \*, /) dan dua bilangan floating-point. Setelah menerima input, program menggunakan switch statement untuk melakukan operasi sesuai dengan operator yang dimasukkan. Hasil operasi tersebut kemudian dicetak ke layar. Jika operator yang dimasukkan tidak sesuai dengan yang sudah disediakan, maka program akan mencetak pesan error. Program berakhir setelah operasi selesai dan hasilnya ditampilkan.

### 2. Tipe Data Abstrak

```C++
#include <stdio.h>

//struct
struct Mahasiswa
{
    const char *name;
    const char *address;
    int age;
};

int main()
{
    // Menggunakan struct
    struct Mahasiswa mhs1, mhs2;
    // Mengisi nilai ke struct
    mhs1.name = "Dian";
    mhs1.address = "Mataram";
    mhs1.age = 22;
    mhs2.name = "Bambang";
    mhs2.address = "Surabaya";
    mhs2.age = 23;

    // Mencetak isi struct
    printf("## Mahasiswa 1 ##\n");
    printf("Nama: %s\n", mhs1.name);
    printf("Alamat: %s\n", mhs1.address);
    printf("Umur: %d\n", mhs1.age);
    printf("## Mahasiswa 2 ##\n");
    printf("Nama: %s\n", mhs2.name);
    printf("Alamat: %s\n", mhs2.address);
    printf("Umur: %d\n", mhs2.age);
    return 0;
}
```


### Output:



Kode di atas merupakan program yang menggunakan struktur data atau struct untuk merepresentasikan informasi mahasiswa. Dalam struct `Mahasiswa`, terdapat tiga anggota yaitu `name` (nama), `address` (alamat), dan `age` (umur). Program kemudian membuat dua variabel bertipe struct Mahasiswa, yaitu `mhs1` dan `mhs2`, dan mengisi nilai untuk masing-masing variabel.

Selanjutnya, program mencetak informasi mahasiswa ke layar menggunakan fungsi `printf`, termasuk nama, alamat, dan umur untuk kedua mahasiswa. Hasilnya adalah mencetak informasi mahasiswa 1 (mhs1) dan mahasiswa 2 (mhs2) ke layar sesuai dengan nilai yang telah diisikan sebelumnya.

### 3. Tipe Data Koleksi

```C++
#include <iostream>
using namespace std;
int main()
{
    //deklarasi dan inisialisasi array
    int nilai[5];
    nilai[0] = 23;
    nilai[1] = 50;
    nilai[2] = 34;
    nilai[3] = 78;
    nilai[4] = 90;

    //mencetak array
    cout << "Isi array pertama :" << nilai[0] << endl;
    cout << "Isi array kedua :" << nilai[1] << endl;
    cout << "Isi array ketiga :" << nilai[2] << endl;
    cout << "Isi array keempat :" << nilai[3] << endl;
    cout << "Isi array kelima :" << nilai[4] << endl;
    return 0;
}
```

#### Output:
![240302_00h00m06s_screenshot](https://github.com/suxeno/Struktur-Data-Assignment/assets/111122086/6d1727a8-fb77-4ecf-81ff-5de9386686b7)

Kode di atas digunakan untuk mencetak teks "ini adalah file code guided praktikan" ke layar menggunakan function cout untuk mengeksekusi nya.

#### Contoh Program

```cpp
#include <iostream>
using namespace std;

class Person {
public:
  string nama;
  int usia;

  void perkenalan() {
    cout << "Halo, nama saya " << nama << " dan saya berusia " << usia << " tahun." << endl;
  }
};

int main() {
  Person budi;
  budi.nama = "Budi";
  budi.usia = 25;

  budi.perkenalan();

  return 0;
}
```

### Output:



class Person: Mendeklarasikan kelas Person.
public:: Menentukan anggota kelas yang dapat diakses dari luar kelas.
string nama;: Mendeklarasikan variabel nama dengan tipe data string di dalam kelas Person.
int usia;: Mendeklarasikan variabel usia dengan tipe data int di dalam kelas Person.
void perkenalan(): Mendeklarasikan fungsi perkenalan() di dalam kelas Person. Person budi;: Mendeklarasikan objek budi dengan kelas Person. budi.nama = "Budi";: Mengatur nilai variabel nama pada objek budi menjadi "Budi".
budi.usia = 25;: Mengatur nilai variabel usia pada objek budi menjadi 25. budi.perkenalan();: Memanggil fungsi perkenalan() pada objek budi.

### 3. Buat dan jelaskan program menggunakan fungsi map dan jelaskan perbedaan dari array dengan map.

```cpp
#include <iostream>
#include <map>

using namespace std;

int main() {
  // Mendefinisikan map untuk menyimpan barang
  map<string, int> barang = {
    {"Buku", 50000},
    {"Pensil", 2000},
    {"Spidol", 10000},
  };

  // Menghitung total harga dengan map
  int total_harga = 0;
  for (auto item : barang) {
    total_harga += item.second;
  }

  // Menampilkan hasil
  cout << "Total harga: Rp" << total_harga << endl;

  return 0;
}
```
### Output:



Kode di atas menggunakan struktur data map untuk menyimpan pasangan nilai (key-value). Key dalam hal ini adalah indeks, dan value adalah nilai yang terkait. Setelah map diinisialisasi dan diisi dengan beberapa pasangan nilai, program menggunakan loop for untuk mencetak nilai dari setiap pasangan. Hasilnya adalah mencetak nilai-nilai tersebut ke layar tanpa nomor indeks array tertentu.

#### Perbedaan Dari Array dan Map:

- Array cocok digunakan ketika kita tahu ukuran data yang akan disimpan, sementara map lebih fleksibel karena dapat menyesuaikan ukurannya.
- Array diakses menggunakan indeks numerik, sementara map diakses menggunakan kunci unik untuk mendapatkan nilai yang terkait.
- Map lebih cocok untuk situasi di mana hubungan antara kunci dan nilai penting, sedangkan array digunakan untuk kumpulan data dengan indeks numerik.

Singkatnya, array cocok untuk situasi dengan data yang memiliki ukuran tetap dan diakses secara numerik, sementara map lebih fleksibel dan berguna untuk data yang memiliki hubungan kunci-nilai yang unik.

## Kesimpulan

Pemahaman tipe data, struktur data, dan konsep class/struct merupakan dasar yang penting dalam pemrograman. Tipe data primitif menyediakan dasar untuk menyimpan informasi, tipe data abstrak memberikan fleksibilitas, dan tipe data koleksi memungkinkan pengelolaan data yang terstruktur. Class dan struct memberikan kemampuan untuk membuat struktur data yang kompleks, sementara array dan map menyediakan cara penyimpanan yang berbeda untuk data yang beragam. Program-program contoh memberikan implementasi praktis dari konsep-konsep ini.

## Referensi
[1] I. Holm, Narrator, and J. Fullerton-Smith, Producer, How to Build a Human [DVD]. London: BBC; 2002.