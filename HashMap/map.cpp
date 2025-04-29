#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];

    cout << "Enter the elements of the array:\n";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Precompute frequency
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        mp[arr[i]]++;
    }

    int q;
    cout << "Enter the number of queries: ";
    cin >> q;

    while (q--) {
        int number;
        cout << "Enter the number to search: ";
        cin >> number;
        cout << "Number occurred " << mp[number] << " times\n";
    }

    return 0;
}
