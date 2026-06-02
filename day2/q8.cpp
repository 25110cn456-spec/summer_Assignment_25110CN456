#include <iostream>
using namespace std;

int main() {
    int num, originalNum, reverse = 0, digit;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    while (num != 0) {
        digit = num % 10;
        reverse = reverse * 10 + digit;
        num /= 10;
    }

    if (originalNum == reverse)
        cout << originalNum << " is a Palindrome Number.";
    else
        cout << originalNum << " is not a Palindrome Number.";

    return 0;
}