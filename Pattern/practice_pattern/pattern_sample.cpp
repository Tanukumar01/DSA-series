#include<iostream>

using namespace std;

int main(){
    int n = 5;
    // top part 
    for(int i = 0, k = 1; i<n/2+1; i++, k+=2){
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
    // middle part 
    for(int i = 0; i<n-1 ; i++){
        for(int j = 0; j<n; j++){
          if(j<n-1){
            cout<<" ";
          }else{
            cout<<"@";
          }
        }
        for(int j = 0; j<n; j++){
          if(j<n-1){
            cout<<" ";
          }else{
            cout<<"@";
          }
        }
        cout<<endl;
    }
    //lower part 
    for(int i = 0, k = n; i<n/2+1; i++, k -= 2){
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        for(int j = 0; j<k; j++){
            if( j == n-1){
                cout<<"@";
            }else if(j<n-1){
                cout<<"*";
            }
        }
        for(int j = 0; j<=i; j++){
            cout<<" ";
        }
        for(int j = 0; j<n/2+1; j++){
            cout<<" ";
        }
        for(int j = 0; j<i; j++){
            cout<<" ";
        }
        for(int j = 0; j<k; j++){
            if( j == 0 && i == 0){
                cout<<"@";
            }else if(j>0 || i>0){
              cout<<"*";
            }
        }
        cout<<endl;
    }
}