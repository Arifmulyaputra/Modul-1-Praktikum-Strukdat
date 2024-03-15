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
