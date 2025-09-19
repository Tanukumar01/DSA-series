#include<iostream>

using namespace std;

int main(){
    int n = 7;
    for(int i = 0; i<n ;i++){
        cout<<"*";
    } 
    cout<<endl;
        for(int i = 0; i<n+2; i++){
            int s = n/2;
           for(int j = 0; j<n; j++){
              if(j == s){
                cout<<"e";
              }
              cout<<" ";
           }
           cout<<endl;
        }
        
        for(int i = 0, k = n; i<n/2+1; i++,k-=2){
            for(int j = 0; j<i; j++){
                cout<<" ";
            }
            for(int j = 0; j<k; j++){
                cout<<"*";
            }
            cout<<endl;
        }
}