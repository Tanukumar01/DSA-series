#include<iostream>
#include<vector>
using namespace std;

bool CheckSort(vector<int>& nums, int n ){
     if(n == 0 || n == 1){
        return true;
    }
    return nums[n-1]>nums[n-2] && CheckSort(nums, n-1);
}

int main(){

    vector<int>nums = {1,2,5,6,7,9,10};
    cout<<CheckSort(nums,7)<<endl;
    return 0;
}