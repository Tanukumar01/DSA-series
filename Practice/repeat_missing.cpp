#include<bits/stdc++.h>
using namespace std;
 vector<int>missing_repeat(vector<int>nums){
    sort(nums.begin(), nums.end());
    int size = nums.size();
    int total = size*(size+1)/2;
    vector<int>result;
    set<int>st;
    int sum = 0;

    for(int i = 1; i<size-1; i++){
        if(nums[i-1]==nums[i]){
            result.push_back(nums[i]);
            break;
        }
    }
    for(int i = 0; i<size; i++){
        st.insert(nums[i]);
    }
   for(int it:st){
    sum+=it;
   }
    result.push_back(total-sum);

    return result;

 }

int main(){
   vector<int>nums = {1, 2, 3, 6, 7, 5, 7};
   vector<int>res = missing_repeat(nums);
   cout<<res[0];
   cout<<res[1];
   
   return 0;
}