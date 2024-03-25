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
