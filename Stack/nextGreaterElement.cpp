#include <bits/stdc++.h>
using namespace std;

vector<int> nextGreater(vector<int>& nums) {
   int size =nums.size();
   stack<int>st;
   vector<int>ans(size);

   for(int i = size-1; i>=0; i--){
     
    while(!st.empty() && st.top()<=nums[i]){
        st.pop();
     } if(st.empty()){
            ans[i] = -1;
        }
        else {
            ans[i] = st.top();
            
        }
        st.push(nums[i]);//push current element 
    }
      
   
   return ans;
}

int main() {
    vector<int> nums = {1, 2, 6, 7, 8, 9};
    vector<int> result = nextGreater(nums);

    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
