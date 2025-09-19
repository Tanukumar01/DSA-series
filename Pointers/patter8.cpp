#include<iostream>

using namespace std;

int main(){
    int n = 5;

    for(int i = 0, k = n; i<n/2+1; i++, k -= 2){

        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        for(int j = 0; j<k; j++){
            cout<<"@";
        }
        cout<<endl;
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n ; j++){
            if( i == 0 || j == 0 || j == n){
                cout<<"*";
            }
            cout<<" ";
        }
        cout<<endl;
    }
}