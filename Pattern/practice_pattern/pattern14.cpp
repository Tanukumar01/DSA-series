#include<iostream>

using namespace std;

int main(){
   int n = 7;
   
for(int i = 0, k = n; i<n/2+1; i++ , k -=2){
   for(int j = 1; j<=i; j++){
        cout<<'_';
    }
    // for(int j = 0; j<i; j++){
    //     cout<<" ";
    // }
    for(int j = 0; j<k; j++){
        cout<<"*";
    } for(int j = 1; j<=i; j++){
        cout<<'_';
    }
    cout<<endl;
}

}