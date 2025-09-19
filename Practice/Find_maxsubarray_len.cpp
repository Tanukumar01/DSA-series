#include<bits/stdc++.h>
using namespace std;

int maxSubarrayLen(vector<int>nums,int k){
    vector<int>result;
    sort(nums.begin(),nums.end());
    int size = nums.size();
    int i = 0;
    int sum = 0;
   // int maxLen = 0;
    while(i<size){
        sum+=nums[i];
        result.push_back(sum);
        if(sum==k){
           return result.size();
        }else if(sum>k){
            i++;
        }
        i++;
    }
       return 0;
}

int main(){
  vector<int>nums  = { 10,5,2,7,1,9};
  int k = 15;
  cout<<maxSubarrayLen(nums,k);
  return 0;
}