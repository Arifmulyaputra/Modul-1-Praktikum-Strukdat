#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> H;
int ukuranHeap = -1;

int parent(int i) {
    return (i - 1) / 2;
}

int leftChild(int i) {
    return (2 * i) + 1;
}

int rightChild(int i) {
    return (2 * i) + 2;
}

void shiftUp(int i) {
    while (i > 0 && H[parent(i)] < H[i]) {
        swap(H[parent(i)], H[i]);
        i = parent(i);
    }
}

void shiftDown(int i) {
    int maxIndex = i;
    int l = leftChild(i);
    if (l <= ukuranHeap && H[l] > H[maxIndex]) {
        maxIndex = l;
    }
    int r = rightChild(i);
    if (r <= ukuranHeap && H[r] > H[maxIndex]) {
        maxIndex = r;
    }
    if (i != maxIndex) {
        swap(H[i], H[maxIndex]);
        shiftDown(maxIndex);
    }
}

void insert(int p) {
    ukuranHeap = ukuranHeap + 1;
    if (ukuranHeap < H.size()) {
        H[ukuranHeap] = p;
    } else {
        H.push_back(p);
    }
    shiftUp(ukuranHeap);
}

int extractMax() {
    int hasil = H[0];
    H[0] = H[ukuranHeap];
    ukuranHeap = ukuranHeap - 1;
    shiftDown(0);
    return hasil;
}

void changePriority(int i, int p) {
    int oldp = H[i];
    H[i] = p;
    if (p > oldp) {
        shiftUp(i);
    } else {
        shiftDown(i);
    }
}

int getMax() {
    return H[0];
}

void remove(int i) {
    H[i] = getMax() + 1;
    shiftUp(i);
    extractMax();
}

void bangunHeap() {
    int n;
    cout << "Masukkan jumlah elemen yang akan dimasukkan ke heap: ";
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int elemen;
        cout << "Masukkan elemen " << i + 1 << ": ";
        cin >> elemen;
        insert(elemen);
    }
}

int main() {
    bangunHeap();

    cout << "Antrian Prioritas: ";
    for (int i = 0; i <= ukuranHeap; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    cout << "Node dengan prioritas maksimum: " << extractMax() << "\n";
    
    cout << "Antrian prioritas setelah ekstraksi maksimum: ";
    for (int i = 0; i <= ukuranHeap; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    int indeks, prioritasBaru;
    cout << "Masukkan indeks untuk mengubah prioritas: ";
    cin >> indeks;
    cout << "Masukkan prioritas baru: ";
    cin >> prioritasBaru;
    changePriority(indeks, prioritasBaru);
    cout << "Antrian prioritas setelah perubahan prioritas: ";
    for (int i = 0; i <= ukuranHeap; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    cout << "Masukkan indeks untuk dihapus: ";
    cin >> indeks;
    remove(indeks);
    cout << "Antrian prioritas setelah menghapus elemen: ";
    for (int i = 0; i <= ukuranHeap; ++i) {
        cout << H[i] << " ";
    }
    cout << "\n";

    return 0;
}
