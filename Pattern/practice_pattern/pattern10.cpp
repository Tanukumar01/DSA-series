#include<iostream>

using namespace std;

int main(){
    int n = 9;

    for(int i = 0, k = 1; i<n/2+1; i++, k += 2){
        for(int j = 0; j<n; j++){
            cout<<" ";
        }
        for(int j = 0; j<n/2-i; j++){
            cout<<" ";
        }
        for(int j = 0; j<k; j++){
            cout<<"*";
        }
        cout<<endl;
    }
    for(int i = 0; i<n-1; i++){
       for(int j = 0; j<n; j++){
            cout<<" ";
        }
        for(int j = 0; j<n; j++){
            if(j == 0 || j == n-1){
               cout<<"@";
            }
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i = 0, k = n; i<n/2+1; i++, k -= 2){
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        for(int j = 0; j<k; j++){
            cout<<"*";
        }
        for(int j = 0; j<n; j++){
            cout<<" ";
        }
        
        for(int j = 0; j<n/2+i-1; j++){
            cout<<" ";
        }
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        for(int j = 0; j<k; j++){
            cout<<"*";
        }
        cout<<endl;
    }

}