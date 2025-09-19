#include<iostream>

using namespace std;
int main(){
    int n = 4;

    for(int i = 0; i<=n; i++){
      for(int j = 0; j<=n ; j++){
        if( j == 0){
            cout<<"@";
        }else if( i == n/2){
            cout<<"*";
        }else if(  i == n/2+1 && j+n == n+n-1  ){
            for(int j = 0; j<n; j++){
                cout<<"*";
            }
        }
       
     } cout<<endl;
        
    }
}
