#include<bits/stdc++.h>

using namespace std;
void PrintSubset(vector<int> &nums, vector<int> &ans, int i ){

    if( i == nums.size()){
        for(int val:ans){
            cout<<val<<" ";
        }
        cout<<endl;
        return;
    }
    //include
    ans.push_back(nums[i]);
    PrintSubset(nums,ans,i+1);
    
    //exclude
    ans.pop_back();  //backtrack
    PrintSubset(nums,ans,i+1);   
}
int main(){
    vector<int>nums = {1,2,3};
    vector<int>ans;

    PrintSubset(nums,ans,0);
    return 0;
}