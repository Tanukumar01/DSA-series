#include<bits/stdc++.h>

using namespace std;

int main(){
    vector<int> arr ={2,3,5,6,9};
    int k =2;  //find the missing number at index k
    vector<int>result;
    int st =1;
    int size = arr.size();
    int end = size;

    for(int i =0;i<size;i++){
        while(st<=end){
         if(st!=arr[i]){
            result.push_back(st);
        }
    }
      
      cout<<result[k];  
}
  return 0;
}