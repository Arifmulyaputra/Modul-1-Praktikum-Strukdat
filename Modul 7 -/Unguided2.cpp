#include <iostream>
#include <stack>
#include <string>

using namespace std;

// Fungsi untuk membalikkan urutan kata dalam sebuah kalimat
string reverseSentence(const string& sentence) {
    string reversedSentence;
    stack<string> wordStack;

    // Memisahkan kata-kata dalam kalimat dan memasukkan ke dalam stack
    size_t start = 0, end;
    while ((end = sentence.find(' ', start)) != string::npos) {
        wordStack.push(sentence.substr(start, end - start));
        start = end + 1;
    }
    wordStack.push(sentence.substr(start)); // Memasukkan kata terakhir

    // Membuat kalimat baru dengan urutan kata yang dibalik
    while (!wordStack.empty()) {
        reversedSentence += wordStack.top() + " ";
        wordStack.pop();
    }

    return reversedSentence;
}

int main() {
    string inputSentence;

    cout << "Masukkan kalimat minimal 3 kata: ";
    getline(cin, inputSentence);

    string reversedSentence = reverseSentence(inputSentence);

    cout << "Kalimat setelah dibalik: " << reversedSentence << endl;

    return 0;
}
