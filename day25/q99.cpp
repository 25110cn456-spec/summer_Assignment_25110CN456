#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    string names[] = {"Sanskar", "Aman", "Riya", "Kunal"};
    int n = 4;

    sort(names, names + n);

    cout << "Sorted names: ";
    for (int i = 0; i < n; i++)
        cout << names[i] << " ";

    return 0;
}