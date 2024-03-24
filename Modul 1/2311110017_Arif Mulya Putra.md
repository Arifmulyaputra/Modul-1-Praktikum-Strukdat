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

![image](https://github.com/Arifmulyaputra/Praktikum-Struktur-Data-Assignment/assets/161549884/c721db67-d7e6-47c6-b29f-8640f0d20fa2)

   
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

![image](https://github.com/Arifmulyaputra/Praktikum-Struktur-Data-Assignment/assets/161549884/ea4d4098-63ea-485a-b693-98522598e106)


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

![image](https://github.com/Arifmulyaputra/Praktikum-Struktur-Data-Assignment/assets/161549884/166bf084-634f-4705-a358-de6dbb1468c7)


Kode di atas adalah program yang menggunakan array untuk menyimpan beberapa nilai integer. Array tersebut bernama `nilai` dan memiliki panjang 5. Nilai-nilai tersebut diinisialisasi secara terpisah untuk setiap elemen array menggunakan indeks 0 hingga 4.

Selanjutnya, program mencetak setiap nilai dari array `nilai` ke layar menggunakan perintah `cout`. Hasilnya adalah mencetak nilai dari setiap elemen array, yaitu nilai[0], nilai[1], nilai[2], nilai[3], dan nilai[4], secara berurutan. Program kemudian mengembalikan nilai 0, menandakan bahwa program berjalan dengan sukses.


## Unguided

### 1. Buatlah program menggunakan tipe data primitif minimal dua fungsi dan bebas. Menampilkan program, jelaskan program tersebut dan ambil kesimpulan dari materi tipe data primitif!

```cpp
#include <iostream>
using namespace std;

int main() {
  // Tipe data primitif untuk panjang dan lebar
  int panjang, lebar;

  // Meminta input dari pengguna
  cout << "Masukkan panjang persegi panjang: ";
  cin >> panjang;
  cout << "Masukkan lebar persegi panjang: ";
  cin >> lebar;

  // Menghitung luas dan keliling
  int luas = panjang * lebar;
  int keliling = 2 * (panjang + lebar);

  // Menampilkan hasil
  cout << "Luas persegi panjang: " << luas << endl;
  cout << "Keliling persegi panjang: " << keliling << endl;

  return 0;
}
```

### Output:

![image](https://github.com/Arifmulyaputra/Praktikum-Struktur-Data-Assignment/assets/161549884/2ac5375b-c17a-42b2-85f4-cee97e759209)


int panjang, lebar: Mendeklarasikan dua variabel panjang dan lebar dengan tipe data int (integer) untuk menyimpan nilai panjang dan lebar persegi panjang. cout << "Masukkan panjang persegi panjang: ";: Menampilkan pesan "Masukkan panjang persegi panjang: " ke layar.
cin >> panjang: Membaca input dari pengguna dan menyimpannya ke variabel panjang.
cout << "Masukkan lebar persegi panjang: ";: Menampilkan pesan "Masukkan lebar persegi panjang: " ke layar.
cin >> lebar: Membaca input dari pengguna dan menyimpannya ke variabel lebar. int luas = panjang * lebar: Menghitung luas persegi panjang dengan mengalikan nilai panjang dan lebar.
int keliling = 2 * (panjang + lebar): Menghitung keliling persegi panjang dengan rumus 2 * (panjang + lebar). cout << "Luas persegi panjang: " << luas << endl;: Menampilkan pesan "Luas persegi panjang: " diikuti dengan nilai luas ke layar.
cout << "Keliling persegi panjang: " << keliling << endl;: Menampilkan pesan "Keliling persegi panjang: " diikuti dengan nilai keliling ke layar.

#### Kesimpulan materi tipe data primitif:

Kesimpulan dari materi di atas adalah bahwa tipe data primitif adalah klasifikasi jenis data yang sudah ditentukan oleh sistem dan disediakan oleh berbagai bahasa pemrograman. Contoh tipe data primitif meliputi int untuk menyimpan bilangan bulat, float untuk bilangan desimal, char untuk huruf atau simbol, dan boolean untuk menyimpan nilai boolean dengan dua kemungkinan nilai, yaitu true atau false.

### 2. Jelaskan fungsi dari class dan struct secara detail dan berikan contoh programnya

#### Class

Class adalah suatu fitur dalam pemrograman berorientasi objek (OOP) yang memungkinkan programmer untuk membuat struktur data yang kompleks. Class digunakan untuk mendefinisikan sebuah tipe data baru yang dapat menyimpan data (atribut) dan perilaku (metode) bersama-sama. Dengan kata lain, class dapat digambarkan sebagai "blueprint" atau cetak biru untuk menciptakan objek. Setiap objek yang dibuat dari suatu class memiliki atribut dan metode yang sama, namun nilainya bisa berbeda.

#### Struct

Struct, singkatan dari structure, juga digunakan untuk membuat struktur data, tetapi memiliki perbedaan utama dengan class. Struct tidak memiliki kemampuan untuk menyembunyikan akses ke atribut atau metodenya, dan secara default bersifat public. Ini berarti semua anggota struct dapat diakses langsung dari luar struct.

#### Perbedaan

Perbedaan utama antara class dan struct adalah pada hak akses defaultnya. Dalam class, anggota bersifat private secara default, sementara dalam struct bersifat public secara default. Dengan class, kita dapat menggunakan hak akses private untuk menyembunyikan implementasi internal dari pengguna class, sementara struct lebih terbuka dan digunakan terutama untuk menyimpan data tanpa perilaku yang kompleks.

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

![image](https://github.com/Arifmulyaputra/Praktikum-Struktur-Data-Assignment/assets/161549884/c7f45382-f9a9-4103-bbb2-015888d1343d)


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

![image](https://github.com/Arifmulyaputra/Praktikum-Struktur-Data-Assignment/assets/161549884/cfbf629f-bd7c-4905-9232-eb8c811d52aa)


Kode di atas menggunakan struktur data map untuk menyimpan pasangan nilai (key-value). Key dalam hal ini adalah indeks, dan value adalah nilai yang terkait. Setelah map diinisialisasi dan diisi dengan beberapa pasangan nilai, program menggunakan loop for untuk mencetak nilai dari setiap pasangan. Hasilnya adalah mencetak nilai-nilai tersebut ke layar tanpa nomor indeks array tertentu.

#### Perbedaan Dari Array dan Map:

- Array cocok digunakan ketika kita tahu ukuran data yang akan disimpan, sementara map lebih fleksibel karena dapat menyesuaikan ukurannya.
- Array diakses menggunakan indeks numerik, sementara map diakses menggunakan kunci unik untuk mendapatkan nilai yang terkait.
- Map lebih cocok untuk situasi di mana hubungan antara kunci dan nilai penting, sedangkan array digunakan untuk kumpulan data dengan indeks numerik.

Singkatnya, array cocok untuk situasi dengan data yang memiliki ukuran tetap dan diakses secara numerik, sementara map lebih fleksibel dan berguna untuk data yang memiliki hubungan kunci-nilai yang unik.

## Kesimpulan

Pemahaman tipe data, struktur data, dan konsep class/struct merupakan dasar yang penting dalam pemrograman. Tipe data primitif menyediakan dasar untuk menyimpan informasi, tipe data abstrak memberikan fleksibilitas, dan tipe data koleksi memungkinkan pengelolaan data yang terstruktur. Class dan struct memberikan kemampuan untuk membuat struktur data yang kompleks, sementara array dan map menyediakan cara penyimpanan yang berbeda untuk data yang beragam. Program-program contoh memberikan implementasi praktis dari konsep-konsep ini.

## Referensi

[1] Paul J. Deitel and Harvey M. Deitel, C++20 Programming - Fundamentals to Advanced Features, 1st ed. Boston, MA, USA: Pearson, 2020.

[2] "cppreference", [Online]. Available: https://en.cppreference.com/w/. [Accessed: March 7, 2024].
