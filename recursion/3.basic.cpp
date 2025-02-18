#include <iostream>
using namespace std;

int count = 0;  // Global variable

void fun() {
    if (count == 4) {  // Base case
        cout << count << endl;
        return;
    }
    cout << count << endl; // Print current count
    count++;  // Increment global count
    fun();  // Recursive call
}

int main() {
    fun();  // Call function
    return 0;
}