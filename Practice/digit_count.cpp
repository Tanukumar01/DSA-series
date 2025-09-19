#include <bits/stdc++.h>
using namespace std;

int digitCount(int num) {
    if (num == 0) return 1;
    int count = 0;
    while (num > 0) {
        num /= 10;
        count++;
    }
    return count;
}

int main() {
    int num = 1234;
    for (int i = 0; i <= num; i++) {
        cout << "Number: " << i << " -> Digits: " << digitCount(i) << endl;
    }
    return 0;
}
 