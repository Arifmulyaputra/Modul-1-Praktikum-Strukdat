#include <iostream>
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
