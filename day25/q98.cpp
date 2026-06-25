#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    string s1 = "hello";
    string s2 = "world";

    unordered_set<char> set1(s1.begin(), s1.end());

    cout << "Common characters: ";
    for (char c : s2) {
        if (set1.count(c)) {
            cout << c << " ";
            set1.erase(c); // avoid duplicates
        }
    }

    return 0;
}