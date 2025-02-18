#include<bits/stdc++.h>

using namespace std;

int main(){

    int size = 4;
    int ar[size] = {2,3,4,5};
     vector<int>result(0,1);
    for(int i=0;i<size;i++){
        for(int j =0;j<size;j++){
           if(i!=j){
          result[i]*=ar[j];
            
        
        }

    }  cout<<result[i];
} return 0;

    
}