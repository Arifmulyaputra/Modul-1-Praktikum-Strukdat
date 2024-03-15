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
