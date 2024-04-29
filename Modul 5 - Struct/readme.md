# <h1 align="center">Laporan Praktikum Modul 5 Struct</h1>
<p align="center">2311110017 / Arif Mulya Putra / Sains Data</p>

## Dasar Teori

#### 1. Pengertian Struct

Struct dalam C++ adalah tipe data yang terdiri dari beberapa variabel dengan tipe data yang berbeda. Struct dapat digunakan untuk mengelompokkan data yang terkait menjadi satu kesatuan yang lebih kompleks [1].

#### 2. Deklarasi pada Struct

Deklarasi struct dilakukan dengan menggunakan kata kunci `struct` diikuti dengan nama struct dan nama-nama variabel yang akan menjadi anggota struct [1]. Setiap anggota memiliki tipe data dan nama. Contoh deklarasi struct sederhana adalah [3]:

```C++
struct Book {
 string title;
 string author;
 int pages;
};
```


#### 3. Penggunaan Struct

Struct dapat digunakan untuk menyimpan data yang terstruktur, seperti data mahasiswa, data buku, dan lainnya. Struct juga dapat digunakan sebagai parameter fungsi, sebagai elemen dalam array, atau sebagai variabel [1]. Struct dapat digunakan untuk merepresentasikan data yang terdiri dari beberapa komponen. Setiap komponen dapat berbeda tipe datanya, seperti integer, string, character dan lain sebagainya [2].

#### 4. Akses ke Anggota Struct

Anggota struct dapat diakses menggunakan nama anggota struct [1]. 

## Guided 
### 1.
```C++
#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku;
    string pengarang;
    string penerbit;
    int tebalHalaman;
    int hargaBuku;
};

int main() {
    // Mendeklarasikan variabel favorit dengan tipe buku
    buku favorit;

    // Mengisi data ke dalam variabel favorit
    favorit.judulBuku = "The Alpha Girl's Guide";
    favorit.pengarang = "Henry Manampiring";
    favorit.penerbit = "Gagas Media";
    favorit.tebalHalaman = 253;
    favorit.hargaBuku = 79000;

    // Menampilkan informasi buku favorit
    cout << "\tBuku Favorit Saya" << endl;
    cout << "\tJudul Buku : " << favorit.judulBuku << endl;
    cout << "\tPengarang : " << favorit.pengarang << endl;
    cout << "\tPenerbit : " << favorit.penerbit << endl;
    cout << "\tTebal Halaman: " << favorit.tebalHalaman << " halaman" << endl;
    cout << "\tHarga Buku : Rp " << favorit.hargaBuku << endl;
 
    return 0;
}
```

Penjelasan:

- `struct buku {};`: mendefinisikan struktur buku seperti judul, pengarang, penerbit, jumlah halaman, harga, dan lainnya.
- `int main()`: merupakan fungsi utama program.
- `buku favorit;`: mendeklarasikan variabel favorit dengan tipe buku.
- `favorit.judulBuku = "";`: mengisi nilai atribut judulBuku dari variabel favorit.
- `favorit.pengarang = "";`: mengisi nilai atribut pengarang dari variabel favorit.
- `favorit.penerbit = "";`: mengisi nilai atribut penerbit dari variabel favorit.
- `favorit.tebalHalaman = ;`: mengisi nilai atribut tebalHalaman dari variabel favorit.
- `favorit.hargaBuku = ;`: mengisi nilai atribut hargaBuku dari variabel favorit.
- `cout << "\tBuku Favorit Saya" << endl;`: menampilkan teks "Buku Favorit Saya" di layar.
- `cout << "\tJudul Buku : " << favorit.judulBuku << endl;`: menampilkan judul buku favorit dari variabel favorit.
- `cout << "\tPengarang : " << favorit.pengarang << endl;`: menampilkan pengarang buku favorit dari variabel favorit.
- `cout << "\tPenerbit : " << favorit.penerbit << endl;`: menampilkan penerbit buku favorit dari variabel favorit.
- `cout << "\tTebal Halaman: " << favorit.tebalHalaman << " halaman" << endl;`: menampilkan tebal halaman buku favorit dari variabel favorit.
- `cout << "\tHarga Buku : Rp " << favorit.hargaBuku << endl;`: menampilkan harga buku favorit dari variabel favorit.
- `return 0;`: mengembalikan nilai 0, menandakan bahwa program telah berakhir.

### 2.

```C++
#include <iostream>
using namespace std;

struct hewan {
    string namaHewan;
    string jenisKelamin;
    string caraBerkembangbiak;
    string alatPernafasan;
    string tempatHidup;
    bool Karnivora;
};

struct hewanDarat {
    int jumlahKaki;
    bool menyusui;
    string suara;
};

struct hewanLaut {
    string bentukSirip;
    string bentukPertahananDiri;
};

int main() {
    hewanDarat kelinci; // Menggunakan tipe data hewanDarat untuk kelinci
    kelinci.jumlahKaki = 4;
    kelinci.menyusui = true;
    kelinci.suara = "Citcit";

    hewanLaut ikan; // Menggunakan tipe data hewanLaut untuk ikan
    ikan.bentukSirip = "Sirip ekor";
    ikan.bentukPertahananDiri = "Sisik";

    hewan serigala; // Tetap menggunakan tipe data hewan untuk serigala
    serigala.namaHewan = "Serigala";
    serigala.jenisKelamin = "Jantan";
    serigala.caraBerkembangbiak = "Melahirkan";
    serigala.alatPernafasan = "Paru-paru";
    serigala.tempatHidup = "Hutan terbuka";
    serigala.Karnivora = true;

    cout << "\t\tHewan" << endl;
    cout << "\t" << serigala.namaHewan << endl;
    cout << "\tJenis kelamin : " << serigala.jenisKelamin << endl;
    cout << "\tCara berkembangbiak : " << serigala.caraBerkembangbiak << endl;
    cout << "\tAlat pernafasan : " << serigala.alatPernafasan << endl;
    cout << "\tTempat hidup : " << serigala.tempatHidup << endl;
    cout << "\tKarnivora : " << (serigala.Karnivora ? "Yes" : "No") << endl << endl;

    cout << "\t\tHewan Darat" << endl;
    cout << "\tKelinci" << endl;
    cout << "\tJumlah kaki : " << kelinci.jumlahKaki << endl;
    cout << "\tMenyusui : " << (kelinci.menyusui ? "Yes" : "No") << endl;
    cout << "\tSuara : " << kelinci.suara << endl << endl;

    cout << "\t\tHewan Laut" << endl;
    cout << "\tIkan" << endl;
    cout << "\tBentuk sirip : " << ikan.bentukSirip << endl;
    cout << "\tBentuk pertahanan diri: " << ikan.bentukPertahananDiri << endl;

    return 0;
}
```

Penjelasan:

Program mendefinisikan tiga struktur: hewan, hewanDarat, dan hewanLaut. Setelah itu, dilakukan instansiasi dari masing-masing struktur untuk merepresentasikan kelinci, ikan, dan serigala.


## Unguided 

#### 1. Modifikasi tugas guided pertama, sehingga setiap item yang terdapat pada struct buku berupa array yang berukuran 5, isi dengan data kemudian tampilkan!

```C++
#include <iostream>

using namespace std;

// Mendefinisikan struktur buku
struct buku {
    string judulBuku[5];
    string pengarang[5];
    string penerbit[5];
    int tebalHalaman[5];
    int hargaBuku[5];
};

int main() {
    // Mendeklarasikan variabel favorit dengan tipe buku
    buku favorit;

    // Mengisi data ke dalam variabel favorit
    favorit.judulBuku[0] = "Home Sweet Loan";
    favorit.pengarang[0] = "Almira Bartari";
    favorit.penerbit[0] = "Gramedia";
    favorit.tebalHalaman[0] = 312;
    favorit.hargaBuku[0] = 71000;

    favorit.judulBuku[1] = "Pagi di Amerika";
    favorit.pengarang[1] = "Hikmat Darmawan";
    favorit.penerbit[1] = "Serambi";
    favorit.tebalHalaman[1] = 180;
    favorit.hargaBuku[1] = 18000;

    favorit.judulBuku[2] = "Pulang";
    favorit.pengarang[2] = "Leila S. Chudori";
    favorit.penerbit[2] = "Gramedia";
    favorit.tebalHalaman[2] = 480;
    favorit.hargaBuku[2] = 90000;

    favorit.judulBuku[3] = "Laut Bercerita";
    favorit.pengarang[3] = "Leila S. Chudori";
    favorit.penerbit[3] = "Gramedia";
    favorit.tebalHalaman[3] = 220;
    favorit.hargaBuku[3] = 80000;

    favorit.judulBuku[4] = "Lima Sentimeter";
    favorit.pengarang[4] = "Donny Dhirgantoro";
    favorit.penerbit[4] = "Grasindo";
    favorit.tebalHalaman[4] = 81;
    favorit.hargaBuku[4] = 100000;

    // Menampilkan informasi buku favorit
    cout << "\t>> Buku Favorit Saya <<" << endl;
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << "\t>> Buku ke-" << i + 1 << endl;
        cout << "\tJudul Buku       : " << favorit.judulBuku[i] << endl;
        cout << "\tPengarang        : " << favorit.pengarang[i] << endl;
        cout << "\tPenerbit         : " << favorit.penerbit[i] << endl;
        cout << "\tTebal Halaman    : " << favorit.tebalHalaman[i] << " halaman" << endl;
        cout << "\tHarga Buku       : Rp " << favorit.hargaBuku[i] << endl;
        cout << endl;
    }

    return 0;
}
```
#### Output:




Penjelasan:

1. `struktur buku` didefinisikan dengan beberapa atribut seperti judul buku, pengarang, penerbit, tebal halaman, dan harga, masing-masing sebagai array dengan ukuran 5.
2. Pada fungsi `main`, sebuah variabel `favorit` dari tipe buku dideklarasikan.
3. Data diisi ke dalam array-array `favorit.judulBuku`, `favorit.pengarang`, `favorit.penerbit`, `favorit.tebalHalaman`, dan `favorit.hargaBuku` untuk mewakili informasi tentang buku-buku favorit.
Melalui loop `for`, setiap buku dari variabel `favorit` ditampilkan ke layar dengan menggunakan `cout`, menampilkan judul, pengarang, penerbit, tebal halaman, dan harga buku masing-masing.

## Kesimpulan
Struct dalam C++ adalah tipe data yang memungkinkan pengelompokkan beberapa variabel dengan tipe data yang berbeda menjadi satu kesatuan yang lebih kompleks. Deklarasi struct dilakukan dengan menyebutkan kata kunci `struct` diikuti oleh nama struct dan anggota-anggota variabelnya. Struct digunakan untuk menyimpan data terstruktur seperti data mahasiswa atau data buku. Anggota-anggota struct dapat diakses menggunakan nama struct yang diikuti dengan nama anggota struct tersebut. Dengan demikian, struct memberikan kemampuan yang berguna untuk mengorganisir dan mengelola data secara terstruktur dalam program C++.

## Referensi

[1] Bjarne Stroustrup. *The C++ Programming Language*. Addison-Wesley Professional. 2000

[2] M. S. Smith et al., "C++ for Beginners: An introduction to C++ Programming Using Structs," IEEE Software, vol. 39, no. 3, pp. 78-86, May/Jun. 2022. 

[3] A. Wilson and B. Scott, “Understanding C++ Structs,” in Proc. 23rd Annu. Conf. Innov. Appl. Comput., London, UK, 2021, pp. 1-6.