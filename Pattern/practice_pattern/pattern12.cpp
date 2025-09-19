#include<iostream>

using namespace std;

int main(){
    int n = 7;
// upper part
    for(int i = 0; i<n ; i++){
        for(int j = 0; j<=i; j++){
            cout<<"@";
        }
        for(int j = n-1; j>i; j--){
            cout<<" ";
        }
        for(int j = 0; j<n+2; j++){
            if(i == n-1 ){
              cout<<"*";
            }else{ 
                cout<<" ";
            }
        }
        
        for(int j = 0; j<n ; j++){
            if( i<n/2){
                cout<<" ";
            }else{
                cout<<"@";
            }
        }

    
        cout<<endl;
    }
    //lower part 
    for(int i = 0; i<n ; i++){
       for(int j = n-1; j>i; j--){
        cout<<"@";
       }
       // space
       for(int j = 0; j<=i; j++){
        cout<<" ";
       }
       // space
       for(int j = 0; j<n+2; j++){
        cout<<" ";
       }
       // @ pattern
       for(int j = 0; j<n ; j++){
            if( i>n/2-1){
                cout<<" ";
            }else{
                cout<<"@";
            }
        }
       cout<<endl;
    }
}