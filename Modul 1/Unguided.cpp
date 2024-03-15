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


