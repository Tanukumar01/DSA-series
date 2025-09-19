#include<bits/stdc++.h>

using namespace std;

vector<int>leftRotate(vector<int>nums, int k){
    int size = nums.size();
    k = k%size;
    reverse(nums.begin(), nums.begin()+k);
    reverse(nums.begin()+k, nums.end());
    reverse(nums.begin(), nums.end());

    return nums;
    
}


int main(){
    vector<int>nums = {1,2,3,4,5,6};
    int k = 2;
    vector<int>rotated = leftRotate(nums,k);
    for(int i = 0; i<nums.size(); i++){
        cout<<rotated[i]<<" ";
    }
    cout<<endl;
    return 0;
}