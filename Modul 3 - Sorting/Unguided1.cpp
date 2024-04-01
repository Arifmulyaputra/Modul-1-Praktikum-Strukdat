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
