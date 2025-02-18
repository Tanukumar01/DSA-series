#include<bits/stdc++.h>

using namespace std ;

int main(){

    int n =5;
  
    for(int i=0; i<n; i++){
       
       //spaces
       for(int j =0;j<i;j++){
        cout<<" ";
       }
       //numbers
       
       for(int j =i+1;j<=n;j++){
        cout<<j;
       }

          
        cout<<endl;
    }
    
}