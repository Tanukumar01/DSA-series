#include<bits/stdc++.h>
using namespace std;

void MoveZero(vector<int>&nums){
  int size = nums.size();
  int j = -1; 
  for(int i = 0; i<size; i++){
    if(nums[i]==0){
        j = i;
        break;
    }
  }
  for(int i  = j+1; i<size; i++){
    if(nums[i]!=0 && i>j){
        swap(nums[i],nums[j]);
        j++;
    }
  }
}

int main(){
 vector<int>nums = {1,0,2,0,3,5};
 MoveZero(nums);
 for(int i = 0; i<nums.size(); i++){
    cout<<nums[i]<<" ";
 }
 cout<<endl;

 return 0;
}