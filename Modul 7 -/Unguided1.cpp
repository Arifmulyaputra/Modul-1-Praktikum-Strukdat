#include <iostream>
#include <stack>
#include <string>
#include <algorithm>

using namespace std;

// Fungsi untuk menghapus karakter non-alfabet dari string dan mengubah huruf kecil menjadi huruf besar
string preprocessString(const string& str) {
    string processedStr;
    for (char ch : str) {
        if (isalpha(ch)) {
            processedStr.push_back(toupper(ch));
        }
    }
    return processedStr;
}

// Fungsi untuk menentukan apakah sebuah kalimat adalah palindrom
bool isPalindrome(const string& str) {
    stack<char> charStack;
    int length = str.length();
    int i, mid = length / 2;

    // Masukkan setengah pertama karakter ke dalam stack
    for (i = 0; i < mid; ++i) {
        charStack.push(str[i]);
    }

    // Jika panjang string ganjil, abaikan karakter tengah
    if (length % 2 != 0) {
        ++i;
    }

    // Bandingkan karakter sisa dengan yang ada di stack
    while (i < length) {
        if (charStack.top() != str[i]) {
            return false;
        }
        charStack.pop();
        ++i;
    }

    return true;
}

int main() {
    string input;

    cout << "Masukkan kalimat: ";
    getline(cin, input);

    // Pra-pemrosesan string (hapus karakter non-alfabet dan ubah ke huruf besar)
    string processedInput = preprocessString(input);

    // Periksa apakah kalimat adalah palindrom
    if (isPalindrome(processedInput)) {
        cout << "Kalimat tersebut adalah palindrom.\n";
    } else {
        cout << "Kalimat tersebut bukan palindrom.\n";
    }

    return 0;
}
