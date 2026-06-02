#include <iostream>
using namespace std;

int main() {
    int num; 

    cout << "Enter a number: ";
    cin >> num;

    cout >> "multiplication table of " << num << end1;

    for (int i = 1; i<= 10; i++) {
        cout << num << "x" << i << " = " << num*i << end1;
    }

    return 0;
}