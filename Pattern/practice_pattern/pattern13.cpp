#include<iostream>

using namespace std;

int main(){
    int n = 5;
    // upper part 
    for(int i =0, k = 1; i<(n+2)/2+1; i++, k += 2){
         for(int j = 0; j<n/2+1; j++){
            cout<<" ";
        }
        for(int j = 0; j<(n+2)/2-i; j++){
            cout<<" ";
        }

        for(int j =0; j<k; j++){
            cout<<"@";
        }
        cout<<endl;
    }
    // second upper part 
    for(int i  = 0; i<n/2+1; i++){
        for(int j = n/2; j>=i; j--){
            cout<<" ";
        }
        for(int j = 0; j<=i; j++){
        cout<<"*";
       }
       for(int j = 0; j<n; j++){
         if( i < n/2){
            cout<<" ";
         }else{
            cout<<"@";
         }
       }
       for(int j = 0; j<=i ; j++){
        cout<<"*";
       }
        cout<<endl;
    }
    // major lower part 
    for(int i = 0; i<n/2+1; i++){
        for(int j = 0; j<=i; j++){
            cout<<" ";
        }
        for(int j = n/2; j>i; j--){
            cout<<"*";
        }
        for(int j = 0; j<n; j++){
            cout<<" ";
        }
        for(int j = n/2; j>i; j--){
            cout<<"*";
        }
        cout<<endl;
    }
}