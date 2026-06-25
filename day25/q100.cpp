#include <iostream>
#include <algorithm>
using namespace std;

bool compare(string a, string b) {
    return a.length() < b.length();
}

int main() {
    string words[] = {"apple", "hi", "banana", "cat"};
    int n = 4;

    sort(words, words + n, compare);

    cout << "Words sorted by length: ";
    for (int i = 0; i < n; i++)
        cout << words[i] << " ";

    return 0;
}