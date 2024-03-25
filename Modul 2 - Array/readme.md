# <h1 align="center">Laporan Praktikum Modul Array</h1>

<p align="center">Arif Mulya Putra</p>

## Dasar Teori

Array adalah suatu struktur yang terdiri dari sejumlah elemen yang memiliki tipe data yang sama. Elemen-elemen array tersusun secara sekuensial dalam memori komputer. Semua elemem array bertipe sama. Array cocok untuk organisasi kumpulan data homogen yang ukuran atau jumlah elemen maksimumnya telah diketahui dari awal. Homogen adalah bahwa setiap elemen dari sebuah array tertentu haruslah mempunyai tipe data yang sama [1].

## [Guided]

### 1. Array Multidimensi

```C++
#include <iostream>
using namespace std;
// PROGRAM INPUT ARRAY 3 DIMENSI 
int main ()
{
    // DEKLARASI ARRAY //
    int array[2][3][4];
    // INPUT ELEMEN 
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Input Array[" << x << "][" << y << "][" << z << "] = ";
                cin >> array[x][y][z];
            }
        }
        cout << endl;
    }
    // output array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << "Data Array[" << x << "][" << y << "][" << z << "] = " << array[x][y][z] << endl;
            }
        }
    }
    cout << endl;
    // Tampilam Array
    for (int x = 0; x < 2; x++)
    {
        for (int y = 0; y < 3; y++)
        {
            for (int z = 0; z < 3; z++)
            {
                cout << array[x][y][z] << ends;
            }
            cout << endl;
        }
        cout << endl;
    }
}
```

#### Output:



 Array multidimensi memiliki kesamaan dengan array satu dimensi dan
    dua dimensi, namun memiliki kapasitas memori yang lebih besar. Array ini
    digunakan untuk merepresentasikan array dengan dimensi lebih dari dua atau
    array yang memiliki lebih dari dua indeks, seperti array tiga dimensi, array
    empat dimensi, array lima dimensi, dan seterusnya.

### 2. Program Mencari Nilai Maksimal pada Array

```C++
#include <iostream>
using namespace std;

int main()
{
    int maks, a, i = 1, lokasi;
    cout << "Masukkan Panjang array: ";
    cin >> a;
    int array[a];
    cout << "Masukkan " << a << "angka\n";
    for (i = 0; i < a; i++)
    {
        cout << "Array ke-" << (i) << ": ";
        cin >> array[i];
    }
    maks = array [0];
    for (i = 0; i < a; i++)
    {
        if (array[i] > maks)
        {
            maks = array[i];
            lokasi = i;
        }
    }
    cout << " Nilai Maksimum adalah " << maks << " berada di Array ke " << lokasi << endl;
}
```

#### Output:



## Unguided

### 1. Buatlah program untuk menampilkan Output seperti berikut dengan data yang di input oleh user!


```C++
#include <iostream>

using namespace std;

int main() {
  int n;
  cout << "Masukkan jumlah elemen array: ";
  cin >> n;

  int arr[n];
  cout << "Masukkan data array: ";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  cout << "\nData Array: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << ", ";
  }

  cout << "\nNomor Genap: ";
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 == 0) {
      cout << arr[i] << ", ";
    }
  }

  cout << "\nNomor Ganjil: ";
  for (int i = 0; i < n; i++) {
    if (arr[i] % 2 != 0) {
      cout << arr[i] << " ";
    }
  }

  cout << endl;

  return 0;
}
```

#### Output:



Deklarasi Variabel dan Input Pengguna: Program dimulai dengan mendeklarasikan variabel n untuk menyimpan jumlah elemen array yang akan dimasukkan oleh pengguna. Pengguna diminta untuk memasukkan jumlah elemen array tersebut.

Membuat dan Mengisi Array: Program membuat array arr dengan ukuran n. Selanjutnya, pengguna diminta untuk memasukkan nilai-nilai elemen array satu per satu menggunakan loop for.

Menampilkan Data Array: Setelah semua nilai-nilai array dimasukkan, program menampilkan data array tersebut ke layar menggunakan loop for.

Memisahkan Bilangan Genap: Program kemudian memisahkan bilangan genap dari array tersebut dengan menggunakan loop for. Setiap kali ditemukan bilangan genap, bilangan tersebut ditampilkan ke layar.

Memisahkan Bilangan Ganjil: Program melakukan hal yang serupa dengan bilangan ganjil, memisahkan dan menampilkan bilangan ganjil dari array tersebut.

### 2. Buatlah program Input array tiga dimensi (seperti pada guided) tetapi jumlah atau ukuran elemennya di inputkan oleh user!

#### Contoh Program

```C++
#include <iostream>

using namespace std;

int main() {
  int m, n, o;

  cout << "Masukkan jumlah baris array: ";
  cin >> m;

  cout << "Masukkan jumlah kolom array: ";
  cin >> n;

  cout << "Masukkan jumlah layer array: ";
  cin >> o;

  int arr[m][n][o];

  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < o; k++) {
        cout << "Masukkan data array [" << i << "][" << j << "][" << k << "]: ";
        cin >> arr[i][j][k];
      }
    }
  }

  cout << "\nData Array:" << endl;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      for (int k = 0; k < o; k++) {
        cout << arr[i][j][k] << " ";
      }
      cout << endl;
    }
    cout << endl;
  }

  return 0;
}
```

#### Output:



Deklarasi Variabel dan Input Pengguna: Program dimulai dengan mendeklarasikan variabel m, n, dan o untuk menyimpan jumlah baris, kolom, dan layer array tiga dimensi. Pengguna diminta untuk memasukkan jumlah baris, kolom, dan layer array tersebut.

Membuat dan Mengisi Array: Program membuat array tiga dimensi arr[m][n][o]. Selanjutnya, pengguna diminta untuk memasukkan nilai-nilai elemen array satu per satu menggunakan tiga level nested loop for.

Menampilkan Data Array: Setelah semua nilai-nilai array dimasukkan, program menampilkan seluruh array ke layar menggunakan tiga level nested loop for. Ini memastikan bahwa setiap elemen array ditampilkan sesuai dengan struktur array tiga dimensi yang sudah ditentukan.

### 3. Buatlah program menu untuk mencari nilai Maksimum, Minimum dan Nilai rata – rata dari suatu array dengan input yang dimasukan oleh user!

```C++
#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Masukkan jumlah elemen array: ";
    cin >> n;

    int arr[n];

    cout << "Masukkan " << n << " angka:\n";
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }


    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    double average = static_cast<double>(sum) / n;

    cout << "Nilai Maksimum: " << max << endl;
    cout << "Nilai Minimum: " << min << endl;
    cout << "Nilai Rata-rata: " << average << endl;

    return 0;
}
```

#### Output:



Deklarasi Variabel dan Input Pengguna: Program dimulai dengan mendeklarasikan variabel n untuk menyimpan jumlah elemen array yang akan dimasukkan oleh pengguna. Selanjutnya, program meminta pengguna untuk memasukkan jumlah elemen array tersebut.

Membuat dan Mengisi Array: Setelah jumlah elemen array dimasukkan, program membuat array arr dengan ukuran sesuai dengan nilai n. Pengguna diminta untuk memasukkan nilai-nilai elemen array satu per satu menggunakan loop for.

Mencari Nilai Maksimum: Program mencari nilai maksimum dari array tersebut dengan menggunakan loop for. Nilai maksimum diinisialisasi dengan elemen pertama dari array, kemudian setiap elemen array dibandingkan dengan nilai maksimum saat ini, dan jika ditemukan nilai yang lebih besar, nilai maksimum diperbarui.

Mencari Nilai Minimum: Langkah yang sama dilakukan untuk mencari nilai minimum dari array. Nilai minimum diinisialisasi dengan elemen pertama dari array, kemudian setiap elemen array dibandingkan dengan nilai minimum saat ini, dan jika ditemukan nilai yang lebih kecil, nilai minimum diperbarui.

Menghitung Nilai Rata-Rata: Program menghitung nilai rata-rata dari array tersebut dengan menjumlahkan semua nilai-nilai elemen array dan membaginya dengan jumlah elemen array.

Menampilkan Hasil: Setelah semua perhitungan selesai, nilai maksimum, minimum, dan rata-rata dari array tersebut ditampilkan ke layar menggunakan cout.

## Referensi

[1]M. A. Pratama, “STRUKTUR DATA ARRAY DUA DIMENSI  PADA PEMROGRAMAN C++”, 29-Mar-2020. [Online]. Available: osf.io/vyech.