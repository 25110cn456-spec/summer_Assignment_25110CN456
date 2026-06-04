#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int start, end;

    cout << "Enter start and end of range: ";
    cin >> start >> end;

    cout << "Armstrong numbers between " << start << " and " << end << " are:\n";

    for (int num = start; num <= end; num++) {
        int temp = num, digits = 0;
        double sum = 0;

        // Count digits
        int n = temp;
        while (n > 0) {
            digits++;
            n /= 10;
        }

        // Calculate sum of powers of digits
        n = temp;
        while (n > 0) {
            int digit = n % 10;
            sum += pow(digit, digits);
            n /= 10;
        }

        if (sum == num)
            cout << num << " ";
    }

    return 0;
}