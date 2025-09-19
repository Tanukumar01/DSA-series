#include<bits/stdc++.h>

using namespace std;

int binarySearch(vector<int>nums,int target,int start, int end){
    if(start<=end){
       int mid = start+(end-start)/2;
       if(nums[mid]==target){
        return mid;
       }else if(nums[mid]<target){
        return binarySearch(nums,target,mid+1,end);
       }else{
        return binarySearch(nums,target,start,mid-1);
       }
    }
    return -1;
}

int main(){
    vector<int>nums = {1,2,3,4,5,6,7,10};
    int target = 10;
    int start = 0;
    int end = nums.size()-1;
    cout<<binarySearch(nums,target,0,nums.size()-1);
    return 0;
}