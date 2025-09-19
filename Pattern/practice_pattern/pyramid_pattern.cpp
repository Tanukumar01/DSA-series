#include<iostream>

using namespace std;

int main(){
    int n = 4;
    for(int i = 0; i<n; i++){
       
        for(int j = 0; j<n-i-1; j++){   // printing spaces
            cout<<" ";
        }
        int num = 1;
        for(int j = 0; j<=i; j++){   // for printing left side number 
            cout<<num;
            num++;
        }
        // for right side number 
        for(int j = i; j>=1; j--){
           cout<<j;
        }
        cout<<endl;
    }
}