#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int temp = n, sum = 0, digits = 0;

    int t = n;
    while (t > 0) {
        digits++;
        t /= 10;
    }

    t = n;
    while (t > 0) {
        int rem = t % 10;
        sum += pow(rem, digits);
        t /= 10;
    }

    return sum == temp;
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (isArmstrong(num))
        cout << "Armstrong Number";
    else
        cout << "Not an Armstrong Number";

    return 0;
}