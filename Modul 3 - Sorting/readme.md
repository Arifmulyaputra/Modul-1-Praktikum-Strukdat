# <h1 align="center">Laporan Praktikum Modul 3 Sorting</h1>
<p align="center">2311110017 / Arif Mulya Putra / Sains Data</p>

## Dasar Teori

#### 1. Pengertian Sorting
Sorting merupakan proses menyusun elemen–elemen dari masukan awal acak  menjadi tertata dengan urutan tertentu [1].

#### 2. Jenis Sorting Berdasar Data Terurutnya
2.1. Ascending Sort merupakan pengurutan dari data yang terkecil ke data terbesar, singkatnya urut naik. 
Contoh: "1, 2, 3", "A, B, C" [2].

2.2. Descending Sort merupakan pengurutan dari data yang terbesar ke data terkecil, singkatnya urut turun. 
Contoh: "3, 2, 1", "C, B, A" [2].

#### 3. Macam-macam Algoritma Sorting
3.1. Insertion Sort adalah algoritma pengurutan yang bekerja dengan cara yang mirip dengan bermain kartu dengan tangan. Tidak seperti algoritma sort bubble atau algoritma sort lainnya, algoritma ini sangat sederhana dan mudah diperaktekan. Jika Anda memiliki banyak data yang diurutkan, algoritma ini sangat cocok untuk digunakan [4].

3.2. Bubble Sort adalah algoritma yang didasarkan pada gelembung sabun yang terapung di atas air. Ini terjadi karena berat jenis gelembung sabun lebih ringan daripada berat jenis air. Apabila larik terurut diinginkan naik, elemen larik yang paling kecil diapungkan ke atas melalui proses pertukaran, atau arah perbandingan dilakukan dari belakang [3].
 

3.3. Selection Sort adalah algoritma pengurutan sederhana digunakan untuk mencari elemen terkecil atau terbesar dalam array dan menukar posisinya dengan elemen pertama. Kemudian, algoritma ini mencari elemen terkecil atau terbesar berikutnya dalam sisa array yang belum terurut dan menukar posisinya dengan elemen kedua. Sampai seluruh array terurut, prosedur ini diulangi berulang kali [5].

## Guided 


### 1. Mengurutkan secara ascending untuk data numerik bertipe double menggunakan Algoritma Bubble Sort

```C++
#include <iostream>

using namespace std;

void bubble_sort(double arr[], int length){
    bool not_sorted = true;
    int j=0;
    double tmp;

    while (not_sorted){
        not_sorted = false;
        j++;
        for (int i = 0; i < length - j; i++){
            if (arr[i] > arr[i + 1]) {
                tmp = arr[i];
                arr[i] = arr[i + 1];
                arr[i + 1] = tmp;
                not_sorted = true;
            }//end of it
        }//end of for loop
    }//end of while loop
}//end of bubble_sort

void print_array(double a[], int length) {

    for(int i=0; i<length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {

    int length = 5;
    double a[] = {22.1, 15.3, 8.2, 33.21, 99,99};
    
    cout << "Urutan bilangan sebelum sorting: " << endl;
    print_array(a, length);

    bubble_sort(a, length);

    cout << "\nUrutan bilangan setelah sorting: " << endl;
    print_array(a, length);
}
```
Program tersebut menggunakan algoritma Bubble Sort. Dalam program ini, terdapat fungsi `bubble_sort` yang menerima array bilangan bertipe double dan panjang array sebagai parameter. Fungsi ini menggunakan pendekatan Bubble Sort untuk mengurutkan elemen-elemen array secara ascending. Variabel `not_sorted` digunakan sebagai penanda apakah array masih dalam keadaan terurut atau tidak.

Selain itu, terdapat fungsi `print_array` yang digunakan untuk mencetak elemen-elemen array. Di dalam fungsi `main`, sebuah array `a` yang berisi bilangan double diinisialisasi, kemudian array tersebut dicetak sebelum proses sorting. Setelah itu, fungsi `bubble_sort` dipanggil untuk mengurutkan array, dan hasilnya dicetak kembali setelah proses sorting selesai.

Dengan menggunakan algoritma Bubble Sort dalam program ini, elemen-elemen array disusun ulang hingga terurut secara ascending. Program ini memberikan contoh konkret bagaimana Bubble Sort dapat diimplementasikan dalam pengurutan array bilangan double.


### 2. Mengurutkan karakter secara descending (dari terbesar hingga terkecil) menggunakan Algoritma Insertion Sort

```C++
#include <iostream>

using namespace std;

void insertion_sort(char arr[],  int length) {
    int i, j;
    char tmp;

    for (i = 1; i < length; i++) {
        j = i;
        while ((j > 0) && (arr[j] < arr[j - 1])) {
            tmp = arr[j];
            arr[j] = arr[j - 1];
            arr[j - 1] = tmp;
            j--;
        }// end of while loop
    }// end of for loop
}

void print_array(char a[], int length) {

    for(int i=0; i < length; i++) {
        cout << a[i] << "\t";
    }
    cout << endl;
}

int main() {

    int length = 6;
    char a [length] = {'c', 'f', 'a', 'z', 'd', 'p'};

    cout << "Urutan karakter sebelum sorting: " << endl;
    print_array(a, length);

    insertion_sort(a, length);

    cout << "\nUrutan karakter setelah sorting: " << endl;
    print_array(a, length);
}
```
Program tersebut menggunakan algoritma Insertion Sort. Dalam program ini, terdapat fungsi `insertion_sort` yang menerima array karakter dan panjang array sebagai parameter. Fungsi ini mengimplementasikan algoritma Insertion Sort untuk mengurutkan karakter-karakter dalam array. Proses pengurutan dilakukan dengan membandingkan karakter pada indeks saat ini dengan karakter sebelumnya, kemudian menukar posisi jika diperlukan sehingga array menjadi terurut.

Selain itu, terdapat fungsi `print_array` yang digunakan untuk mencetak elemen-elemen array. Di dalam fungsi `main`, sebuah array `a` yang berisi karakter diinisialisasi, kemudian array tersebut dicetak sebelum proses sorting. Setelah itu, fungsi `insertion_sort` dipanggil untuk mengurutkan array karakter, dan hasilnya dicetak kembali setelah proses sorting selesai.

Dengan menggunakan algoritma Insertion Sort dalam program ini, karakter-karakter dalam array disusun ulang hingga terurut sesuai urutan yang benar. Insertion Sort dapat diimplementasikan dalam pengurutan array karakter.

## Unguided 

#### 1. Kelas S1 IF 2016 G memiliki 5 mahasiswa. Pada akhir semester mereka menerima lembar Indeks Prestasi Semester (IPS), masing-masing mahasiswa tersebut memiliki IPS sebagai berikut: {3.8, 2.9, 3.3, 4.0, 2.4}. Buatlah program untuk mengurutkan IPS mahasiswa tersebut dari yang terbesar hingga terkecil dengan menggunakan algoritma Selection Sort!

```C++
#include <iostream>
#include <vector>

using namespace std;

// Fungsi untuk menukar nilai dua elemen
void swap(double &a, double &b) {
    double temp = a;
    a = b;
    b = temp;
}

// Algoritma Selection Sort untuk mengurutkan IPS dari terbesar ke terkecil
void selectionSort(vector<double> &ips) {
    int n = ips.size();
    for (int i = 0; i < n - 1; ++i) {
        int max_idx = i;
        for (int j = i + 1; j < n; ++j) {
            if (ips[j] > ips[max_idx]) {
                max_idx = j;
            }
        }
        if (max_idx != i) {
            swap(ips[i], ips[max_idx]);
        }
    }
}

int main() {
    // Inisialisasi IPS mahasiswa
    vector<double> ips = {3.8, 2.9, 3.3, 4.0, 2.4};

    // Menampilkan IPS sebelum diurutkan
    cout << "IPS sebelum diurutkan:" << endl;
    for (double ip : ips) {
        cout << ip << " ";
    }
    cout << endl;

    // Mengurutkan IPS menggunakan Selection Sort
    selectionSort(ips);

    // Menampilkan IPS setelah diurutkan
    cout << "IPS setelah diurutkan:" << endl;
    for (double ip : ips) {
        cout << ip << " ";
    }
    cout << endl;

    return 0;
}

```
#### Output:
![image](https://github.com/Arifmulyaputra/Struktur-Data-Assignment/assets/161549884/2dc80830-0a5b-428e-b4e8-c99f9a12131a)


Penjelasan:

- #include <iostream>: Mendefinisikan header untuk input-output stream.
- #include <vector>: Mendefinisikan header untuk menggunakan struktur data vector.
- using namespace std;: Mendeklarasikan penggunaan namespace std agar tidak perlu menuliskan std:: di depan setiap fungsi dari library standard.
- void selectionSort(vector<double> &arr): Mendefinisikan fungsi selectionSort untuk mengurutkan vektor dari tipe double secara menaik.
- int n = arr.size();: Mendeklarasikan variabel n yang menyimpan panjang vektor.
- for (int i = 0; i < n - 1; ++i) { ... }: Looping untuk iterasi melalui elemen-elemen vektor.
- int minIndex = i;: Mendeklarasikan variabel minIndex untuk menyimpan indeks elemen terkecil.
- for (int j = i + 1; j < n; ++j) { ... }: Looping untuk mencari elemen terkecil di sisa vektor yang belum diurutkan.
- if (arr[j] > arr[minIndex]) { minIndex = j; }: Membandingkan elemen dengan indeks j dengan elemen terkecil saat ini.
- double temp = arr[minIndex]; arr[minIndex] = arr[i]; arr[i] = temp;: Menukar elemen terkecil dengan elemen pertama dari sisa vektor yang belum diurutkan.
- int main() { ... }: Fungsi utama dari program.
- vector<double> ips = {3.8, 2.9, 3.3, 4.0, 2.4};: Inisialisasi vektor ips yang berisi IPS mahasiswa.
- selectionSort(ips);: Memanggil fungsi selectionSort untuk mengurutkan vektor ips.
- for (double ip : ips) { cout << ip << " "; }: Melakukan loop untuk mencetak setiap elemen vektor ips setelah diurutkan.

#### 2. Pak RT memiliki 10 warga dengan nama: siti, situ, sana, ana, ani, caca, cici, dida, dodo, dan dadi. Supaya mudah dalam melakukan pencarian, Pak RT akan mengurutkan namanama tersebut sesuai dengan alfabet. Buatlah program untuk membantu Pak RT dengan menggunakan algoritma Bubble Sort!

```C++
##include <iostream>
#include <vector>
#include <algorithm> // Untuk menggunakan transform

using namespace std;

// Fungsi untuk mengonversi string menjadi lowercase
string toLower(string str) {
    transform(str.begin(), str.end(), str.begin(), ::tolower);
    return str;
}

// Fungsi untuk menukar dua string
void swap(string &a, string &b) {
    string temp = a;
    a = b;
    b = temp;
}

// Algoritma Bubble Sort untuk mengurutkan nama-nama warga sesuai alfabet
void bubbleSort(vector<string> &names) {
    int n = names.size();
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - i - 1; ++j) {
            // Membandingkan nama-nama dalam lowercase agar tidak terpengaruh huruf besar atau kecil
            if (toLower(names[j]) > toLower(names[j + 1])) {
                swap(names[j], names[j + 1]);
            }
        }
    }
}

int main() {
    // Inisialisasi nama-nama warga
    vector<string> names = {"siti", "situ", "sana", "ana", "ani", "caca", "cici", "dida", "dodo", "dadi"};

    // Menampilkan nama-nama sebelum diurutkan
    cout << "Nama-nama sebelum diurutkan:" << endl;
    for (const string &name : names) {
        cout << name << " ";
    }
    cout << endl;

    // Mengurutkan nama-nama menggunakan Bubble Sort
    bubbleSort(names);

    // Menampilkan nama-nama setelah diurutkan
    cout << "Nama-nama setelah diurutkan:" << endl;
    for (const string &name : names) {
        cout << name << " ";
    }
    cout << endl;

    return 0;
}

```
Output:
![image](https://github.com/Arifmulyaputra/Struktur-Data-Assignment/assets/161549884/9f85ef17-64b2-48be-98f4-e502e9c3453c)



Penjelasan:

- #include <iostream>, #include <vector>, #include <algorithm>: Menambahkan header file yang diperlukan untuk menggunakan input-output stream, vektor, dan fungsi transform dari STL C++.
- using namespace std;: Mendeklarasikan penggunaan namespace std untuk menghindari penulisan std:: sebelum setiap fungsi STL.
- string toLower(string str): Fungsi untuk mengonversi string menjadi lowercase. Ini akan membantu dalam membandingkan nama-nama tanpa memperdulikan huruf besar atau kecil.
- void swap(string &a, string &b): Fungsi untuk menukar dua string.
- void bubbleSort(vector<string> &names): Fungsi yang menerapkan algoritma Bubble Sort untuk mengurutkan nama-nama warga sesuai alfabet.
- int main(): Fungsi utama dari program.
- Inisialisasi vektor names dengan nama-nama warga.
- Menampilkan nama-nama sebelum diurutkan.
- Memanggil fungsi bubbleSort untuk mengurutkan nama-nama

#### 3. Buatlah program yang meminta user menginputkan suatu bilangan n dan meminta user untuk menginputkan sejumlah n karakter. Kemudian program akan melakukan sorting secara menaik (ascending) dan menurun (descending)!

```C++
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
    int n;
    cout << "Masukkan bilangan <n>: ";
    cin >> n;
    vector<char> arr(n);
    for (int i = 0; i < n; i++) {
        cout << "Karakter ke-" << i+1 << ": ";
        cin >> arr[i];
    }
    cout << "\nUrutan karakter sebelum sorting:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "    ";
    }
    sort(arr.begin(), arr.end());
    cout << "\nUrutan karakter setelah ascending sort:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "    ";
    }
    sort(arr.begin(), arr.end(), greater<char>());
    cout << "\nUrutan karakter setelah descending sort:\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << "    ";
    }
    return 0;
}
```
#### Output:
![image](https://github.com/Arifmulyaputra/Struktur-Data-Assignment/assets/161549884/c512f7ff-aba1-4fbf-b480-f2b3bd487738)


Penjelasan:

- `#include <iostream>` : Mendeklarasikan library input/output.
- `#include <algorithm>` : Mendeklarasikan library untuk algoritma umum.
- `#include <vector>` : Mendeklarasikan library untuk container dinamis.
- `using namespace std;` : Menggunakan nama dari namespace standar.
- `int n;` : Mendeklarasikan variabel `n` untuk menyimpan bilangan yang akan dimasukkan user.
- `cin >> n;` : Meminta user memasukkan bilangan `n`.
- `vector<char> arr(n);` : Mendeklarasikan vektor `arr` dengan kapasitas `n`.
- `for (int i = 0; i < n; i++)`: Looping untuk meminta user memasukkan `n` karakter.
- `cout << "Urutan karakter sebelum sorting:\n";` : Menampilkan pesan "Urutan karakter sebelum sorting:".
- `for (int i = 0; i < n; i++)` : Looping untuk menampilkan urutan karakter sebelum diurutkan.
- `sort(arr.begin(), arr.end());` : Mengurutkan elemen vektor `arr` dari elemen terkecil ke terbesar.
- `cout << "\nUrutan karakter setelah ascending sort:\n";` : Menampilkan pesan "Urutan karakter setelah ascending sort:".
- `for (int i = 0; i < n; i++)` : Looping untuk menampilkan urutan karakter setelah diurutkan secara ascending.
- `sort(arr.begin(), arr.end(), greater<char>());` : Mengurutkan elemen vektor `arr` dari elemen terbesar ke terkecil.
- `cout << "\nUrutan karakter setelah descending sort:\n";` : Menampilkan pesan "Urutan karakter setelah descending sort:".
- `for (int i = 0; i < n; i++)` : Looping untuk menampilkan urutan karakter setelah diurutkan secara descending.
`return 0;` : Mengembalikan nilai 0 ke sistem operasi.


## Kesimpulan
Dapat disimpulkan bahwa sorting adalah proses pengaturan elemen dalam suatu himpunan data dari keadaan acak menjadi terurut sesuai aturan tertentu. Terdapat dua jenis utama sorting, yaitu Ascending Sort (dari kecil ke besar) dan Descending Sort (dari besar ke kecil).

Selain itu, terdapat beberapa algoritma sorting yang umum digunakan seperti Insertion Sort, Bubble Sort, dan Selection Sort. Insertion Sort merupakan algoritma sederhana yang cocok untuk data dalam jumlah sedang. Namun, dari berbagai algoritma tersebut, Insertion Sort dianggap relevan karena kepraktisannya dalam implementasi.

Dengan demikian, walaupun terdapat beragam algoritma sorting, pemilihan Insertion Sort sebagai algoritma yang paling relevan dapat disesuaikan dengan kebutuhan spesifik pengurutan data, terutama dalam konteks kemudahan penerapan dan kinerja yang efisien.

## Referensi

[1] Nasution RA. *Sorting Menggunakan C++ Beserta Contohnya*. Diakses pada 30 Maret 2024. [online]. Available: https://www.kompasiana.com/rezaan2434/62bad3e20428246cf42d6482/sorting-menggunakan-c-beserta-contohnya.

[2] Rina Firliana, Patmi Kasih. *Algoritma & Pemrograman C++*. Nganjuk: Adjie Media Nusantara. 2018

[3] Arifin RW, Setiyadi D. *Algoritma Metode Pengurutan Bubble Sort dan Quick Sort Dalam Bahasa Pemrograman C++*. 2020

[4] Adinata. *Contoh Program Algoritma Insertion Sort C++ beserta penjelasan*. Diakses pada 30 Maret 2024. [online]. Available: https://midteknologi.com/blog/algoritma-insertion-sort/

[5] Laurentius Joandanu. *Selection Sort di C++*. Diakses pada 30 Maret 2024. [online]. Available: https://medium.com/@danuljoan/selection-sort-di-c-7de265eb23a#:~:text=Selection%20Sort%20adalah%20algoritma%20pengurutan,menukar%20posisinya%20dengan%20elemen%20pertama.
