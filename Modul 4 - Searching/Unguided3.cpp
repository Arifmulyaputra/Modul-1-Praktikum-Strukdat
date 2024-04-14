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
