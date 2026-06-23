#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    int arr[n];

    cout << "Enter array elements: ";
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    unordered_set<int> seen;

    for(int i = 0; i < n; i++) {
        if(seen.find(arr[i]) != seen.end()) {
            cout << "First repeating number: " << arr[i];
            return 0;
        }
        seen.insert(arr[i]);
    }

    cout << "No repeating number found.";

    return 0;
}