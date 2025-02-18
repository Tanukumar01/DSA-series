#include<bits/stdc++.h>

using namespace std;

int main(){
    int nums[5]={1,1,2,2,4};
    int ans=0;
    
    for(int val: nums){
        ans= ans^val;
    }cout<<ans;
    return 0;
}