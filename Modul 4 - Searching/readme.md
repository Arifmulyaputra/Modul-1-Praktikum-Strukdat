# <h1 align="center">Laporan Praktikum Modul 4 Searching</h1>
<p align="center">2311110017 / Arif Mulya Putra / Sains Data</p>

## Dasar Teori

#### 1. Pengertian Searching
Searching adalah suatu algoritma yang digunakan untuk mencari data yang sesuai dengan kriteria yang diinginkan. Algoritma Searching terdiri atas dua jenis utama, yaitu Linear Searching dan Binary Searching.[1].

#### 2. Jenis Searching
##### - Sequential Search.

Sequential Search(pencarian    berurutan) dikenal juga sebagai pencarian linier. Sequential Searchmerupakan algoritma pencarian paling dasar dan paling sederhana yang bekerja menggunakan pendekatan bruteforce, mencoba segala   kemungkinan yang ada hingga target   yang diinginkan ditemukan. Sebagai contoh, mencari nilai 36 dari data array{12, 7, 30, 28, 2, 19, 36, 21, 16, 9}. Sequential Search dimulai dengan membandingkan/mencocokkan 36 dengan elemen pertama/`index[0]` yaitu 12,  karena 12 tidak sesuai dengan kriteria pencarian (12!= 36)  maka dilanjutkan dengan membandingkan 36 dengan elemen berikutnya hingga ditemukan elemen  yang cocok, yaitu pada `index[6]` dimana 36 == 36 [2].

##### - Binary Search

Algoritma Binary Searchbekerja dengan  menggunakan pendekatan devide and  conquer pada data array yang sudah  terurut (sorted), artinya algoritma Binary Search diawali dengan   mengurutkan (sorting) array terlebih  dahulu sebelum melakukan proses  pencarian (Goodrich et al, 2014).Setelah data array terurut proses   pencarian dimulai dengan perulangan  pertama untuk mencari elemen yang  posisinya berada di tengah array, kemudian membandingkan elemen tengah tersebut dengan kunci pencarian, jika  kunci pencarian lebih besar dari  elemen tengah, maka abaikan semua  elemen array yang berada di posisi  kiri lanjutkan perulangan kedua dengan mencari  elemen  tengah  pada arraysisi kanan saja dan dibandingkan lagi  dengan kunci pencarian. Namun apabila  kunci pencarian lebih kecil dari  elemen tengah maka abaikan semua  elemen array di posisi kanan dan  lanjutkan perulangan kedua dengan  mencari elemen tengah pada array sisi kiri lalu bandingkan dengan kunci pencarian. langkah-langkah ini dilakukan berulang sampai dengan ditemukan elemen tengah yang sama   dengan kunci pencarian atau elemen   telah habis dibandingkan [2]. 


## Guided 


### 1. Sequential Search

```C++
#include <iostream>

using namespace std;

int main ()
{
    int n = 10;
    int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};
    int cari = 10;
    bool ketemu = false;
    int i;

    // algoritma Sequential search
    for (i = 0; i < n; i++) 
    {
        if(data[i] == cari) 
        {
            ketemu = true;
            break;
        }
    }


    cout << "\t Program Sequential Search Sedeerhana\n" << endl;
    cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;

    if (ketemu)
    {
        cout << "\n angka "<< cari << " ditemukan pada indeks ke- " << i << endl;
    }
    else
    {
        cout << cari << " tidak dapat ditemukan pada data." << endl;
    }
    return 0;
}
```

Output:
![image](https://github.com/Arifmulyaputra/Struktur-Data-Assignment/assets/161549884/4834ad5f-48c6-46c8-89cb-e844f35c61f3)


Penjelasan:

- `int n = 10;`: deklarasi variabel n dengan tipe data int dan nilai inisial 10. Variabel n akan digunakan untuk menyimpan jumlah elemen yang akan digunakan dalam array data.
- `int data[n] = {9, 4, 1, 7, 5, 12, 4, 13, 4, 10};`: deklarasi array data dengan tipe data int dan jumlah elemen yang sama dengan nilai n. Array data akan digunakan untuk menyimpan data yang akan dicari.
- `int cari = 10;`: variabel cari dengan tipe data int dan nilai inisial 10. Variabel cari akan digunakan untuk menyimpan data yang akan dicari.
- `bool ketemu = false;`: variabel ketemu dengan tipe data bool dan nilai inisial false. Variabel ketemu akan digunakan untuk menyimpan flag yang akan menunjukkan apakah data yang dicari ditemukan atau tidak.
- `int i;`: variabel i dengan tipe data int. Variabel i akan digunakan untuk menyimpan indeks array data yang sedang diperiksa.
- `for (i = 0; i < n; i++)`: perulangan for yang akan dijalankan sebanyak n kali. Perulangan ini akan mengulangi setiap elemen array data.
- `if(data[i] == cari)`: percabangan yang akan dieksekusi jika data yang ada pada indeks i sama dengan data yang dicari.
- `ketemu = true;`:  untuk mengubah nilai variabel ketemu menjadi true jika data yang dicari ditemukan.
- `break;`:  untuk menghentikan perulangan for jika data yang dicari ditemukan.
- `cout << "\t Program Sequential Search Sedeerhana\n" << endl;`:  untuk menampilkan pesan "Program Sequential Search Sedeerhana" pada layar.
- `cout << "data: {9, 4, 1, 7, 5, 12, 4, 13, 4, 10}" << endl;`: untuk menampilkan data yang tersedia pada array data pada layar.
- `if (ketemu)`:  percabangan yang akan dieksekusi jika nilai variabel ketemu adalah true.
- `cout << "\n angka "<< cari << " ditemukan pada indeks ke- " << i << endl;`: untuk menampilkan pesan "angka [cari] ditemukan pada indeks ke- [i]" pada layar.
- `else`: percabangan yang akan dieksekusi jika nilai variabel ketemu adalah false.
- `cout << cari << " tidak dapat ditemukan pada data." << endl;`: untuk menampilkan pesan "cari tidak dapat ditemukan pada data." pada layar.
- `return 0;`: untuk mengakhiri program dengan nilai kembalian 0

### 2. Binary Search

```C++
#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int cari;

void selection_sort(int data[], int length) {
    int temp, min, i, j; 
    for(i = 0; i < length; i++) {
        min = i;
        for (j = i + 1; j < length; j++) {
            if(data[j] < data[min]) {
                min = j;
            }
        }
        temp = data[i];
        data[i] = data[min];
        data[min] = temp;
    }
}

void binarysearch(int data[], int length) {
    int awal, akhir, tengah, b_flag = 0;
    awal = 0;
    akhir = length - 1;
    while (b_flag == 0 && awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if(data[tengah] == cari) {
            b_flag = 1;
            break;
        } else if(data[tengah] < cari)
            awal = tengah + 1;
        else
            akhir = tengah - 1;
    }
    if(b_flag == 1)
        cout << "\n Data ditemukan pada index ke- " << tengah << endl;
    else
        cout << "\n Data tidak ditemukan\n";
}

int main() {
    int data[7] = {1, 8, 2, 5, 4, 9, 7};
    int length = sizeof(data) / sizeof(data[0]);

    cout << "\t BINARY SEARCH " << endl;
    cout << "\n Data : ";
    // Tampilkan data awal
    for(int x = 0; x < length; x++)
        cout << setw(3) << data[x];
    cout << endl;

    cout << "\n Masukkan data yang ingin anda cari : ";
    cin >> cari;

    cout << "\n Data diurutkan : ";
    // Urutkan data dengan selection sort
    selection_sort(data, length);

    // Tampilkan data setelah diurutkan 
    for(int x = 0; x < length; x++)
        cout << setw(3) << data[x];
    cout << endl;

    binarysearch(data, length);
    _getche();
    return EXIT_SUCCESS;
}
```
Output:
![image](https://github.com/Arifmulyaputra/Struktur-Data-Assignment/assets/161549884/7b8040e8-b139-4792-ad94-5ce2131a858d)

Penjelasan:

Program ini menggunakan algoritma selection sort dan binary search untuk mengurutkan dan mencari `data` dalam array data. Pengguna dapat memasukkan data yang ingin dicari, dan program akan menampilkan data yang telah diurutkan dan menunjukkan indeks dari data yang dicari.


## Unguided 

#### 1. Buatlah sebuah program untuk mencari sebuah huruf pada sebuah kalimat yang sudah di input dengan menggunakan Binary Search!

```C++
#include <iostream>
#include <string>

using namespace std;

int binarysearch(const string& str, char cariChar) {
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == cariChar) {
            return i;
        }
    }
    return -1;
}

int main() {
    string str;
    char cariChar;
    int indeks;

    cout << "Masukkan kalimat: ";
    getline(cin, str);

    if (str.empty()) {
        cout << "Kalimat kosong. Stop Program";
        return 1;
    }

    cout << "Masukkan huruf yang ingin dicari: ";
    cin >> cariChar;

    indeks = binarysearch(str, cariChar);

    if (indeks != -1) {
        cout << "Huruf '" << cariChar << "' ditemukan pada indeks ke-" << indeks + 1 << "." << endl;
    } 
    else {
        cout << "Huruf '" << cariChar << "' tidak ditemukan pada kalimat." << endl;
    }
    return 0;
}

```
#### Output:
![image](https://github.com/Arifmulyaputra/Struktur-Data-Assignment/assets/161549884/b245b216-e6fe-484b-8c9c-d90a649a7a68)


Penjelasan:

- `int main()` : deklarasi fungsi utama dari program C++.
- `string str;, char cariChar;, dan int indeks;`: variabel lokal dalam fungsi main(). Variabel str adalah string yang akan digunakan untuk menyimpan input dari pengguna. Variabel cariChar adalah karakter yang akan dicari dalam string. Variabel indeks akan menampung hasil pencarian karakter dalam string.
- `cout << "Masukkan kalimat: ";`: pesan yang akan dicetak ke layar, meminta pengguna untuk memasukkan kalimat.
- `getline(cin, str);`: cara untuk membaca satu baris teks dari input pengguna menggunakan getline(). Teks yang dimasukkan akan disimpan dalam variabel str.
- `if (str.empty())`: percabangan kondisional. Memeriksa apakah string yang dimasukkan oleh pengguna kosong atau tidak menggunakan metode empty() dari objek string str.
- `cout << "Kalimat kosong. Stop Program";`: Jika string kosong, pesan ini akan dicetak ke layar.
- `return 1;`: mengembalikan nilai 1 dari fungsi main(), yang menandakan bahwa program berhenti karena ada kesalahan.
- `cout << "Masukkan huruf yang ingin dicari: ";`: pesan yang meminta user untuk memasukkan karakter yang ingin dicari dalam kalimat.
- `cin >> cariChar;`: cara untuk membaca satu karakter dari input pengguna menggunakan cin. Karakter yang dimasukkan akan disimpan dalam variabel cariChar.
- `indeks = binarysearch(str, cariChar);`: pemanggilan fungsi binarysearch dengan argumen str (kalimat yang dimasukkan oleh pengguna) dan cariChar (karakter yang ingin dicari dalam kalimat).
- `return 0;`: mengembalikan nilai 0 dari fungsi main(), menandakan bahwa program berakhir dengan sukses.

#### 2. Buatlah sebuah program yang dapat menghitung banyaknya hurufvocal dalam sebuah kalimat!

```C++
#include <iostream>
#include <string>

using namespace std;

// Fungsi untuk menghitung jumlah huruf vokal dalam sebuah kalimat
int countVowels(const string& sentence) {
    int count = 0;
    for (char c : sentence) {
        // Mengubah setiap huruf menjadi lowercase untuk pencocokan yang tepat
        char lowercase_c = tolower(c);
        if (lowercase_c == 'a' || lowercase_c == 'e' || lowercase_c == 'i' || lowercase_c == 'o' || lowercase_c == 'u') {
            count++;
        }
    }
    return count;
}

int main() {
    string sentence;

    cout << "Masukkan sebuah kalimat: ";
    getline(cin, sentence);

    int vowelCount = countVowels(sentence);

    cout << "Jumlah huruf vokal dalam kalimat tersebut adalah: " << vowelCount << endl;

    return 0;
}

```
Output:
![image](https://github.com/Arifmulyaputra/Struktur-Data-Assignment/assets/161549884/520d1068-d39a-4677-bd25-17ad3e4ab1bc)


Penjelasan:

- #include <iostream>: Library untuk input dan output.
- #include <string>: Library untuk menggunakan tipe data string.
- using namespace std;: Menggunakan namespace std agar tidak perlu menuliskan std:: sebelum setiap objek dari standard library.
- int countVowels(const string& sentence): Fungsi untuk menghitung jumlah huruf vokal dalam sebuah kalimat.
- for (char c : sentence): Looping melalui setiap karakter dalam kalimat.
- char lowercase_c = tolower(c);: Mengubah setiap huruf menjadi lowercase untuk pencocokan yang tepat.
- if (lowercase_c == 'a' || lowercase_c == 'e' || lowercase_c == 'i' || lowercase_c == 'o' || lowercase_c == 'u'): Memeriksa apakah karakter tersebut merupakan huruf vokal.
- int vowelCount = countVowels(sentence);: Memanggil fungsi countVowels untuk menghitung jumlah huruf vokal dalam kalimat.
- cout: Menampilkan jumlah huruf vokal dalam kalimat.

#### 3. Diketahui data = 9, 4, 1, 4, 7, 10, 5, 4, 12, 4. Hitunglah berapa banyak angka 4 dengan menggunakan algoritma Sequential Search!

```C++
#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menghitung berapa kali angka 4 muncul dalam data menggunakan Sequential Search
int countOccurrences(const vector<int>& data, int target) {
    int count = 0;
    for (int num : data) {
        if (num == target) {
            count++;
        }
    }
    return count;
}

int main() {
    // Data yang diberikan
    vector<int> data = {9, 4, 1, 4, 7, 10, 5, 4, 12, 4};

    // Angka yang ingin dicari
    int target = 4;

    // Menghitung berapa kali angka 4 muncul dalam data
    int occurrences = countOccurrences(data, target);

    cout << "Jumlah kemunculan angka 4 dalam data adalah: " << occurrences << endl;

    return 0;
}

```
#### Output:
![Uploading image.png…]()


Penjelasan:

- #include <iostream>: Library untuk input dan output.
- #include <vector>: Library untuk menggunakan tipe data vector.
- using namespace std;: Menggunakan namespace std agar tidak perlu menuliskan std:: sebelum setiap objek dari standard library.
- int countOccurrences(const vector<int>& data, int target): Fungsi untuk menghitung berapa kali angka 4 muncul dalam data menggunakan Sequential Search.
- for (int num : data): Looping melalui setiap elemen dalam data.
- if (num == target): Memeriksa apakah elemen tersebut sama dengan angka yang dicari.
- int occurrences = countOccurrences(data, target);: Memanggil fungsi countOccurrences untuk menghitung berapa kali angka 4 muncul dalam data.
cout: Menampilkan jumlah kemunculan angka 4 dalam data.

## Kesimpulan
Searching merupakan proses pencarian data yang sesuai dengan kriteria yang ditentukan. Dua jenis utama dari algoritma searching adalah Sequential Search dan Binary Search. Sequential Search melakukan pencarian secara berurutan, sementara Binary Search menggunakan pendekatan divide and conquer pada data yang sudah terurut. Sequential Search cocok untuk data yang tidak terurut, sementara Binary Search lebih efisien untuk data yang terurut karena memanfaatkan sifat data yang terurut untuk proses pencarian yang lebih cepat.

## Referensi

[1] Wanra Tarigan. *Algoritma Pemrograman dan Struktur Data*. Jawa Tengah: Aeureka Media Aksara. 2022

[2] Meidyan Permata Putri, Guntoro Barovih, Rezania Agramanisti Azdy, Yuniansyah, Andri Saputra, Yesi Sriyeni, Arsia Rini, Fadhila Tangguh Admojo. *Algoritma dan Struktur Data*. Bandung: Widina Bhakti Persada. 2022
