// // #include<bits/stdc++.h>
// // using namespace std;

// // void name(int i, int n) {
// //     if (i > n) {  // Base case to stop recursion
// //         return;
// //     }
// //     cout << "My-Name-is-baka" << endl;  // Print output with a newline
// //     name(i + 1, n);  // Recursive call
// // }

// // int main() {
// //     int n;
// //     cout << "Enter the number of times to print the message: ";
// //     cin >> n;
// //     name(1, n);
// //     return 0;
// // }

//<<--------- this is program to print number form N to 1--------->>

// #include<iostream>
// using namespace std;

// void name(int i , int n ){
//     if(i<n){
//         return;
//     }
//     cout<<i<<" ";
//     name(i-1,n);
// }

// int main(){
//     name(4,1);
//     return 0;
// }

//<<----- this is the program to print number form N to 1 without using num(i+1,n) function----->>

#include<bits/stdc++.h>

using namespace std;

void num(int i ,int n){
    if(i<1){
      return;  //base condtion
    }
    num(i-1,n);//recursive call the function (first go down to 1)
    cout<<i<<endl; // print on the way back jabh contion met ho jayege function reverse call krega 
}
int main(){
    num(4,4);
    return 0;
}