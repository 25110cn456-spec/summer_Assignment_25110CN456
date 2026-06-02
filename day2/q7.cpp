#include <iostream>
using namespace std;

int main() {
    int num, product = 1;

    cout << "Enter a number: ";
    cin >> num;

    num = abs(num); // Handle negative numbers

    while (num > 0) {
        int digit = num % 10;  // Extract last digit
        product *= digit;      // Multiply with product
        num /= 10;             // Remove last digit
    }

    cout << "Product of digits = " << product << endl;

    return 0;
}