#include <iostream>
#include <string>
#include <unordered_map>

int main() {
    std::string s;
    std::getline(std::cin, s);

    std::unordered_map<char, int> freq;
    for (char c : s) {
        if (c != ' ')
            freq[c]++;
    }

    char result = '\0';
    for (char c : s) {
        if (c != ' ' && freq[c] == 1) {
            result = c;
            break;
        }
    }

    if (result)
        std::cout << result;
    else
        std::cout << "No non-repeating character found";

    return 0;
}
