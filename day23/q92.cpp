#include <iostream>
#include <unordered_map>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    unordered_map<char, int> freq;

    for (char ch : str) {
        if (ch != ' ')
            freq[ch]++;
    }

    char maxChar;
    int maxCount = 0;

    for (auto pair : freq) {
        if (pair.second > maxCount) {
            maxCount = pair.second;
            maxChar = pair.first;
        }
    }

    cout << "Maximum occurring character: " << maxChar << endl;
    cout << "Frequency: " << maxCount << endl;

    return 0;
}